#include <stdio.h>
#include <math.h>
// main(){
//     int i,n;
//     float s,p,x;
//     s=0;
//     p=1;
//     printf("Unesite x;");
//     scanf("%f",&x);
//     printf("Unesite n;");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         p=p*sin(x);
//         s=s+p;
//     }
//     printf("S= %.5f\n",s);
//     return 0;
// }4.10a/

// main()
// {
// int i,n;
// float s,p,x;

// printf("Unesite n");
// scanf("%d",&n);
// printf("Unesite x");
// scanf("%f",&x);
// p=1;
// s=0;
// for(i=1;i<=n;i++){
//     p=p*x;
//     s=s+cos(p);
// }
// printf("s= %.5f",s);
//     return 0;
// }4.10/b

// main()
// {
// int i,n;
// float s,p;
// printf("n=");
// scanf("%d",&n);
// s=1;
// p=0;
// for(i=1;i<=n;i++){
//     p=sqrt(p+2);
//     s=s/(float)p;
// }
// printf("s= %.5f",s);
// return 0;
// }4.11

// main()
// {
//     int i,s;
//     s=0;
//     printf("Brojevi deljivi sa brojem 6 su:\n");
//     for(i=1;i<=100;i++){
//         if(i%6 ==0){
//             printf("\n%d",i);
//             s=s+i;
//         }
//         else{
//             continue;
//         }
//     }
//     printf("\nSuma je :%d",s);
// }4.13

// main(){
//     int a,b,c;
//     for(a=1;a<=9;a++)
//         for(b=1;b<=9;b++)
//             for(c=1;c<=9;c++){
//                 if(b == 2+a && c == b + 1){
//                     printf("%d%d%d\n",a,b,c);
//                 }
//             }
//             return 0;
// }4.14

// main(){
//     int a,b,c,broj;
//     printf("Armstrongovi brojevi(trocifreni) su sledeci:\n");
//     for(a=1;a<=9;a++)
//         for(b=1;b<=9;b++)
//             for(c=1;c<=9;c++){
//                 broj=100*a + 10*b + c;
//                 if(broj == pow(a,3)+ pow(b,3)+pow(c,3))
//                 printf("%d\n",broj);
//             }
//             return 0;
// }4.15.

// main(){
//     int a,b,c,broj;
//     printf("To su brojevi:\n");
//     for(a=1;a<=9;a++)
//         for(b=0;b<9;b++)
//             for(c=0;c<9;c++){
//                 broj=100*a + 10*b + c;
//                  if(broj == ((10*a+b)*(10*a+b)-c*c)){
//                     printf("%d\n",broj);
//                 }
//                 return 0;
//     }
// }4.16

// main(){
//     int a,b,c,broj,dva;
//     printf("To su brojevi:\n");
//     for(a=1;a<=9;a++)
//         for(b=0;b<9;b++)
//             for(c=0;c<9;c++){
//                 broj=100*a +10*b +c;
//                 dva=10*a+c;
//                 if(broj%dva == 0){
//                     printf("%d \n",broj);
//                 }
//             }
// return 0;
// }4.17
// main()
// {
//     int a,b,c,s,n,broj;
//     s=0;
//     n=0;
//     for(a=1;a<=9;a++)
//         for(b=0;b<9;b++)
//             for(c=0;c<9;c++){
//                 broj=100*a + 10*b + c;
//                 if(a+b+c==5){
//                     n++;
//                     s=s+broj;
//                 }
//             }
//             printf("Suma=%d\n",s);
//             printf("Ukupno ima %d brojeva\n",n);
//             return 0;
// }4.18.

// main(){
//     int i,n;
//     printf("Unesite broj n=");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         if(n%i == 0){
//             printf("\n%d",i);
//         }
//     }
//     return 0;
// }4.19

// main(){
//     int i,n,s;
//     s=0;
//     printf("Unesite n.");
//     scanf("%d",&n);
//     for(i=1;i<n;i++){
//         if (n%i ==0)
//         {
//             s+=i;
//         }
//         if(s==n){
//             printf("Broj %d je savrsen.\n",n);
//         }
//         else
//         printf("Broj %d nije savrsen\n",n);
//     }
//     return 0;
// }4.20

