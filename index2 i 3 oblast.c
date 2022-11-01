/*#include <stdio.h>
main()

int ceo;
float realan;
printf("Unesite jedan ceo broj:  ");
scanf("%d",&ceo);
printf("Unesite jedan realan broj:  ");
scanf("%f",&realan);
printf("\nCeo broj: %d", ceo);
printf("\nRealan broj: %f", realan);
getche();
return 0;

*/
/*2.6
main()
{
 float a;
 printf("Unesite jedan realan broj: ");
 scanf("%f",&a);
 printf("\nBroj zaokruzen na dve decimale je: %.2f", a);
 getche();
 return 0;
}
*/
// #include <stdio.h>
// // 2.7
// main()
// {
// int b;
// printf("Unesite ceo broj: ");
// scanf("%d",&b);
// printf("\nDecimalni oblik broja je : %d",b);
// printf("\nOktalni oblik broja je : %o",b);
// printf("\nHeksadecimalni oblik broja je : %x",b);
// return 0;
// }
// 2.8
// #include <stdio.h>
// main()
// {
//     double b;
//     printf("Unesite jedan realan broj :");
//     scanf("%lf",&b);
//     printf("\nOblik sa decimalnom zapetom : %.1f",b);
//     printf("\nOblik sa eksponentom  : %e",b);
//     printf("\nU naucnoj notaciji  : %g",b);
//     return 0;
// }
//2.9
// #include <stdio.h>
// main()
// {
//     int temp;
//     double fahr,celsius;
//     printf("\nUnesite T u stepenima F <ceo broj od 0 do 300>:");
//     scanf("%d",&temp);
//     fahr = (double)temp;
//     celsius=(5.0/9.0)*(fahr-32.0);
//     printf("\n%d F = %.2f C\n\n ",temp,celsius);
//     return 0;
// }2.20
// #include <stdio.h>
// int main(){
//     float X,A,B;
//     printf("A = ");
//     scanf("%f",&A);
//     printf("B = ");
//     scanf("%f",&B);
//     X=-B/A;
//     printf("Jednacina ima oblik %.2fX + %.2f = 0\n",A,B);
//     printf("Resenje X = %.2f\n",X);
//     return 0;
// }2.21
// #include <stdio.h>
// #include <math.h>
// main(){
//     float x,y;
//     printf("Unesite vrednost x: ");
//     scanf("%f",&x);
//     y=sqrt(x + x*x + x*x*x);
//     printf("\n y=%.2f",y);
//     return 0;
// }2.22
// #include <stdio.h>
// #include <math.h>
// int main(){
//     float a,b,m;
//     printf("Unesite vrednost a: ");
//     scanf("%f",&a);
//     printf("Unesite vrednost b: ");
//     scanf("%f",&b);
//     m = sqrt(a*a + b*b);
//     printf("\nModul kompleksnog broja %.2f + %.2fi je:%.2f",a,b,m);
//     return 0;
// }2.23
// #include <stdio.h>
// #include <math.h>
// int main(){
//     float a1,b1,a2,b2,rz1,rz2,rz3,rz4;
//     printf("a1=");
//     scanf("%f",&a1);
//     printf("b1=");
//     scanf("%f",&b1);
//     printf("a2=");
//     scanf("%f",&a2);
//     printf("b2=");
//     scanf("%f",&b2);
//     rz1 = a1 + b1;
//     rz2 = a2 + b2;
//     rz3 = a1 + a2;
//     rz4 = b1 + b2;
//     printf("\nz1=%.2f + %.2fi",a1,b1);
//     printf("\nz2=%.2f + %.2fi",a2,b2);
//     printf("\nz1-z2=%.2f+%.2fi",rz1,rz2);
//     printf("\nz1+z2=%.2f+%.2fi",rz3,rz4);
//     return 0;
// }2.24
// #include <stdio.h>
// #include <math.h>
// main(){
// double x1,x2,y1,y2,z1,z2,d;
// printf("Unesite koordinate prve tacke <x1y1z1>:");
// scanf("%lf" "%lf" "%lf",&x1,&y1,&z1);
// printf("Unesite koordinate druge  tacke <x2y2z2>:");
// scanf("%lf" "%lf" "%lf",&x2,&y2,&z2);
// d = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
// printf("\nRastojanje izmedju ove tacke iznosi:%.2lf",d);
// return 0;
// }2.25
// #include<stdio.h>
// #include<math.h>
// main(){
//     double xa,ya,xb,yb,xc,yc,a,b,c,S,P;
//     printf("Unesite koordinate temena A trougla:");
//     scanf("%lf" "%lf",&xa,&ya);
//     printf("Unesite koordinate temena B trougla:");
//     scanf("%lf" "%lf",&xb,&yb);
//     printf("Unesite koordinate temena c trougla:");
//     scanf("%lf" "%lf",&xc,&yc);
//     a=sqrt(pow(xb-xc,2) +pow(yb-yc,2));
//     b=sqrt(pow(xa-xc,2) +pow(ya-yc,2));
//     c=sqrt(pow(xa-xb,2) +pow(ya-yb,2));
//     S = (a + b + c)/2;
//     P = sqrt(S*(S-a)*(S-b)*(S-c));
//     printf("\nPovrsina trougla: %.2lf",P);
//     return 0;
// }2.26
// #include <stdio.h>
// #include <math.h>
// main(){
//     int x,y,z,S;
//     printf("Unesite tri cela broja:");
//     scanf("%d" "%d" "%d",&x,&1y,&z);
//     S = x + y + z;
//     printf("Uneti broj je %d%d%d",x,y,z);
//     printf("\nA njihova suma iznosi %d",S);
//     return 0;
// }2.27/pomesani
// #include <stdio.h>
// #include <math.h>
// main(){
//     int xyz,x,y,z,S;
//     printf("Unesite trocifreni broj:");
//     scanf("%d",&xyz);
//     x=xyz/100;
//     y=(xyz/10)%10;
//     z=xyz%10;
//     S=x+y+z;
//     printf("Cifre trocifrenog broja %d su: %d, %d, %d.",xyz,x,y,z);
//     printf("\nA suma broja je %d",S);
//     return 0;
// }2.27.
// #include <stdio.h>
// #include <math.h>
// main(){
//     int n,n500,n100,n1;
//     printf("Unesitie cenu artikla:");
//     scanf("%d",&n);
//     n500=n/500;
//     n100=(n-(n500*500))/100;
//     n1=n-((n500*500)+(n100*100));
//     printf("\nBroj novcanica od 500 dinara:%d",n500);
//     printf("\nBroj novcanica od 100 dinara:%d",n100);
//     printf("\nBroj kovanica od 1  dinara:%d",n1);
//     return 0;
// }2.28
// #include <stdio.h>
// #include <math.h>
// main(){
//     int sekunde,d,c,m,s;
//     printf("Unesite vreme u sekundama:");
//     scanf("%d",&sekunde);
//     d=sekunde/86400;
//     c=(sekunde%86400)/3600;
//     m=(sekunde%(d*86400 + c*3600))/60;
//     s=(sekunde%(d*86400 + c*3600 + m*60));
//     printf("\n d = %d \n c = %d \n m = %d \n s = %d",d,c,m,s);
//     return 0;
// }2.29
// #include <stdio.h>
// #include <math.h>
// main(){
// int broj;
// printf("Unesite jedan ceo broj:");
// scanf("%d",&broj);
// if(broj%2 == 0)
// printf ("Uneti broj %d je paran.",broj);
// else 
// printf("\nUneti broj %d je neparan",broj);
// return 0;
// }3.1
// #include <stdio.h>
// main(){
//     int broj;
//     printf("Unesite broj:");
//     scanf("%d",&broj);
//     if(broj < 0)
//     printf("Uneti broj %d je negativan.",broj);
//     else if(broj >0)
//     printf("Uneti broj %d je pozitivan",broj);
//     else
//     printf("Uneti broj %d je jednak nuli",broj);
//     return 0;
// }3.2
// #include <stdio.h>
// main(){
//     int a,b;
//     printf("Unesite broj a:");
//     scanf("%d",&a);
//     printf("Unesite broj b:");
//     scanf("%d",&b);
//     if(a == b)
//     printf("\nRelacioni odnos izmedju je jednaki su."); 
//     else if( a > b )
//     printf("\nBroj a je veci od b");
//     else 
//     printf("\nBroj b je veci od a.");
//     return 0;
// }3.3
// #include <stdio.h>
// main(){
//     int najveci,broj1,broj2,broj3;
//     printf("Unesite prvi broj:");
//     scanf("%d",&broj1);
//     printf("Unesite drugi broj:");
//     scanf("%d",&broj2);
//     printf("Unesite treci broj:");
//     scanf("%d",&broj3);
//     najveci = broj1;
//     if(broj2 > najveci)
//     najveci=broj2;
//     if(broj3 > najveci)
//     najveci=broj3;
//     printf("Najveci medju njima je broj %d",najveci);
//     return 0;
// }3.4/kad se odredjuje koji po redu je najveci nema else if nego je sve if.
// #include <stdio.h>
// #include <math.h>
// main(){
//     double x,y,z;
//     printf("Unesite tri realna broja:");
//     scanf("%lf","%lf","%lf",&x,&y,&z);
//     if(x<y<z){
//         printf("Uredjeni brojevi:%.2f %.2f %.2f",x,y,z);
//     }
//     else if(x<z<y){
//         printf("Uredjeni brojevi:%.2f %.2f %.2f",x,z,y);
//     }
//     else if(z<x<y){
//         printf("Uredjeni brojevi:%.2f %.2f %.2f",z,x,y);
//     }
//     else if(z<y<x){
//         printf("Uredjeni brojevi:%.2f %.2f %.2f",z,y,x);
//     }
//     else if(y<z<x){
//         printf("Uredjeni brojevi:%.2f %.2f %.2f",y,z,x);
//     }
//     else if(y<x<z){
//         printf("Uredjeni brojevi:%.2f %.2f %.2f",y,x,z);
//     }
//     return 0;
// }3.5
// #include <stdio.h>
// main(){
//     int a;
//     printf("Unesi broj bodova <od 0 do 100>:");
//     scanf("%d",&a);
//     if(a>90){
//         printf("Vasa ocena je 10\n.");
//     }
//     else if(a>80){
//         printf("Vasa ocena je 9\n.");
//     }
//     else if(a>70){
//         printf("Vasa ocena je 8\n.");
//     }
//     else if(a>60){
//         printf("Vasa ocena je 7\n.");
//     }
//     else if(a>50){
//         printf("Vasa ocena je 6\n.");
//     }
//     else{
//         printf("Vasa ocena je 50\n.");
//     }
//     return 0;
// }3.7
// #include <stdio.h>
// #include <math.h>
// main(){
//     int x,a,b;
//     printf("Unesite gornju granicu opsega a: ");
//     scanf("%d",&a);
//     printf("Unesite donju granicu opsega b: ");
//     scanf("%d",&b);
//     printf("Unesite broj x: ");
//     scanf("%d",&x);
//     if((b <= x*x) && (x*x <= a))
//         printf("Kvadrat unetog broja se nalazi unutar ovog opsega");
//     else
//         printf("Kvadrat unetog broja se ne nalazi unutar ovog opsega");
//     return 0;
// }3.8
// #include <stdio.h>
// #include <math.h>
// main(){
//     int x,y,z;
//     printf("Unesite x: ");
//     scanf("%d",&x);
//     printf("Unesite y: ");
//     scanf("%d",&y);
//     if(x>y){
//     z=x-y;
//     printf("Razlika je %d",z);
//     }
//     if(y>x){
//     z=y-x;
//     printf("Razlika je %d",z);
//     }
//     return 0;
// }3.9
// #include <stdio.h>
// #include <math.h>
// main(){
//     int x,y;
//     printf("Unesite x broj:");
//     scanf("%d",&x);
//     if(x<0){
//         y=-1;
//         printf("Signum funkcija od x je %d",y);
//     }
//     else if(x==0){
//         y==0;
//         printf("Signum funkcija od x je %d",y);       
//     }
//     else{
//         y=1;
//         printf("Signum funkcija od x je %d",y);
//     }
//     return 0;
// }3.10
// #include <stdio.h>
// #include <math.h>
// main(){
//     float x,y;
//     printf("Unesite x broj: ");
//     scanf("%f",&x);
//     if((-2<x) && (x<=2)){
//     y=2*x;
//     printf("Funkcija od x je %.2f",y);
//     }
//     else if((5<=x) && (x<7)){
//     y=3*x - 1;
//     printf("Funkcija od x je %.2f",y);
//     }
//     else{
//     y=1/x;
//     printf("Funkcija od x je %.2f",y);
//     }
//     return 0;   
// }3.11

