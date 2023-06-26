#include <iostream>
#include <string>
using namespace std;


// class Nalepnica{
//     string naziv;
//     int id;
//     static int idGen;
//     public:
//     Nalepnica(string n){
//         naziv=n;
//         id=idGen;
//         idGen+=1;
//     }
//     Nalepnica(){
//         naziv="neadekvatno";
//         id=idGen;
//         idGen+=1;
//     }
//     Nalepnica(const Nalepnica &n){
//         naziv=n.naziv;
//         id=idGen;
//         idGen+=1;
//     }
//     void Ispis(){
//         cout<<id<<". "<<naziv;
//     }
//     int getId(){return id;}
    
// };
// int Nalepnica::idGen=1;

// enum Vrsta{BEZALKOHOLNO,ALKOHOLNO};

// class Flasa{
//     protected: 
//     Nalepnica nalepnica;
//     int cenaBK;
//     float zapremina;
//     Vrsta vrsta;
//     string nadjiVrstu(Vrsta v){
//         switch(v){
//             case 0:return "BEZALKOHOLNO";break;
//             case 1:return "ALKOHOLNO";break;
//             default: return "GRESKA";
//         }
//     }
//     public:
//     Flasa(Nalepnica n,int c,float z=0.33,Vrsta v=BEZALKOHOLNO):nalepnica(n){
//         cenaBK=c;
//         zapremina=z;
//         vrsta=v;
//     }
//     Flasa():nalepnica(){
//         cenaBK=100;
//         zapremina=0.5;
//         vrsta=BEZALKOHOLNO;
//     }       
//     virtual float Cena(){return 0;};
//     void setCenaBK(int c){cenaBK=c;}
//     virtual void Ispis(){
//         nalepnica.Ispis();
//         cout<<" "<<zapremina<<" litara "<<cenaBK<<" ("<<nadjiVrstu(vrsta)<<")"<<endl;
//     }
    
// };



// class Staklena:public Flasa{
//     public:
//     Staklena(Nalepnica n,int c,float z=0.33,Vrsta v=BEZALKOHOLNO):Flasa(n,c,z,v){};
//     virtual float Cena(){
//         if(zapremina<0.5){
//             return cenaBK+(float)5*cenaBK/100;
//         }
//         else if(zapremina>=0.5){
//             return cenaBK+(float)10*cenaBK/100;

//         }
//         return 0;
//     }
    
//     virtual void Ispis(){
//         nalepnica.Ispis();
//         cout<<"(STAKLENA FLASA)"<<" "<<zapremina<<" litara "<<Cena()<<" ("<<nadjiVrstu(vrsta)<<")"<<endl;
//     }
// };




// class Plasticna:public Flasa{
//     public:
//     Plasticna(Nalepnica n,int c,float z=0.33,Vrsta v=BEZALKOHOLNO):Flasa(n,c,z,v){};
//     virtual float Cena(){
//         return (float)cenaBK;
//     }
    
//     virtual void Ispis(){
//         nalepnica.Ispis();
//         cout<<"(PLASTICNA FLASA)"<<" "<<zapremina<<" litara "<<Cena()<<" ("<<nadjiVrstu(vrsta)<<")"<<endl;
//     }
// };

// // template <typename T>
// // void PrintArray(T* arr, int size)
// // {
// //     for (int i = 0; i < size; ++i)
// //     {
// //         arr[i]->Ispis();
// //     }
// // }

// float UKUPNO(int numObjects){
//     float cena=0;
//         Flasa** bottles = new Flasa*[numObjects];
//     for (int i = 0; i < numObjects; i++)
//     {
//         string labelName;
//         int price;
//         float volume;
//         int type;

//         cout << "Enter label name: ";
//         cin >> labelName;
//         cout << "Enter price: ";
//         cin >> price;
//         cout << "Enter volume: ";
//         cin >> volume;
//         cout << "Enter type (0 for PLASTICNA, 1 for STAKLENA): ";
//         cin >> type;

//         Nalepnica label(labelName);

//         if (type == 0)
//         {
//             bottles[i] = new Plasticna(label, price, volume, BEZALKOHOLNO);
//         }
//         else if (type == 1)
//         {
//             bottles[i] = new Staklena(label, price, volume, ALKOHOLNO);
//         }
        
        
//     }
//     for(int i=0;i<numObjects;i++){
//             cena+=bottles[i]->Cena();
//         }
//          PrintArray(bottles, numObjects);
//         return cena;
// }



int main()
{
    // Nalepnica n1("Alkohol"),n2("Hmelj");
    // Staklena s1(n1,150,0.25,ALKOHOLNO);
    // // Plasticna p1(n2,120);
    // // s1.Ispis();
    // // p1.Ispis();
    // int numObjects;
    // cout << "Enter the number of objects: ";
    // cin >> numObjects;
    // cout<<UKUPNO(numObjects);
    // return 0;
}