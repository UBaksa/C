#include <stdio.h>
#include <math.h>

// main()
// {
//     int i,fp,fpp,fn,n;
//     printf("n=");
//     scanf("%d",&n);
//     printf("f1=1;f2=1");
//     fp=1;
//     fpp=1;
//     i=3;
//     while(i<=n){
//         fn=fp+fpp;
//         fpp=fp;
//         fp=fn;
//         printf("\nf%d = %d",i,fn);
//         i++;
//     }
//     return 0;
// }5.7/a

// main(){
//     int i,n,fpp,fp,fn;
//     float s;
//     s=0;
//     i=3;
//     fp=1;
//     fpp=1;
//     printf("Unesite n");
//     scanf("%d",&n);
//     while(i<=n){
//         fn=fp+fpp;
//         s=s+fn;
//         fpp=fp;
//         fp=fn;
//         i++;
//     }
//     printf("Suma = %f",s);
//     return 0;
// }5.7/b

// main(){
//     int s=1,i,n,a;
//     printf("a=;");
//     scanf("%d",&a);
//     printf("n=;");
//     scanf("%d",&n);
//     i=1;
//     while(i<=n){
//         s*=a;
//         i++;
//     }
//     printf("Broj %d je na %d-ti stepen i iznosi %d",n,a,s);
//     return 0;
// }5.8
// #define STOP 0
// main()
// {
//  int n=0;
//  float x, suma=0;
//  printf("\n Unesite niz realnih brojeva (0 za kraj):\n\n");
//  scanf("%f",&x);
//  while(x!=STOP)
//  {
//  suma += x;
//  n++;
//  scanf("%f",&x);
//  }
//  if (n==0)
//  printf("\n Nije zadat niz realnih brojeva.\n\n");
//  else
//  printf("\n Aritmeticka sredina zadatog niza je %.3f\n",suma/n);
//  getche();
//  return 0;
// }5.9


// 5.11 i 5.10 se ne znaju..

// main(){
//         int m=0,n,pomoc,i;
//         float suma=0,koren;
//         printf("\nUnesite m i n;");
//         while(m<1 || n<1){
//         scanf("%d %d",&m,&n);
//         }
//         if(m>n){
//             pomoc=n;
//             n=m;
//             m=pomoc;
//         }
//         if(m%2==0)
//         m++;
//         for(i=m;i<=n;i+=2){
//             koren=sqrt(i);
//             suma+=koren;
//         }
//         printf("Suma kvadratnih korena = %.3f\n",suma);
//         return 0;
// }5.12

// main()
// {
//     int znak=1,i,n;
//     float s=0;
//     printf("unesite n ");
//     scanf("%d",&n);
//     i=1;
//     while(i<=n){
//         s+=(float)znak/i;
//         i++;
//         znak=-znak;
//     }
//     printf("\nSuma = %.3f",s);
//     return 0;
// }5.13

// main()
// {
//     int n=1;
//     float suma=0,clan;
//     clan= 1/(n*n);
//     while(clan>1e-4){
//         suma+=clan;
//         n++;
//         clan=1.0/(n*n);
//     }
//     printf("s= %.3f",suma);
//     return 0;
// }5.14

// 5.15 se ne zna...
// 5.16 se ne zna...

// main(){
// int a,b;
// printf("Unesite a.");
// scanf("%d",&a);
// printf("Unesite b.");
// scanf("%d",&b);
// while(a!=b){
//     if(a>b){
//         a=a-b;
//     }
//     else
//     b=b-a;
// }
// printf("\nNZD za date brojeve je:%d",a);
// return 0;
// }
// main(){
//     int a,b,i;
//     printf("Unesite a;");
//     scanf("%d",&a);
//     printf("Unesite b;");
//     scanf("%d",&b);
//     // while(i<b && a>i){
//     //     i++;
//     //     printf("\nNZD kada je %d = %d je %d",a,b,a);
//     // }
//         printf("\nNZD kada je %d = %d je %d",a,b,a);
//         while(a!=b){
//             if(a>b){
//                 a=a-b;
//             }
//             else{
//                 b=b-a;
//             }
//         }
//         printf("\nNZD za date brojeve je %d",a);
//     return 0;
// }5.17

main(){
int n, k, suma=0;
 printf(" n= ");
 scanf("%d", &n);
 k=n;
 while(k > 0)
 {
 suma+=k%10;
 k /= 10;
 }
 if(k%suma==0)
 printf("\n Broj %d jeste Nivenov\n", n);
 else
 printf("\n Broj %d nije Nivenov\n", n);
 getche();
 return 0;
}