// 2.6. Саставити програм којим се реални број унет са тастатуре заокружује на две децимале.

#include <stdio.h>

// main()
// {
//     float a;
//     printf("Unesite neki broj sa decimalnim zapisom");
//     scanf("%f",&a);
//     printf("Uneti broj skracen za dve decimale je %.2f",a);
//     return 0;
// }
// 2.14. Саставити програм којим се замењују вредности два унета цела броја.
main()
// {
//     int a,b,p;
//     printf("Unesite prvi broj:");
//     scanf("%d",&a);
//     printf("Unesite drugi broj:");
//     scanf("%d",&b);
//     printf("\nPre zamene mesta sledeci: %d %d",a,b);
//     p = a;
//     a = b;
//     b = p;
//     printf("\nNakon zamene mesta sledi: %d %d",a,b);
//     return 0;
// }
// 2 15. Саставити програм који учитава два цела броја са тастатуре и исписује њихов збир.
// {
//     int a,b;
//     printf("Unesite brojeve:");
//     scanf("%d %d",&a,&b);
//     printf("Zbir ova dva broja je %d",a+b);
//     return 0;
// }
// 2.17. Саставити програм који за унете странице правоугаоника исписује његов обим и површину.
// {
//     float a,b,p;
//     printf("Unesite stranice pravougaonika:");
//     scanf("%f %f",&a,&b);
//     p = a*b;
//     printf("Povrsina iznosi %.2f",p);
//     return 0;
// }
// 2.18. Саставити програм који за унети полупречник круга исписује његов обим и површину.
#define PI 3.14
// {
// float r,p;
// printf("Unesite poluprecnik:");
// scanf("%f",&r);
// p=r*r*PI;
// printf("Povrsina iznos %.2f",p);
// return 0; 
// }
// 2.19. Саставити програм који за унети полупречник основице и висине ваљка исписује његову
// површину и запремину. (Површина: P=2*r*π*(r+h) , Запремина: V=r2*π*h)
// {
//     float r,h,p,v;
//     printf("Unesite poluprecnik i visinu valjka:");
//     scanf("%f %f",&r,&h);
//     v=r*r*PI*h;
//     p=(r+h)*PI*2*r;
//     printf("Povrsina iznosi %.2f a zapremina %.2f",p,v);
//     return 0;
// }
// 2.21. Саставити програм за решавање линеарне једначине AX+B=0, где се коефицијенти А и В
// уносе са тастатуре (А≠0).
// {
//     float a,b,x;
//     printf("Unesite a;");
//     scanf("%f",&a);
//     printf("Unesite b;");
//     scanf("%f",&b);
//     printf("Jednacina ima oblik %.2fX + %.2f = 0.",a,b);
//     x=-b/a;
//     printf("Resenje jednacine je %.2f",x);
//     return 0;
// }