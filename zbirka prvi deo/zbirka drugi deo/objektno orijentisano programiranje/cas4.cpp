#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

// class Student{
//     private:
//     char ime[20];
//     char prezime[40];
//     char brojIndeksa[9];
//     public:
//     Student(){
//         strcpy(ime,"Bakir");
//         strcpy(prezime,"Ujkanovic");
//         strcpy(brojIndeksa,"036002");
//         cout<<"Pozvao sam constructor funkciju\n";//konstruktor bez argumenata.
//     }
//     Student(char *im,char *prez,char *bi){//konstruktor sa argumentima.
//         strcpy(ime,im);
//         strcpy(prezime,prez);
// //         strcpy(brojIndeksa,bi);
// //         cout<<"Pozvao sam constructor funkciju\n";
// //     }
// //     void ispis(){
// //         cout<<"Ime:"<<ime<<"\nPrezime:"<<prezime<<"\nBroj indeksa:"<<brojIndeksa<<endl;
// //     }
// //     ~Student(){
// //         cout<<"Pozvao se destruktor classe student."<<endl;
// //     }
// // };

// // main(){
// // // realizovati klasu Student koja ima privatne atribute,ime,prezime,i broj indeksa.
// // // Metode:konstructor bez argumenata sa 3 argumenta,ispis koja ispisuje vrednosti atributa.
// // Student s1;//konstruktor bez argumenata
// // Student s2("Bakir","Ujkanovic","036002");//konstruktor sa argumentima.
// // s1.ispis();
// // s2.ispis();
// // return 0;
// // }

// //2.

// // opisati klasu stack koja sadrzi niz znakova kao i realizovane sledece metode:
// // stack sa nekom duzinom,npr 5 elemenata.
// // stack koja se dobija konstrukturom sa datim stringom i duzinom.

// class Stack{
//     private://ako se ne definise private ili public,on se uvek stavi da je private;
//     char *s;
//     int max_len;
//     int top;
//     public:
//     Stack(int duzina=10){//const da dodamo ako ne zelimo da neka metoda ne promeni parametre niza.
//         max_len = duzina;
//         s = new char[max_len];
//         for(int i=0;i<duzina;i++){
//             s[i]=niz[i];
//         }
//         top = max_len-1;
//     }
//     void reset(){
//         top = -1;
//     }
//     void push(char c){
//         if(top < max_len-1){
//         top++;
//         s[top]=c;
//     }
//     else{
//         cout<<"Stack je pun neces moci dalje !"<<endl;
//     }
//     }
//     char pop(){
//         if(top > -1){
//         return s[top--];
//         // char c = s[top];
//         // top--;
//         // return c;
//         }
// //     }
// //     char top_of(){
// //         if(top>-1){
// //         return s[top];
// //         }
// //         else{
// //             return <<"Prazan niz"<<endl;
// //         }
// //     }
// //     bool empty(){
// //         if(top == -1){
// //             return true;
// //         }
// //         else{
// //             return false;
// //         }
// //     }
// //     bool full(){
// //         if(top == max_len - 1){
// //             return true;
// //         }
// //         else{
// //             return false;
// //         }
// //     }

// //     Stack(const Stack &st){
// //         max_len=st.max_len;
// //         s=new char[max_len];
// //         for(int i=0;i<st.max_len;i++){
// //             s[i]=st.s[i];
// //         }
// //         top=st.top;
// //     }
// // };
// // main(){
// //     Stack s1(5),s2("ABCD",4);
// //     for(int i=0;i<4;i++){
// //         cout<<"Unesite element koji hocete da dodate u prvi stack"<<endl;
// //         char c;
// //         cin>>c;
// //         s1.push(c);
// //     }
// //     cout<<"Na vrhu prvog stack-a nalazi se" <<s1.top_of()<<endl;
// //     cout<<"Na vrhu drugog stack-a nalazi se "<<s2.top_of()<<endl;
// //     while(!s1.empty()){
// //         cout<<"Element iz prvog stacka je "<<s1.pop()<<endl;
// //     }
// //     return 0;
// // }