// main()
// {
//  int sat,min,sec,n;
//  printf("Unesite neki broj n");
//  scanf("%d",&n);
//  for(sat=0;sat<=24;sat++)
//  for(min=0;min<=59;min++)   
//  for(sec=0;sec<=59;sec++){
//     if(n==(sat/10 + sat%10 + min/10 + min%10 + sec/10 + sec%10)){
//         printf("\n%dsati, %dminuta, %dsekundi.",sat,min,sec);
//     }
//  }   
//  return 0;
// }4.22

// main()
// {
//     double xmin,xmax,dx,x,y;
//     printf("xmin=");
//     scanf("%lf",&xmin);
//     printf("xmax=");
//     scanf("%lf",&xmax);
//     printf("dx=");
//     scanf("%lf",&dx);
//     for(x=xmin;x<=xmax;x+=dx){
//         y=(2*x+1)/(x*x-1);
//         printf("%10.3f %10.3f\n",x,y);
//     }
//     return 0;
// }4.23

// main(){
//     int i;
//     double xmin,xmax,dx,x,y,n,p;
//     printf("xmin=");
//     scanf("%lf",&xmin);
//     printf("xmax=");
//     scanf("%lf",&xmax);
//     printf("dx=");
//     scanf("%lf",&dx);
//     printf("Stepen funkcije.");
//     scanf("%lf",&n);
//     for(x=xmin;x<=xmax;x+=dx){
//         for(i=1;i<=n;i++){
//             p=x;
//             y=(1+p);
//         }
//         printf("%10.6f %11.6f\n",x,y);
//         p=1;
//         y=1;
//     }
//     return 0;
// }4.24

// main()
// {
//  int i, j, n;
//  printf(" n= ");
//  scanf("%d", &n);
//  printf("\n");
//  for(i=0; i<n; i++)
//  {
//  for(j=0; j<2*n; j++)
//  printf("1");
//  printf("\n");
//  }
//  getche();
//  return 0;
// }4.25/a
// main()
// {
//  int i, j, n;
//  printf(" n= ");
//  scanf("%d", &n);
//  printf("\n");
//  for(i=0; i<n; i++)
//  {
//  for(j=0; j<2*n; j++)
//  printf("%d", j);
//  printf("\n");
//  }
//  getche();
//  return 0; 
// }

// 5.WHILE PETLJA!!!!
// main(){
//     int i;
//     i=1;
//     while(i<=5){
//         printf("\nPozdrav svima !");
//         i++;
//     }
//     return 0;
// }5.1

main()
// {
//     int i;
//     i=1;
//     while(i<=10){
//         printf("\n%d",i);
//         i++;
//     }
//     return 0;
// }5.2/a

// {
//     int i;
//     i=1;
//     while(i<=10){
//         if(i%2==0){
//             printf("%d",i);
//         }
//         i++;
//     }
//     return 0;
// }5.2\b
// {
//     int i;
//     i=10;
//     while(i<=10 & i>0){
//         printf("\n%d",i);
//         i--;
//     }
//     return 0;
// }
// {
//     int n,i,s;
//     i=1;
//     s=0;
//     printf("n=");
//     scanf("%d",&n);
//     while(i<=n){
//         s+=i;
//         i++;
//     }
//         printf("\nSuma=%d",s);
//     return 0;
// }5.3
{
//     int i,n,s;
//     i=1;
//     s=0;
//     printf("n=");
//     scanf("%d",&n);
//     while(i<=n){
//         s+=i;
//         i=i+3;
//     }
//     printf("Suma svakog treceg je:%d",s);
//     return 0;
// }5.4

// {
//     int i,n;
//     float s;
//     printf("Unesite n;");
//     scanf("%d",&n);
//     s=0;
//     i=1;
//     while(i<=n){
//         s+=1./pow(2*i + 1,2);
//         i++;
//     }
//     return 0;
// }5.5

// main(){
//     int i,n,m;
//     float s;
//     printf("n=");
//     scanf("%d",&n);
//     printf("m=");
//     scanf("%d",&m);
//     s=0;
//     i=n;
//     while(n<=m)
//     if(i%2==0){
//         s=s+pow(i,2);
//         else 
//         s=s+pow(i,3);
//         i++;
//     }
//     printf("S = %f",s);
//     return 0;
// }5.6
