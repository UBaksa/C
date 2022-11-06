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