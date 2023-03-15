#include <stdio.h>
#include<iostream>
#include <string.h>
#include <math.h>
using namespace std;

//////////KLASE U CPP/////////

//1.zadatak
//realizovati klasu Tacka sa javnim atributima x i y.
// metode:inicijalizacija(a,b) koja postavlja vrednosti atributa na vrednosti koje dolaze kao argumenti,
// translacija(dx,dy) koja translira tacku za vrednosti dx po x,dy po y,pozicija() ispisuje trenutnu poziciju tacke u koordinatnom sistemu(njene x i y koordinate).
//

// class Tacka
// {
//     //atributima,ako cemo posebno private i public,mora svaki u poseban block scope
//     public:
//     int x;
//     int y;
//     //prototipi metoda
//     void inicijalizacija(int a,int b);
//     void translacija(int dx,int dy);
//     void pozicija();
// };
// // implementaciju metodavan van klase-obavezno!
// void Tacka::inicijalizacija(int a,int b)
// {
//     x = a;
//     y = b;
// }
// void Tacka::translacija(int dx,int dy)
// {
//     x= x+dx;
//     y= y+dy;
// }
// void Tacka::pozicija()
// {
// cout<<"Tacka se nalazi u ("<<x<<","<<y<<")"<<endl;
// }
// main(){
//     Tacka t;
//     t.inicijalizacija(2,3);
//     t.pozicija();
//     t.translacija(5,-4);
//     t.pozicija();
//     t.x = 15;
//     t.y = 19;
//     t.pozicija();
//     return 0;
// }

// 2.zadatak
// Kreirati klasu Post koja ima atribute,Naslov,opis,vremedatumkreiranja,Rejting.
// Metode inicijalizacija,inkrementacija,dekrementiranje,ispis.
// Post treba da ilustruje post na StackOverFlow portalu.

// class Post {
//     public:
//     char naslov[20];
//     char opis[255];
//     char datum[16];
//     private:
//     int rating;
//     //prototipi-metode.
//     public:
//     void inicijalizacija(char *n,char *o,char *vd)
//     {
//         strcpy(naslov,n);
//         strcpy(opis,o);
//         strcpy(datum,vd);
//         rating = 0;
//     }
//     void inkrementiranje(){
//         rating++;
//     }
//     void dekrementiranje(){
//         rating--;
//     }
//     void ispis(){
//         cout<<"Naslov posta: "<<naslov<<endl;
//         cout<<"Opis: "<<opis<<endl;
//         cout<<"Datum i vreme kreiranje posta: "<<datum<<endl;
//         cout<<"Ocena: "<<rating<<endl;
//     }
// };

// main(){
//     Post p1,p2;
//     p1.inicijalizacija("How to print message in C++","Use cout from iostream library","15.03.2023 9:01");
//     p2.inicijalizacija("How to pass exam OOP1","Practice 2-3 hous per day","15.03.1979 6:00");
//     int i;
//     for(i=1;i<=10;i++){
//         p1.inkrementiranje();
//     }
//     for(i=1;i<=3;i++){
//         p1.dekrementiranje();
//     }
//     for(i=1;i<=3;i++){
//         p2.inkrementiranje();
//     }
//     for(i=1;i<=57;i++){
//         p2.dekrementiranje();
//     }
//     p1.ispis();
//     p2.ispis();
//     return 0;
// }
// 3.zadatak 
// Kreirati klasu Trougao koja ima tri privatna atributa a,b i c(realne vrednosti).
// Metode:inicijalizacija(a,b,c)(realne vrednosti),postavlja vrednosti atributa na vrednosti argumenata.
// pisi -metoda koaj ispisuje podatke o atributima a,b, i c.
// p-metoda koja racuna i vraca povrsinu trougla;
// o-metoda koja racuna i vraca obim trougla.
// class Trougao{
//     private:
//     float a;
//     float b;
//     float c;
//     public:
//     void inicijalizacija(float a,float b,float c){
//         this->a=a;
//         this->b=b;
//         this->c=c;
//     }
//     void pisi(){
//         cout<<"Stranica a: "<<a<<endl;
//         cout<<"Stranica b: "<<b<<endl;
//         cout<<"Stranica c: "<<c<<endl;
//     }
//     float povrsina(){
//         float s=PO();
//         return sqrt(s*(s-a)*(s-b)*(s-c));
//     }
//     float obim(){
//         return a+b+c;
//     }
//     bool provera(){
//         if(a+b>c && a+c>b && b+c>a){
//             return true;
//         }   
//         return false;
//     }
//     private:
//     float PO(){
//         return (a+b+c)/2;
//     }
// };

// main()
// {
//     // unositi strancie sve dok korisnik ne unese ispravne vrednosti(da se moze formirati trougao)
// Trougao t;
// float a,b,c;
// while(1){
// cout<<"Unesite stranice trougla"<<endl;
// cin>>a>>b>>c;
// t.inicijalizacija(a,b,c);
// if(t.provera() == true){
//     cout<<"Obim trougla je "<<t.obim()<<endl;
//     cout<<"Povrsina trougla je "<<t.povrsina()<<endl;
//     // cout<<"Poluobim trougla je "<<t.PO()<<endl;
//     break;
// }
// else{
//     cout<<"Nije moguce napraviti trougao!";
// }
// }
// return 0;
// }

//4.zadatak
// Realiovati klasu Automobil sa javnim atributima rezervoar i potrosnja.
// Metode:inicijalizacija(rezervoar,potrosnja);
//predji (km) koja pokrece automobil i prelazi km kilometara,pri cemu se smanjuje nivo goriva u zavisnosti od potrosnje predjenih km.
// ispis() ispisuje podatke o automobilu 
// adresa() ispisuje adresu objekta koji je pozvao ovu metodu.

class Automobil{
    public:
    float rezervoar;
    float potrosnja;
    // metode:
    void inicijalizacija(float rezervoar,float potrosnja){
        this->rezervoar=rezervoar;
        this->potrosnja=potrosnja;
    }
    void predji_km(float km){
        if(rezervoar >= izracunajpotrebnogoriva(km)){
        rezervoar-=km*potrosnja/100;
        }
        else{
            cout<<"Nemate dovoljno goriva za ovaj put!"<<endl;
        }
    }
    void ispis(){
        cout<<"Nas automobil ima "<<rezervoar<<" goriva u sebi,a trosi"<<potrosnja<<" l/100km"<<endl;
    }
    void adresa(){
        cout<<"Nas objekat se nalazi na adresi: "<<this<<endl;//samo this ako trazimo adresu objekta.
    }
    private:
    float izracunajpotrebnogoriva(float km){
        return km*potrosnja/100;
    }
};
main(){
    Automobil auto;
    auto.inicijalizacija(20.74,7.5);
    auto.ispis();
    auto.predji_km(56);
    auto.ispis();
    auto.predji_km(60);
    auto.ispis();
    auto.predji_km(300);
    auto.ispis();
    return 0;
}
// da se provezba klasa film,clan biblioteke,ucionica,fax...ugl samo da se provezba.