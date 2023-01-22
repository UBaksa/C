#include <stdio.h>
#include <math.h>
#define PI 3.14
// int zbir(int a,int b){
//     int rezultat;
//     rezultat=a+b;
//     return rezultat;
// }
// main(){
//     int c;
//     c=zbir(5,3);
//     printf("%d",c);
//     return 0;
// }
// 9.2. Саставити функције за рачунање збира, производа и количника два реална броја, као и
// функције за израчунавање квадрата и куба реалног броја. Затим саставити програм за израчунавање
// израза z1 = x + y2 , 2 3
// x
// z x
// y
// = - и z3 = (x* y) + (5 - y), користећи претходно формиране функције.
// Променљиве х и у се уносе са тастатуре. Исписати резултате.
// int zbir(float a,float b){
//     return (a+b);
// }
// int razlika(float a,float b){
//     return (a-b);
// }
// int proizvod(float a,float b){
//     return (a*b);
// }
// int kolicnik(float a,float b){
//     return (a/b);
// }
// int kvadrat(float a){
//     return (a*a);
// }
// int kub(float a){
//     return (pow(a,3));
// }

// main(){
//     float x,y,z1,z2,z3;
//     printf("Unesite x:");
//     scanf("%f",&x);
//     printf("\nUnesite y:");
//     scanf("%f",&y);
//     z1=zbir(x,kvadrat(y));
//     z2=razlika(kub(x),kolicnik(x,y));
//     z3=zbir((proizvod(x,y)),razlika(5,y));
//     printf("\n\n%.2f",z1);
//     printf("\n\n%.2f",z2);
//     printf("\n\n%.2f",z3);
//     return 0;
// }
// int najveci(int a,int b){
//     if(a==b){
//         return a;
//     }
//     else if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }

// main(){
//     int x,y,z,e,m;
//     printf("Unesite 4 broja:");
//     scanf("%d %d %d %d",&x,&y,&z,&e);
//     m=najveci(najveci(x,y),najveci(z,e));
//     printf("\nNajveci je %d",m);
//     return 0;
// }
// 9.5. Саставити програм за израчунавање површине и запремине лопте и исписивање резултата на
// основу унете вредности полупречника r. За рачунање запремине и површине, као и за испис
// резултата формирати одговарајуће функције.

// double povrsina(double r){
//     return (pow(r,2)*4*PI);
// }
// double zapremina(double r){
//     return ((4/3)*pow(r,3)*PI);
// }

// void ispis(double p,double v){
//     printf("Povrsina: %.2f",p);
//     printf("Zapremina: %.2f",v);
// }

// main(){
//     double r,p,v;
//     printf("Unesite r:");
//     scanf("%lf",&r);
//     p=povrsina(r);
//     v=zapremina(r);
//     ispis(p,v);
//     return 0;
// }

// double stranice(double x1,double x2,double y1,double y2){
//     return (sqrt(pow(x1-x2,2)+pow(y1-y2,2)));
// }

// main(){
//     double xa,xb,xc,ya,yb,yc,a,b,c,s,p;
//     printf("Unesite temena tacke A:");
//     scanf("%lf %lf",&xa,&ya);
//     printf("\nUnesite temena tacke B:");
//     scanf("%lf %lf",&xb,&yb);
//     printf("Unesite temena tacke C:");
//     scanf("%lf %lf",&xc,&yc);
//     a=stranice(xb,xc,yb,yc);
//     b=stranice(xa,xc,ya,yc);
//     c=stranice(xa,xb,ya,yb);
//     s=(a+b+c)/2;
//     p=sqrt(s*(s-a)*(s-b)*(s-c));
//     printf("\nPovrsina trougla iznosi %.2f",p);
//     return 0;
// }
// 9.7. Саставити програм за израчунавање и исписивање суме квадрата свих бројева, само парних и
// само непарних за унете границе интервала. Користити функције за израчунавање збира квадрата.

// int zbirkvadrata(int a,int b){
//     int i,s=0;
//     for(i=a;i<=b;i++){
//         s+=i*i;
//     }
//     return s;
// }
// int parni(int a,int b){
//     int i,s=0;
//     for(i=a;i<=b;i++){
//         if(i%2==0){
//             s+=i*i;
//         }
//     }
//     return s;
// }
// int neparni(int a,int b){
//     int i,s=0;
//     for(i=a;i<=b;i++){
//         if(i % 2 == 1){
//             s+= i*i;
//         }
//         return s;
//     }
// }
// main(){
//     int a,b;
//     printf("Unesite a:");
//     scanf("%d",&a);
//     printf("\nUnesite b:");
//     scanf("%d",&b);
//     printf("\nSuma brojeva za ove granice iznosi %d",zbirkvadrata(a,b));
//     printf("\nSuma parnih brojeva za ove granice iznosi %d",parni(a,b));
//     printf("\nSuma neparnih brojeva za ove granice iznosi %d",neparni(a,b));
//     return 0;
// }
// 9.8. Саставити програм који исписује суму цифара за унете границе интервала. За рачунање суме
// цифара формирати одговарајућу функцију.

// int sumacifara(int a){
//     int s=0;
//     while(a!=0){
//         s+=a%10;
//         a=a/10;
//     }
//     return s;
// }

// main(){
//     int i,a,b;
//     printf("Unesite gornju granicu brojeva");
//     scanf("%d",&a);
//     printf("Unesite donju granicu");
//     scanf("%d",&b);
//     for(i=a;i<=b;i++){
//         printf("\n%4d\t%3d", i, sumacifara(fabs(i)));
//     }
//     return 0;
// }
// 9.9. Саставити програм који коришћењем функција одређује највећи заједнички делилац и
// најмањи заједнички садржалац два природна броја. Програм треба да захтева унос све док не
// прочита нулу за један од два унета природна броја.
// OVAJ SE PITA ZEKO!!
// // 9.10. Саставити функцију за рачунање факторијела, затим саставити програм који рачуна и
// исписује број комбинација ( ) ,
// !
// ! ! n k
// n n
// C
// k k n k
//  
// =   =   -
// , за дато n и k помоћу функције за рачунање

// long faktorijal(int n){
//     long i,fakt=1;
//     for(i=1;i<=n;i++){
//         fakt*=i;
//     }
//     return fakt;
// }

// main(){
//     int n,k,c;
//     printf("Unesite n:");
//     scanf("%d",&n);
//     printf("Unesite k:");
//     scanf("%d",&k);
//     c=faktorijal(n)/(faktorijal(k)*faktorijal(n-k));
//     printf("Broj kombinacija iznosi %d",c);
//     return 0;
// }

// 9.11. Саставити програм који за дато n рачуна и исписује суму S = 1! + 2! + 3! + ... + n!. За
// рачунање факторијела користити одговарајућу функцију.
long faktorijal(int n){
    int i,fakt=1;
    for(i=1;i<=n;i++){
        fakt*=i;
    }
    return fakt;
}
main(){
    int n,s=0,i;
    printf("Unesite n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=faktorijal(i);
    }
    printf("Suma iznosi %d",s);
    return 0;
}