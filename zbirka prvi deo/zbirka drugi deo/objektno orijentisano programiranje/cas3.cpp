#include <stdio.h>
#include<iostream>
#include <string.h>
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

class Post {
    public:
    char naslov[20];
    char opis[255];
    char datum[16];
    private:
    int rating;
    //prototipi-metode.
    public:
    void inicijalizacija(char *n,char *o,char *vd)
    {
        strcpy(naslov,n);
        strcpy(opis,o);
        strcpy(datum,vd);
        rating = 0;
    }
    void inkrementiranje(){
        rating++;
    }
    void dekrementiranje(){
        rating--;
    }
    void ispis(){
        cout<<"Naslov posta: "<<naslov<<endl;
        cout<<"Opis: "<<opis<<endl;
        cout<<"Datum i vreme kreiranje posta: "<<datum<<endl;
        cout<<"Ocena: "<<rating<<endl;
    }
};

main(){
    Post p1,p2;
    p1.inicijalizacija("How to print message in C++","Use cout from iostream library","15.03.2023 9:01");
    p2.inicijalizacija("How to pass exam OOP1","Practice 2-3 hous per day","15.03.1979 6:00");
    int i;
    for(i=1;i<=10;i++){
        p1.inkrementiranje();
    }
    for(i=1;i<=3;i++){
        p1.dekrementiranje();
    }
    for(i=1;i<=3;i++){
        p2.inkrementiranje();
    }
    for(i=1;i<=57;i++){
        p2.dekrementiranje();
    }
    p1.ispis();
    p2.ispis();
    return 0;
}