#include <stdio.h>
#include<iostream>
#include <string>
#include <math.h>
using namespace std;

// //1.	(30 poena) Klasa Ponuđeni odgovor se sastoji od teksta odgovora(string), koji se zadaje pri stvaranju (podrazumevano ""), informacije da li je tačan i procentualnog udela poena koji taj odgovor nosi (u opsegu od -100 do 100). Svi podaci su privatni. Svi podaci se mogu dohvatiti, a informacija o tačnosti i procentualni udeo se mogu postavljati(prilikom postavljanja proveriti da li su uneti ispravni procenti). Odgovor može da se ispiše na glavnom izlazu (out<<odgovor) u obliku tekst: udeo%.

// class Ponudjeni{
//     string odgovor;
//     bool tacan;
//     float procenat;
//     public:
//     Ponudjeni(string o="",bool t,float pr){
//         odgovor=o;
//         tacan=t;
//         procenat=pr;
//     }
//     void setString(string o){
//         odgovor=o;
//     }
//     void setTacan(bool t){
//         tacan=t;
//     }
//     void setProcenat(float pr){
//         if(pr > -100 && pr < 100){
//         procenat=pr;
//         }
//     }
//     string getOdgovor(){
//         return odgovor;
//     }
//     bool getTacan(){
//         return tacan;
//     }
//     float getProcenat(){
//         return procenat;
//     }

//     friend ostream& operator<<(ostream&out,Ponudjeni &p){
//         out<<p.tacan<<" "<<p.odgovor<<" "<<p.procenat<<endl;
//         return out;
//     }
// }

// int main(){
//     Ponudjeni p("da li je ovo odgovor",true,53.4);
//     cout<<p;
//     return 0;
// }



// // 2.	(30 poena) Klasa Pitanje sadrži zadate podatke koji su zaštićeni: tekst, broj poena koji nosi, broj ponuđenih odgovora (podrazumevano 5), kao i ponuđene odgovore(dinamičko alocirani niz odgovora). Stvara se bez ponuđenih odgovora, nakon čega se oni dodaju pojedinačno (pitanje+=odgovor). Prilikom dodavanja ponuđenog odgovora računaju se jednaki procentualni udeli svih tačnih odgovora dodatih u dato pitanje(u zbiru daju 100%), dok svaki netačan odgovor nosi -100%. Pomoću polimorfne metode može da se odgovori na pitanje, tada se zadaje niz koji sadrži redne brojeve ponuđenih odgovora koje ispitanik smatra tačnim i dužina tog niza(odgovori(int niz[],int br);). Tada se računa koliko je procentualno tačno odgovoreno na to pitanje. Na glavnom izlazu se ispisuje (out<<pitanje) tako što se u prvom redu ispiše tekst: poeni(maksimalni koje pitanje nosi), a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.



// class Pitanje{
//     protected:
//     string tekst;
//     int brojpoena;
//     int brponudjeni=5;
//     int trodgovora;
//     Ponudjeni *p;   
//     public:
//     Pitanje(string t,int broj,int brojponudjenih){
//         tekst=t;
//         brojpoena=broj;
//         brponudjeni=brojponudjenih;
//         p=new Ponudjeni[brojponudjenih];
//     }
//     Pitanje&  operator+=(Ponudjeni&odg){
//         if(trodgovora<brponudjeni){
//             p[trodgovora]=odg;
//             trodgovora++;
//             int tr=0;
//             for(int i=0;i<trodgovora;i++){
//                 if(p[i].getTacan())tr++;
//             }
//             float proc=100/tr;
//             for(int i=0;i<trodgovora;i++){
//                 if(p[i].getTacan())p[i].setProcenat(proc);
//                 else p[i].setProcenat(-100);
//             }
//             return *this;
//         }
//     }
//     friend ostream& operator<<(ostream&out,Pitanje &p){
//         out<<p.pitanje<<" "<<p.brojpoena<<" "<<endl;
//         for(int i=0;i<p.brponudjeni;i++){
//             out<<p.p[i];
//         }
//         return out;
//     }
//     virtual Odgovor(int niz[],int br){
//         float proc=0;
//         for(int i=0;i<br;i++){
//             if(p[niz[i]].getTacan()){
//             proc+=p[niz[i]].getProcenat();
//             }
//         }
//         return proc/100;
//     }
// }

// // 3.	(30 poena) Klasa Student nasleđuje klasu Pitanje i dodaje privatne podatke: broj indeksa(int), ime studenta (string) i broj osvojenih poena (double). Mogu da se dohvate svi podaci. Preklopiti metodu odgovori(int niz[].int br) tako da nakon što izračuna procenat tačnosti na odgovoreno pitanje izračuna broj osvojenih poena na tom pitanju i taj broj doda na broj osvojenih poena. Na glavnom izlazu se ispisuje (out<<student) tako što se u prvom redu ispiše broj indeksa, ime i broj osvojenih poena studenta, u drugom redu se ispiše tekst: poeni(maksimalni koje pitanje nosi), a potom se u zasebnim redovima ispišu sadržani ponuđeni odgovori.

// // (10 poena) Napisati main funkciju u kojoj ćete kreirati 7 odgovora, 2 pitanja i 1 studenta. U prvom pitanju dodati 4 odgovora(3 tačnih i 1 netačno), a u drugom pitanju 6(4 tačnih i 2 netačnih). Student neka bude isti kao drugo pitanje uz dodato ime, broj indeksa i broj osvojenih poena. Za podatke o odgovorima, pitanjima i studentu uneti  koristiti fiksne parameter (nije potrebno unositi vrednosti sa standardnog ulaza).

// class Student:public Pitanje{
//     int brojindeksa;
//     string imeStudenta;
//     double osvojenipoeni;
//     public:
//     Student(int brojindeksa,string imeStudenta,double osvojenipoeni){
//         this->brojindeksa=brojindeksa;
//         this->imeStudenta=imeStudenta;
//         this->osvojenipoeni=osvojenipoeni;
//     }
//     void setbr(int broj){
//         brojindeksa=broj;
//     }
//     void setime(string str){
//         imeStudenta=str;
//     }
//     void setopoeni(double broj){
//         osvojenipoeni=broj;
//     }
//     int getbroj(){
//         return brojindeksa;
//     }
//     string getime(){
//         return imeStudenta;
//     }
//     double getpoeni(){
//         return osvojenipoeni;
//     }
//     virtual float Odgovor(int niz[],int brOdgovora){
//         float proc=0;
//         for(int i=0;i<br;i++){
//             if(p[niz[i]].getTacan()){
//             proc+=p[niz[i]].getProcenat();
//             }
//         }
//         osvojenipoeni+=proc/100*brojpoena;
//         return proc/100*brojpoena;

//     }

//     friend ostream& operator<<(ostream&out,Student &p){
//         out<<p.imeStudenta<<" "<<p.brojindeksa<<" "<<p.osvojenipoeni<<endl;
//         return out;
//     }
// }