#include<stdio.h>
#include<math.h>

// main(){
//     int i,semafor=0;
//     for(i=1;i<=400;i++){
//         if(i%4==0&&i%3==0&&i%5==0&&i%7==0){
//             printf("%d",i);
//             semafor=1;//nasli smo uslov semafor ide na 1.
//             break;
//         }
//     }
//     if(semafor==0){
//         printf("Nema broja");
//     }
//     return 0;
// }

main()
{
 double suma=1.0, x, eps, clan;
 int n=1, i;
 printf("\n x= ");
 scanf("%lf",&x);
 printf("\n eps= ");
 scanf("%lf",&eps);
 clan=x;
 while(abs(clan)>=eps)
 {
 suma+=clan;
 clan=x;
 n++;
 for(i=2;i<=n;i++)
 clan=-clan*(-x/i);
 }
 printf("\n S= %lf", suma);
 printf("\n Br.elemenata= %d\n", n);
 getche();
 return 0;
}
