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

