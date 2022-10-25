// #include <stdio.h>
// main(){
//     printf("%c\n%2c\n%3c\n%4c",'a','b','c','d');
//     return 0;
// }2.10
// #include <stdio.h>
// main(){
//     printf("\n Tip CHAR = %d B memorije.", sizeof(char));
//     printf("\n Tip UNSIGNED CHAR = %d B memorije.", sizeof(unsigned char));
//     printf("\n Tip DOUBLE = %d B memorije.", sizeof(double));
//     printf("\n Tip INT = %d B memorije.", sizeof(int));
//     printf("\n Tip UNSIGNED INT = %d B memorije.", sizeof(unsigned int));
//     printf("\n Tip LONG = %d B memorije.", sizeof(long));
//     printf("\n Tip FLOAT = %d B memorije.", sizeof(float));
//     return 0;
// } 2.13
// #include <stdio.h>
// main(){
//     int a,b,pomocna;
//     printf("Unesite prvi broj a=");
//     scanf("%d",&a);
//     printf("Unesite drugi broj b=");
//     scanf("%d",&b);
//     printf("\nPre zamene:\t a=%d, b=%d", a, b);
//     pomocna = a;
//     a = b;
//     b = pomocna;
//     printf("\nPosle zamene:\t a=%d, b=%d\n",a,b);
//     return 0;
// }2.14
// #include <stdio.h>
// main(){
//     int a,b,zbir;
//     printf("Unesite prvi sabirak: ");
//     scanf("%d",&a);
//     printf("Unesite drugi sabirak: ");
//     scanf("%d",&b);
//     zbir = a + b;
//     printf("Zbir vasa dva sabirka je:%d",zbir);
//     return 0;
// }2.15
// #include <stdio.h>
// main(){
//     int a,b;
//     printf("Unesite vas zeljeni broj:");
//     scanf("%d",&a);
//     printf("Unesite vas drugi zeljeni broj:");
//     scanf("%d",&b);
//     printf("Zbir vasa dva broja je :%d\n", a+b);
//     printf("Razlika vasa dva broja je :%d\n", a-b);
//     printf("Proizvod vasa dva broja je :%d\n", a*b);
//     printf("Kolicnik vasa dva broja je :%d\n", a/b);
//     printf("Kolicnik (sa ostatkom) vasa dva broja je :%d\n", a%b);
//     return 0;
// }2.16
// #include <stdio.h>
// main(){
//     int a,b,o,p;
//     printf("Unesite stranicu a pravougaonika: ");
//     scanf("%d",&a);
//     printf("Unesite stranicu b pravougaonika: ");
//     scanf("%d",&b);
//     o= 2*a + 2*b;
//     p= a*b;
//     printf("\nObim pravougaonika je: %d",o);
//     printf("\nPovrsina pravougaonika je: %d",p);
//     return 0;
// }2.17
// #include <stdio.h>
// #define PI 3.14
// main(){
//     double r;
//     printf("Unesite velicinu poluprecnika kruga: ");
//     scanf("%lf",&r);
//     printf("Obim je %.2f\n",2*r*PI);
//     printf("Povrsina je %.2f\n",r*r*PI);
//     return 0;

// }2.18
// #include <stdio.h>
// #define PI 3.14
// main(){
//    double p,v,r,h,z;
//    printf("Unesite duzinu poluprecnika: ");
//    scanf("%lf",&r);
//    printf("Unesite duzinu visine: ");
//    scanf("%lf",&h);
//    z = r + h;
//    p = 2*r*PI*z;
//    v = r*r*PI*h;
//    printf("\nPovrsina valjka iznosi : %.3f",p);
//    printf("\nZapremina valjka iznosi : %.3f",v);
//    return 0;
// }2.19