// class Fibonaci{
//     public:
//     //atributi
//     int n;
//     long *niz;
//     //metode
//     Fibonaci(){
//         n=10;
//         niz = new long[n];
//         postavi();
//     }
//     Fibonaci(int n){
//         this->n=n;
//         postavi();
//     }
//     Fibonaci(const Fibonaci &f){
//         n=f.n;
//         for(int i=0;i<n;i++){
//             niz[i]=f.niz[i];
//         }
//     }
//     long suma(){
//         long s=0;
//         for(int i=0;i<n;i++){
//             s+=niz[i];
//         }
//         return s;
//     }
//     long vrednost(int i){
//         if(i<n && i > -1){
//         return niz[i];
//         }
//         cout<<"Ne postoji elementa na toj poziciji!"<<endl;
//         return 0;
//     }
//     void prosiri(int x){
//         n=x;
//         delete [] niz;    
//         postavi();
//         }
//     void ispis(){
//             for(int i=0;i<n;i++){
//                 cout<<niz[i]<<" ";
//                 cout<<endl;
//             }
//         }
//         ~Fibonaci(){
//             delete [] niz;
//         }
//     private:
//     void postavi(){
//         niz = new long[n];
//         niz[0]=1;
//         niz[1]=1;
//         for(int i=2;i<n;i++){
//             niz[i]=niz[i-1]+niz[i-2];
//         }
//     }
// };

// main(){
//     Fibonaci f1,f2(10);
//     cout<<"Suma elemenata prvog Fibonacijevog niza iznosi "<<f1.suma()<<endl;
//     f1.prosiri(15);
//     Fibonaci f3 = f1;//pozivanje copy konstruktora!!!!
//     f3.ispis();
//     f1.ispis();
//     f2.ispis();
//     return 0;
// }


class Odeljenje{
    int brUcenika;
    float *uspeh;
    public:
    Odeljenje(int br = 10){
        uspeh = new float[br];
        cout<<"Unesite uspehe ucenika"<<endl;
        for(int i=0;i<br;i++){
            cin>>uspeh[i];
        }
    }
    Odeljenje(const Odeljenje &o){
        brUcenika = o.brUcenika;
        for(int i =0;i<brUcenika;i++){
            uspeh[i]=o.uspeh[i];
        }
    }
    float prosek(){
        float s=0;
        for(int i=0;i<brUcenika;i++){
            s+=uspeh[i];
        }
        return s/brUcenika;
    }
    int br_odlican5(){
        int br=0;
        for(int i=0;i<brUcenika;i++){
            if(uspeh[i]==5.00){
                br++
            }
        }
        return br;
    }
    void ispis(){
        int brn=0,brd=0,brdo=0,bro=0;
        for(int i=0;i<brUcenika){
            brn+= (uspeh[i]<1.5)? 1 : 0;
            brd+= (uspeh[i]>=1.5 && uspeh[i]<2.5)? 1 : 0;
            brdo+= (uspeh[i]>=2.5 && uspeh[i]<3.5)? 1 : 0;
            br0+= (uspeh[i]>=4.5)? 1 : 0;
        }
        cout<<"Broj nedovoljnih je "<<brn<<endl;
        cout<<"Broj dovoljnih je "<<brd<<endl;
        cout<<"Broj dobrih je "<<brdo<<endl;
        cout<<"Broj odlicnih je "<<bro<<endl;
        cout<<"Prosek odeljenja je  "<<prosek()<<endl;
    }
    void uspehUcenika(int i,float u){
        if(i>-1 && i < brUcenika)
        uspeh[i]=u;
    }
    void dodajucenika(float u){
        int i;
        float *p;
        p = new float[brUcenika];
        for(i=0;i<brUcenika;i++){
            p[i]=uspeh[i];
        }
        delete []uspeh;
        
    }
}