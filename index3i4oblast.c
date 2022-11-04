// #include<stdio.h>
// #include<math.h>
// main(){
//     char z;
//     double a,b,x;
//     printf("Unesite znak vece ili manje:");
//     scanf("%c",&z);
//     printf("Unesite koeficijente:");
//     printf("\na =");
//     scanf("%lf",&a);
//     printf("\nb = ");
//     scanf("%lf",&b);
//     printf("Linearna nejednacina ima oblik %.2f*%.2f + %.2c0",a,b,z);
//     x=-b/a;
//     if(a>0){
//         printf("\nNejednacina ima resenje x%c%.2f",z,x);
//     }
//     else{
//         printf("\nNejednacina ima resnje .2f%c%x",z,x);
//     }
//     return 0;
// }3.16
// main(){
//     int a1,a2,b1,b2,c1,c2,D,Dx,Dc,x,y;
//     printf("Unesite a1 i a2.");
//     scanf("%d %d",&a1,&a2);
//     printf("\nUnesite b1 i b2.");
//     scanf("%d %d",&b1,&b2);
//     printf("\nUnesite c1 i c2.");
//     scanf("%d %d",&c1,&c2);
//     if(D != 0){
//         D = a1*b2 - a2*b1;
//     Dx = c1*b2 -c2*b1;
//     Dc = a1*c2 -c2*a1;
//         x = Dx/D;
//         y = Dc/D;
//         printf("\nResenja sisteam jednacina:\n x=%.2f",x);
//         printf("\ny=%.2f",y); 
//     }
//     else if(D==Dx && Dx==Dc){
//         D = a1*b2 - a2*b1;
//     Dx = c1*b2 -c2*b1;
//     Dc = a1*c2 -c2*a1;
//         Dc=0;
//         printf("Sistem ima beskonacno resenja (neodredjena resenja");
//     }
//     else{
//         printf("Nema resenja!");
//     }
//     return 0;
// }3.17
// #include <stdio.h>
// #include <math.h>
// main(){
//     double a,b,c,D,x1,x2;
//     printf("Unesite koeficijente:\na=");
//     scanf("%lf",&a);
//     printf("b=");
//     scanf("%lf",&b);
//     printf("c=");
//     scanf("%lf",&c);
//     if(a!=0){
//         D=b*b - 4*a*c;
//         if(D>0){
//             x1=(-b+sqrt(D))/(2*a);
//             x1=(-b-sqrt(D))/(2*a);
//             printf("\nRealna resenja su:\nx1=%.2f,\nx2=%.2f",x1,x2);
//         }
//         else if(D ==0){
//             x1=-b/(2*a);
//             printf("\nRealna resenja su:x1=x2=%.2f",x1);
//         }
//         else{
//             x1=-b/(2*a);
//  x2=sqrt(-D)/(2*a);
//  printf("\nKompleksna resenja:\n");
//  printf("x1=%.2f+i%.2f, x2=%.2f-i%.2fi",x1,x2,x1,x2);
//         }
//     }
//     else{
//         if(b!=0){
//             x1=-c/b;
//             printf("\nResenje linearne jednacinen je:\nx=%.2f",x1);
//         }
//         else{
//             printf("Sistem nema resenje.");
//         }
//     }
//     return 0;
// }3.18

// 3. OBLAST DONE!

// 4.FOR petlja - pocetak

#include<stdio.h>
#include<math.h>

// main(){
//     int i;
//     for(i=1;i<=5;i++){
//         printf("\nPozdrav svima.");
//     }
//     return 0;
// }4.1

// main(){
//     int i;
//     for(i=1;i<=10;i++){
//         printf("\n%d",i);
//     }
//     return 0;
// }4.2/a

// main(){
//     int i;
//     for(i=1;i<=10;i++){
//         if(i%2 !=0){
//             printf("\n%d",i);
//         }
//         else{
//             continue;
//         }
//     }
//     return 0;
// }4.2/b

// main(){
//     int i;
//     for(i=10;i>=1;i--){
//         printf("\n%d",i);
//     }
//     return 0;
// }4.2/c

// main(){
//     int n,S,i;
//     printf("Unesite neki n broj.");
//     scanf("%d",&n);
//     S = 0;
//     for(i=1;i<=n;i++){
//         S += i;
//         printf("\nSuma iznosi: %d",S);
//     }
//     return 0;
// }4.3

// main(){
//     int n,S,i,AS;
//     printf("Unesite neki broj n.");
//     scanf("%d",&n);
//     S=0;
//     AS=0;
//     for(i=1;i<=n;i++){
//         S += i;
//         AS = S/n;
//         printf("\nSuma iznosi %d",S);
//         printf("\nA aritmeticka sredina iznosi:%d",AS);
//     }
//     return 0;
// }4.4 po mome

// main(){
//     int i,n;
//     long faktorijal=1;
//     printf("Unesite neki n broj.");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         faktorijal *=i;
//     printf("Faktorijal = %ld\n",faktorijal);
//     }
//     return 0;
// }4.6

// main(){
//     int n,i,S;
//     long faktorijal=1;
//     S=0;
//     printf("Unesite neki n broj.");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         faktorijal*=i;
//         S+=faktorijal;
//         printf("\nS= %d",S);
//     }
//     return 0;
// }4.7
