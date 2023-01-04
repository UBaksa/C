// 2.6. Саставити програм којим се реални број унет са тастатуре заокружује на две децимале.

#include <stdio.h>
#include <math.h>

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
// 2.22. Саставити програм за рачунање израза y = x + x 2 + x3 за унету вредност х.
// {
//     float x,izraz;
//     printf("Unesite x:");
//     scanf("%f",&x);
//     izraz = sqrt(x + x*x + x*x*x);
//     printf("Y= %.2f",izraz);
//     return 0;
// }
// 2.23. Саставити програм који исписује вредност модула комплексног броја z = a + bi за унете
// вредности а и b. Модул се рачуна по формули z = a2 + b2 .
// {
//     float a,b,z;
//     printf("Unesite a i b");
//     scanf("%f %f",&a,&b);
//     printf("Kompleksan broj: z = %.2f + %.2fi",a,b);
//     z = sqrt(a*a + b*b);
//     printf("Moduo kompleksnog broja iznosi:%.2f",z);
//     return 0;
// }
// 2.24. Саставити програм који за унете реалне и имагинарне делове два комплексна броја исписује
// та да два броја у облику z = a + bi 1 и z = c + di 2 , а затим рачуна њихов збир и разлику
// ( ) ( ) 1 2 z ± z = a + c ± i b + d .
// {
//     float a,b,c,d,plus,minus;
//     printf("Unesite vrednosti prvog kompl. broja:");
//     scanf("%f %f",&a,&b);
//     printf("Unesite vrednosti drugog kompl. broja:");
//     scanf("%f %f",&c,&d);
//     printf("\nZ1 + Z2 = %.2f + i%.2f",a+c,b+d);
//     printf("\nZ1 - Z2 = %.2f - i%.2f",a+c,b+d);
//     return 0;
// }

// 2.25. Саставити програм за исписивање растојања између две тачке у тродимензионалном
// простору на основу унетих координата тачака.
// {
//     float x1,x2,y1,y2,z1,z2,d;
//     printf("Unesite koordinate xyz:");
//     scanf("%f %f %f",&x1,&y1,&z1);
//     printf("Unesite koordinate xyz od druge tacke:");
//     scanf("%f %f %f",&x2,&y2,&z2);
//     d=sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
//     printf("Njihovo rastojanje iznosi: %.2f",d);
//     return 0;
// }
// 2.26. Саставити програм за исписивање површине троугла ако су задате координате његових
// темена. Површину троугла рачунати помоћу следећих формула:
// ( ) ( ) 2 2
// a = xB - xC - yB - yC , ( ) ( ) 2 2
// C A C A b = x - x - y - y , ( ) ( ) 2 2
// A B A B a = x - x - y - y
// 2
// a b c
// S
// = + + , P = S (S - a)(S - b)(S - c)
{
double xA, yA, xB, yB, xC, yC, a, b, c, s, P;
printf("Koordinate temena trougla\n");
printf(" prvo teme <xA,yA>: "); scanf("%lf%lf",&xA,&yA);
printf("drugo teme <xB,yB>: "); scanf("%lf%lf",&xB,&yB);
printf("trece teme <xC,yC>: "); scanf("%lf%lf",&xC,&yC);
a=sqrt(pow(xB-xC,2)+pow(yB-yC,2));
b=sqrt(pow(xC-xA,2)+pow(yC-yA,2));
c=sqrt(pow(xA-xB,2)+pow(yA-yB,2));
s=(a+b+c)/2;
P=sqrt(s*(s-a)*(s-b)*(s-c));
printf("\nPovrsina trougla: %.2f\n", P);
return 0;
}