// 3.12 SE NE ZNA!!!!!!!!!
// #include <stdio.h>
// #include <math.h>
// main(){
//     float a,b,c,S,P;
//     printf("Unesite stranicu a: ");
//     scanf("%f",&a);
//     printf("Unesite stranicu b: ");
//     scanf("%f",&b);
//     printf("Unesite stranicu c: ");
//     scanf("%f",&c);
//     if(a+b>c && a+c>b && c+b>a){
//     S = (a+b+c)/2;
//     P = sqrt(S*(S-a)*(S-b)*(S-c));
//     printf("\nDate stranice formiraju trougao.");
//     printf("\nPovrsina datog trougla iznosi:%.2f",P);
//     }
//     else
//     printf("Date stranice ne mogu formirati trougao.");
//     return 0;
// }3.13
// #include <stdio.h>
// #include <math.h>
// #define PI 3.141592 
// main(){
//     float xa,ya,xb,yb,xc,yc,a,b,c,S,P,alfa,beta,gama;
//     printf("Unesite koordinate A temena:");
//     scanf("%f %f",&xa,&ya);
//     printf("Unesite koordinate B temena:");
//     scanf("%f %f",&xb,&yb);
//     printf("Unesite koordinate C temena:");
//     scanf("%f %f",&xc,&yc);
//     a = sqrt(pow(xb-xc,2) + pow(yb-yc,2));
//     b = sqrt(pow(xc-xa,2) + pow(yc-ya,2));
//     c = sqrt(pow(xa-xb,2) + pow(ya-yb,2));
//     printf("\nStranice na osnovu koordinata su sledece:");
//     printf("\na = %.2f",a);
//     printf("\nb = %.2f",b);
//     printf("\nc = %.2f",c);
//     if(a+b>c && a+c>b && c+b>a){
//     alfa = acos( (b*b+c*c-a*a) / (2*b*c) );
//     beta = acos( (c*c+a*a-b*b) / (2*c*a) );
//     gama = acos( (a*a+b*b-c*c) / (2*a*b) );
//     alfa *= 180/PI;
//     beta *= 180/PI;
//     gama *= 180/PI;
//     printf("\nUglovi:\n");
//     printf("Alfa = %.2f stepeni\n", alfa);
//     printf("Beta = %.2f stepeni\n", beta);
//     printf("Gama = %.2f stepeni\n", gama); 
//     S = (a+b+c)/2;
//     P = sqrt(S*(S-a)*(S-b)*(S-c));
//     }
//     else{
//         printf("Ne moze se kreirato trougao od datih stranica.");
//     }
//     return 0;
// } 3.14
