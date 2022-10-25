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