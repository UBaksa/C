#include <stdio.h>
#include<iostream>
#include <string.h>
#include <math.h>
using namespace std;

class Proizvod{
    protected:
    string tip;
    string barKod;
    float cena;
    int kolicina;
    public:
    Proizvod(string b,float c,int k){
        barKod=b;
        cena=c;
        kolicina=k;
    }
    virtual bool Provera(){return true;};
    friend ostream& operator<<(ostream& out,Proizvod &p){
        return out<<p.barKod<<" "<<p.cena<<" kolicina: "<<p.kolicina<<endl;
    }
    string getBarKod(){return barKod;}
    virtual string getTip(){return tip;};
};

class Otpornik:public Proizvod{
    
    int otpornost;
    float temperatura[2];
    public:
    Otpornik(string b,float c,int k,int o,float niz[2]):Proizvod(b,c,k){
        otpornost=o;
        temperatura[0]=niz[0];
        temperatura[1]=niz[1];
        tip="Otpornik";
    }
    Otpornik(Proizvod &p1,int o,float niz[2]):Proizvod(p1){
        otpornost=o;
        temperatura[0]=niz[0];
        temperatura[1]=niz[1];
    }
    bool Provera(){
        if((otpornost==100000)||otpornost==0)return true;
        return false;
    }
    friend ostream& operator<<(ostream& out, Otpornik& o) {
        out << static_cast<Proizvod&>(o) << "Otpornost: " << o.otpornost << (o.Provera() ? " defektan" : " nije defektan") << endl;
        return out;
    }
    virtual string getTip()const{return tip;}
};



class Kondenzator:public Proizvod{
    
    int kapacitivnost;
    public:
    Kondenzator(string b,float c,int k,int ka):Proizvod(b,c,k){
        kapacitivnost=ka;
        tip="Otpornik";
    }
    
    bool provera(){
        if((kapacitivnost==0))return true;
        return false;
    }
    friend ostream& operator<<(ostream& out,Kondenzator &o){
        out<<static_cast<Proizvod&>(o)<<" "<<o.kapacitivnost<<(o.Provera()?" defektan":" nije defektan")<<endl;
        return out;
    }
       virtual string getTip()const{return tip;}

};


class Traka{
    Proizvod **proizvodi;
    struct Elem{
        string barKod;
        string tip;
        Elem *next=NULL;
        Elem(string b,string t){barKod=b;tip=t;}
    };Elem *first=NULL,*last=NULL,*temp=NULL;
    int trenutno=0;
    int kapacitet;
    
    public:
    Traka(int k){
        kapacitet=k;
        proizvodi=new Proizvod*[k];
    }
    Traka& dodaj(Proizvod *p){
        if(kapacitet>trenutno){
            proizvodi[trenutno++]=p;
        }
        else cout<<"nema mesta"<<endl;
        return *this;
    }
    void PromijeniKolicinu(int novaKolicina) {
    if (novaKolicina > kapacitet) {
        Proizvod** noviNiz = new Proizvod*[novaKolicina];
        for (int i = 0; i < trenutno; i++) {
            noviNiz[i] = proizvodi[i];
        }
        delete[] proizvodi;
        proizvodi = noviNiz;
        kapacitet = novaKolicina;
    }
}
    
    Traka& ukloni(){
        if(trenutno>0){
            if(!proizvodi[0]->Provera()){
                Elem *pom=new Elem(proizvodi[0]->getBarKod(),proizvodi[0]->getTip());
                if(!first)first=last=pom;
                else{
                    last->next=pom;
                    last=pom;
                }
            }
            for(int i=0;i<trenutno;i++){
                proizvodi[i]=proizvodi[i+1];
            }
            trenutno--;
        }
        return *this;
    }
    friend ostream& operator<<(ostream& out,Traka &o){
        for(int i=0;i<o.trenutno;i++){
            out<<*o.proizvodi[i];
        }
        return out;
    }
    void ispis(){
        cout<<"stvari koje su prosle traku su:"<<endl;
        temp=first;
        while(temp){
            cout<<temp->barKod<<" "<<temp->tip<<endl;
            temp=temp->next;
        }
    }
    Traka& operator+=(Proizvod *p){
        for(int i=0;i<trenutno/3;i++){
            if(proizvodi[i]->Provera())proizvodi[i]=p;
        }
        return *this;
    }
};

int main()
{
    float niz1[2]={ 1.0, 10.0 };
Proizvod* p3 = new Otpornik("3", 100.0, 10, 1, niz1);
Proizvod* p4 = new Otpornik("4", 200.0, 5, 2000, niz1);
Proizvod* p1 = new Kondenzator("1", 200.0, 5, 0);
Proizvod* p2 = new Kondenzator("2", 200.0, 5, 2000);
Traka t1(3);
t1.dodaj(p1);
t1.dodaj(p3);
t1.dodaj(p4);
t1+=p2;
t1.PromijeniKolicinu(4);
t1.dodaj(p1);

cout<<t1;
t1.ispis();
    return 0;
}