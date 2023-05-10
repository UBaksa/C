#include <stdio.h>
#include <string.h>
#include <math.h>
#include <iostream>
using namespace std;

// // polimorfizam.
// // bx+c=0;x=-c/b;
// class Linearna{
//     protected:
//     float b,c;
//     public:
//     Linearna(float b,float c){
//         this->b=b;
//         this->c=c;
//     }
//     virtual void Resenja(){
//         if(b!=0){
//         float x = -c / b;
//         cout<<"Resenje linearne jednacine je "<<x<<endl;
//         }
//         else{
//             cout<<"Linearna jednacina nema resenja"<<endl;
//         }
//     }
//     virtual void Ispis(){
//         cout<<"Linearna ima oblik "<<endl;
//         cout<<b<<"x+ "<<c<<" = 0"<<endl;
//     }
// };
// //ax2 + bx + c = 0;
// class Kvadratna : Linearna
// {
//     protected:
//     float a;
//     public:
//     Kvadratna(float a,float b,float c) : Linearna(b,c){
//         this->a=a;
//     }
//     void Resenja(){
//         float D = b*b-4*a*c;
//         if(D<0){
//             cout<<"Kvadratna jednacina nema realnih resenja!"<<endl;
//         }
//         else if(D == 0){
//             float x = -b/(2*a);
//             cout<<"Jednacina ima jedno resenje i to je "<<x<<endl;
//         }
//         else{
//             float x1 = (-b+sqrt(D))/(2*a);
//             float x2 = (-b-sqrt(D))/(2*a);
//             cout<<"Jednacina ima dva realna resenja i to su :"<<endl;
//             cout<<"X1= "<<x1<<endl;
//             cout<<"X2= "<<x2<<endl;
//         }
//         void Ispis(){
//             cout<<"Kvadratna jednacina je oblika "<<endl;
//             cout<<a<<"x2 + "<<b<<"x + "<<c<<" = 0"<<endl;
//         }
//     }
// }
// main(){
//     Linearna l(2,5);
//     Kvadratna k(3,10,4);
//     l.Ispis();
//     k.Ispis();
//     l.Resenja();
//     k.Resenja();
// }


