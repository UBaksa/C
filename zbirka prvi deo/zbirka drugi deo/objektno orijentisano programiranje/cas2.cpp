#include <stdio.h>
#include<iostream>
using namespace std;
#define MAX 20
bool prost(int a){
    int i;
    for(i=2;i<=a/2;i++){
        if(a % i == 0){
            return false;
        }
    }
    return true;
}
//ovo je petlja za proveravanje prostog broja preko boolean tip podatka.
void zamena(int *a,int *b){
    int pom;
    pom=*a;
    *a=*b;
    *b=pom;
}
// Kad se menjaju mesta moja da se radi preko pokazivaca da bi s sacuvala vrednost neke promenljive.
void zamena2(int &a,int &b){
    int pom=a;
    a=b;
    b=pom;
}
//ovaj nacin se uradio preko referenci!
// main(){
    // napisati program koji racuna faktorijel unetog broja n.
    //n!=n*(n-1)*...
    // int i,n,faktorijel=1;
    // cout<<"Unesite n"<<endl;//endl da se predje u novi red
    // cin>>n;
    // for(i=1;i<=n;i++){
    //     faktorijel*=i;
    // }
    // cout<<"Faktorijel broja n je"<<faktorijel<<endl;
    // return 0;


    // Koriscenjem while naredbe stampati sva velika slova engleskog alfabeta osim C;
    // char c;
    // c='A';
    // while(c <= 'Z'){
    //     if(c != 'C'){
    //         cout<<c<<endl;
    //     }
    //     c++;
    // }
//     while(c<='Z'){
//         if(c== 'C'){
//             break;
//         }
//         cout<<c<<endl;
//         c++;
//     }
//     return 0;

// kreirati funkciju za zamenu vrednosti dva cela broja;
// int broj1,broj2;
// cout<<"Unesite dva cela broja"<<endl;
// cin>>broj1>>broj2;
// // int *pt=&broj1;
// // int *pq=&broj2;
// cout<<broj1<<endl<<broj2<<endl;
// zamena2(broj1,broj2);
// cout<<"Novi redosled";
// cout<<broj1<<endl<<broj2<<endl;
// return 0;
// int i,n;
// cout<<"Unesite n"<<endl;
// cin>>n;
// for(i=3;i<=n;i+=2){
//     if(prost(i) == true && prost(i-2) == true){
//         cout<<"Blizanci su: "<<i<<" "<<(i-2)<<endl;
//     }
// }
// return 0;
// Napisati program koji ucitava celobrojni niz A od n elemenata(n<=20)
// Na osnovu niza A se formira niz B.Elementi niza B su indeksi elemenata niza A,
// tako kada bi smo elemente niza A smestili u niz C redom po indeksima iz niza B,niz C bi bio sortiran u opadajucem redosledu.
// int i,A[MAX],B[MAX],C[MAX],maxx,n,pom,j;
// cout<<"Unesite n"<<endl;
// cin>>n;
// if(n<=MAX){
// for(i=0;i<n;i++){
//     cin>>A[i];
// }
// cout<<"Niz A izlgeda ovako:"<<endl;
// for(i=0;i<n;i++){
//     cout<<A[i]<<" ";
// }
// maxx=A[0];
// for(i=0;i<n;i++){
//     if(A[i]>maxx){
//         maxx=A[i];
//     }
//     B[i]=i;
// }
// cout<<"Niz B izgleda ovako"<<endl;
// for(i=0;i<n-1;i++){
//     for(j=1;j<n;j++){
//         if(B[i]>B[j]){
//             pom=B[i];
//             B[i]=B[j];
//             B[j]=B[i];
//         }
//     }
// }
// for(i=0;i<n;i++){
//     cout<<B[i];
// }
// cout<<"Niz C:"<<endl;
// for(i=0;i<n;i++){
//     C[i]=A[i];
// }
// for(i=0;i<n-1;i++){
//     for(j=1;j<n;j++){
//     if(C[i]<C[j]){
//         pom=C[i];
//         C[i]=C[j];
//         C[j]=pom;
//     }
//     }
// }
// cout<<"Niz c izgleda ovako: ";
// for(i=0;i<n;i++){
//     cout<<C[i];
// }
// }
// else{
//     cout<<"Premasili ste duzinu niza!";
// }
// return 0;
// int A[20],B[20],C[20],j,pom,i,n;
// cout<<"n="<<endl;
// cin>>n;
// if(n>20){
//     cout<<"nemamo dovoljno memorije za unetu granica"<<endl;
//     return 1;
// }
// cout<<"el niza : "<<endl;
// for(i=0;i<n;i++){
//     cin>>A[i];
//     B[i]=i;
// }
// for(i=0;i<n;i++){
//     for(j=i+1;j<n;j++){
//         if(A[B[i]] < A[B[i-1]]){
//             pom=B[i];
//             B[i]=B[j];
//             B[j]=pom;
//         }
//     }
// }
// cout<<"el niza A su:"<<endl;
// for(i=0;i<n;i++){
//     cout<<A[i]<<" ";
// }
// cout<<"el.niza B su:"<<endl;
// for(i=0;i<n;i++){
//     cout<<A[B[i]]<<" ";
// }
// return 0;
// }//OVO JE ZA ZADATAK SA 3 NIZA GDE SE UZIMAJU INDEKSI I ELEMENTI IZ JEDNOG A VREDNOSTI IZ DRUGOG.
// ///////////////////////////////////////////////////////////////////////////////
// ///////////////////////////////////////////////////////////////////////////////
// ALOCIRANJE MEMORIJE

main(){
    // int i,n,max;
    // cout<<"Unesite n";
    // cin>>n;
    // int a* = new int[n];
    // cout<<"unesite elemente niza"<<endl;
    // for(i=0;i<n;i++){
    //     cin>>a[i];
    // }
    int i,n,m,max;
    cout<<"Unesite n i m";
    cin>>m>>n;
    int a* = new int[n];
    int **m = new int*[m];
    cout<<"unesite elemente niza"<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
}
