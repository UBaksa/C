#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;
// SVAKI ZADATAK MORA PREKO PRIVATE ATRIBUTA I DAA SE DOHVATE SA SET I GET 

//prva klasa odgovor
class Odgovor{
    private:
     string tekst;
     bool tacan;
     double procenat;
    public:
    Odgovor(string tekst = "",bool tacan=false,double procenat=0){//podrazumevamo prazan string!
    this->tekst=tekst;
    this->tacan=tacan;
    this->procenat=procenat
    }
    Odgovor(const Odgovor &o){
        tekst=o.tekst;
        tacan=o.tacan;
        procenat=o.procenat;
    }
    string getTekst(){return tekst;}
    bool getTacan(){return tacan;}
    double getProcenat(){return procenat;}
    void setTacan(bool value){tacan=value;}
    void setProcenat(double value){
        if(value >= 100 && value <=-100){
            procenat=value;
        }
        procenat=0;
    }
    friend ostream& operator <<(ostream& os,Odgovor& o){
        os<<o.tekst<<": "<<o.procenat<<"% "<endl;
        return os;
    }
    Odgovor& operator=(const Odgovor &o){
        if(this==&o)
         return *this;
    }
}
//druga klasa 
class Pitanje{
    public:
     string tekst;
     double poeni;
     int brOdgovora;
     Odgovor* ponudjeni;
     int trenutnoOdgovora;
    public:
    Pitanje(int brOdgovora=5,string tekst="",double poeni = 0){
        this->brOdgovora=brOdgovora;
        ponudjeni=new Odgovor[brOdgovora];
        trenutnoOdgovora=0;
        this->tekst=tekst;
        this->poeni=poeni;
    }
    Pitanje(const Pitanje &p){
        brOdgovora = p.brOdgovora;
        ponudjeni= new Odgovor[brOdgovora];
        trenutnoOdgovora=p.trenutnoOdgovora;
        tekst = p.tekst;
        poeni= p.poeni;
        for(int i=0;i<trenutnoOdgovora;i++){
            ponudjeni[i]= p.ponudjeni[i];
        }
    }
    Pitanje operator+=(const Odgovor &o){
        if(trenutnoOdgovora < brOdgovora){//proveravamo prvo koliko ima odgovora
            ponudjeni[trenutnoOdgovora]=o;
            trenutnoOdgovora++;
            double proc = 100;
            int brTacnih=0;
            for(int i=0;i<trenutnoOdgovora;i++){
                if(ponudjeni[i].getTacan()){
                    brTacnih++;
                }
            }
            proc = brTacnih > 0 ?(double)100/brTacnih : 100;
            for(int i=0;i<trenutnoOdgovora;i++){
                if(ponudjeni[i].getTacan()){
                    ponudjeni[i].setProcenat(proc);
                }
                else{
                    ponudjeni[i].setProcenat(-100)
                }
        }
    }
    double Odgovori(int niz[],int n){
        int p=0;//p nam cuva koliko je odgovora pogodio.
        for(int i=0;i<n;i++){
            if(ponudjeni[niz[i-1]].getTacan() == false){
                return 0;
            }
            p++;
        }
        double proc=0;
        for(int i=0;i<n;i++){
            if(ponudjeni[i].getTacan()==true){
                proc=ponudjeni[i].getProcenat();
                break;
            }
        }
        return (p*proc/100)*poeni;
    }
    friend ostream& operator <<(ostream& os,Pitanje &p){
        os<<p.tekst<<": "<<p.poeni<<endl;
        for(i=0;i<p.trenutnoOdgovora;i++){
            os<<p.ponudjeni[i];
        }
        return os;
    }
}
//treca klasa

class Oblik{
    
}
int main(){
// ocekvianje na ispitu:da na testu svako pitanje ima redni broj.da odgovor ima redni broj koji je odgovor na tom pitanju.
// sa statickim atributima da se radi.
// sastaviti program koji kreira klasu abstraktnu klasu Oblik i klase Trougao,Kvadrat ...
// Kreirati klasu Skup koja ima n oblika;// abstrakna klasa je klasa ako ima ili cistu ili potpuno cistu ili virtuelnu metodu.

return 0;
}