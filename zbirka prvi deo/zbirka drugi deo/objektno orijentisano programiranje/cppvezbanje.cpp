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
        return out<<p.barKod<<" "<<p.cena<<" kolicina: "<<p.kolicina<<endl; << "Otpornost: " << o.otpornost << (o.Provera() ? " defektan" : " nije defektan") << endl;
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
       virtual string getTip(){return tip;}

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
},
#include <iostream>
#include <string>

using namespace std;


class Let{
    protected:
    string polaznaD;
    string dolaznaD;
    string datum;
    int brojM;
    int brojR;
    public:
    Let(string p,string d,string dat,int bm,int br){
        polaznaD=p;
        dolaznaD=d;
        datum=dat;
        brojM=bm;
        brojR=br;
    }
    virtual int getBrSlobodnih(){return brojM - brojR;}
    virtual void rezervacija(){
        if(brojR!=brojM){brojR++;
        cout<<"uspesno ste rezervisali let"<<endl;}
        else cout<<"Sva mesta su rezervisana"<<endl;
    }
    virtual void Ispis(){
        cout<<"Let iz "<<polaznaD<<" do "<<dolaznaD<<endl;
        cout<<"Polazak "<<datum<<" broj mesta: "<<brojM<<" broj rezervisanih :"<<brojR<<endl;
    }
    virtual string getClass(){return "let";}
};

class RedovniLet:public Let{
    public:
    RedovniLet(string p,string d,string dat,int bm,int br):Let(p,d,dat,bm,br){}
    virtual void Ispis(){
        cout<<"Redovan let iz "<<polaznaD<<" do "<<dolaznaD<<endl;
        cout<<"Polazak "<<datum<<" broj mesta: "<<brojM<<" broj rezervisanih :"<<brojR<<endl<<endl;
    }
        virtual string getClass(){return "RedovniLet";}

};


class CarterLet:public Let{
    protected:
    int brojV;
    public:
    CarterLet(string p,string d,string dat,int bm,int br,int bv):Let(p,d,dat,bm,br){brojV=bv;}
    virtual void Ispis(){
        cout<<"Carter let iz "<<polaznaD<<" do "<<dolaznaD<<endl;
        cout<<"Polazak "<<datum<<" broj mesta: "<<brojV<<" broj rezervisanih :"<<brojR<<endl<<endl;
    }
    virtual void rezervacija(){
        if(brojR<=brojV){brojR++;
        cout<<"uspesno ste rezervisali let"<<endl<<endl;}
        else cout<<"Sva mesta su rezervisana"<<endl<<endl;
    }
    virtual int getBrSlobodnih(){return brojV - brojR;}
    virtual string getClass(){return "CarterLet";}


};

template<typename T>
void dodaj(Let** &letovi,int &brletova,int maxLetova,T& let){
    if(let.getBrSlobodnih()>0){
        if(let.getClass()=="CarterLet")letovi[brletova++]= &let;
        else if(let.getClass()=="RedovniLet")letovi[brletova++]=&let;
        cout<<"let je uspesno dodat"<<endl;
    }
    
}
int main()
{
CarterLet l1("Beograd","Tivat","16.5.2023 10:30:20",120,110,120),
l2("Nju Jork","Tivat","24.2.2023 11:30:21",120,110,120);

RedovniLet l3("Beograd","Amsterdam","21.5.2021 11:10:20",120,110),
l4("Ankara","Istanbul","11.5.2023 11:30:20",120,110);
int maxLetova,brletova=0;
cin>>maxLetova;

Let *letovi=new Let[maxLetova];
letovi[0]=new CarterLet("Beograd","Tivat","16.5.2023 10:30:20",120,18,120);
letovi[1]=new CarterLet("Nju Jork","Tivat","24.2.2023 11:30:21",120,105,120);
letovi[2]=new RedovniLet("Beograd","Amsterdam","21.5.2021 11:10:20",110,110);
letovi[3]=new RedovniLet("Ankara","Istanbul","11.5.2023 11:30:20",120,110);
brletova=4;
dodaj(letovi,brletova,maxLetova,l1);
for(int i=0;i<brletova;i++){
    letovi[i]->Ispis();
}

return 0;
}