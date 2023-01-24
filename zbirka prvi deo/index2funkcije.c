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
// long faktorijal(int n){
//     int i,fakt=1;
//     for(i=1;i<=n;i++){
//         fakt*=i;
//     }
//     return fakt;
// }
// main(){
//     int n,s=0,i;
//     printf("Unesite n");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         s+=faktorijal(i);
//     }
//     printf("Suma iznosi %d",s);
//     return 0;
// }

// main(){
//     int a,b,c,broj;
//     for(a=1;a<=9;a++){
//         for(b=0;b<=9;b++){
//             for(c=0;c<=9;c++){
//                 broj=100*a + 10*b + c;
//                 if(broj == faktorijel(a)+faktorijel(b)+faktorijel(c)){
//                     printf("\n%d",broj);
//                 }
//             }
//         }
//     }
//     return 0;
// }
// 9.15. Саставити програм који исписује све просте бројеве мање од 500. Користити функцију за


// int prostBroj(int broj){
//     int i;
//     for(i=2;i<broj;i++){
//         if(broj%i == 0){
//             return 0;
//         }
//         else{
//             return 1;
//         }
//     }
// }

// main(){
//     int i;
//     for(i=1;i<=500;i++){
//         if(prostBroj(i) == 1){
//             printf("%d je taj broj\n",i);
//         }
//         else{
//             continue;
//         }
//     }
//     return 0;
// }
// 9.17. Саставити програм којим се исписују сви троцифрени Амстронгови бројеви. Троцифрени
// број је Амстронгов ако је једнак суми кубова својих цифара. Формирати две функције, једна за
// рачунање суме кубова, а друга за одређивање да ли је дати број Амстронгов (ако јесте враћа 1, ако
// није враћа 0).

// int kub(int n){
//     return n*n*n;
// }

// main(){
//     int a,b,c,broj;
//     for(a=1;a<=9;a++){
//         for(b=0;b<=9;b++){
//             for(c=0;c<=9;c++){
//                 broj=100*a + 10*b + c;
//                 if(broj == (kub(a)+kub(b)+kub(c))){
//                     printf("\n%d je Amstrongov broj",broj);
//                 }
//             }
//         }
//     }
//     return 0;
// }
// 9.18. Саставити програм којим се исписују сви Нивенови бројеви друге стотице. Нивенов број је
// број који је дељив са сумом својих цифара. Формирати две функције, једна за рачунање суме цифара,
// а друга за одређивање да ли је дати број Нивенов (ако јесте враћа 1, ако није враћа 0).

// int sumacifara(int broj){
//     int suma=0;
//     while(broj>0){
//         suma=suma+broj%10;
//         broj=broj/10;
//     }
//     return suma;
// }
// int Nivenov(int broj){
//     if(broj % sumacifara(broj) == 0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }

// main(){
//     int i;
//     for(i=100;i<=200;i++){
//         if(Nivenov(i)){
//             printf("\n%d Ovaj broj je nivenov!",i);
//         }
//     }   
//     return 0;
// }
// 9.29. Саставити рекурзивну функцију за одређивање факторијела целог броја, а затим је тестирати
// у главном програму за унети цео број n и исписати добијени резултат.
// int faktorijel(int n){
//     if(n == 1) return 1;
//     else return n*faktorijel(n-1);
// }

// main(){
//     int n;
//     printf("unesite n:");
//     scanf("%d",&n);
//     printf("\nFaktorijel od n iznosi %d",faktorijel(n));
//     return 0;
// }
// 9.30. Саставити рекурзивну функцију која степеновање целог броја на целобројни изложилац, а
// затим тестирати функцију за дати природни број и изложилац и исписати добијени резултат.

// int stepen(int a,int s){
//     if(s == 0)return 1;
//     else return a*stepen(a,s-1);
// // }
// rekurzivna furka za stepen mnogo jaka!!!!!
// main(){
//     int o,s;
//     printf("Unesite osnovu:");
//     scanf("%d",&o);
//     printf("Unesite stepen:");
//     scanf("%d",&s);
//     printf("\nOsnova na broj iznosi %d",stepen(o,s));
//     return 0;
// }
// int sabiranje(int n){
//     if(n == 0) return 0;
//     else return (n+sabiranje(n-1));
// }

// main(){
//     int n,s=0;
//     printf("Unesite granica koje ce brojeve da sabira:");
//     scanf("%d",&n);
//     s=sabiranje(n);
//     printf("Suma prvih brojeva do n iznosi %d",s);
//     return 0;
// }
// 9.32. Саставити рекурзивну функцију која исписује првих n бројева у обрнутом редолседу, а затим
// тестирати функцију за дато n.

// void ispis(int n){
//     if(n == 0) return;
//     else printf(" %d",n);
//     ispis(n-1);
// }

// main(){
//     int n;
//     printf("Unesite n");
//     scanf("%d",&n);
//     ispis(n);
//     return 0;
// }

// NIZOVI //

// 10.4. Саставити програм који ће учитати низ од n елемената и исписати их оним редоследом којим
// су учитани.
// #define MAX 100

// main(){
//     int i,n,niz[MAX];
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("\nUnesite %d elemenata:",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("Niz ima elemente:");
//     for(i=0;i<n;i++){
//         printf("%d",niz[i]);
//     }
//     return 0;
// }
// 10.5. Саставити програм који ће учитати низ од n елемената и исписати их обрнутим редоследом.

// #define MAX 100
// main(){
//     int niz[MAX],i,n;
//     printf("Unesite n:");
//     scanf("%d",&n);
//     printf("Unesite neke elemente niza:");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("Niz u obrnutom redosledu:");
//  //ovde je caka za obrnut redosled!  for(i=n-1;i>=0;i--){
//         printf("%d",niz[i]);
//     }
//     return 0;
// }
// 10.7. Саставити програм за израчунавање и исписивање аритметичке средине задатог низа (дужине
// n) целих бројева.
// #define MAX 100

// main(){
//     int niz[MAX],n,i,s=0;
//     printf("Unesite n:");
//     scanf("%d",&n);
//     printf("Unesite neke elemente niza:");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//         s+=niz[i];
//     }
//     printf("\nElementi niza:");
//     for(i=0;i<n;i++){
//         printf(" %d",niz[i]);
//     }
//     printf("\nAritmeticka sredina ovog niza iznosi %.2f",(float)s/n);
//     return 0;
// }
// 10.8. Саставити програм који за унети низ (дужине n) целих бројева израчунава и исписуеј
// аритметичку средину оних елемената низа који су дељиви са 3.
// #define MAX 100

// main(){
//     int niz[MAX],i,s=0,br=0,n;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Unesite %d elemenata",n);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//         if(niz[i]%3 == 0){
//             s+=niz[i];
//             br++;
//         }
//     }
//     printf("Aritmeticka sredina niza brojeva koji su deljivi sa dva je %.2f",(float)s/br);
//     return 0;
// }

// 10.9. Саставити програм који ће за унети низ (дужине n) целих бројева одредити и исписати:
// а) суму парних и суму непарних бројева;
// // б) суму елемената са парним индексима и суму елемената са непарним индексима.
// a)
// main(){
//     int niz[MAX],n,i,sp=0,sn=0;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Elementi niza:");
//     for(i=0;i<n;i++){
//         scanf("%d",niz[i]);
//         if(niz[i]%2 == 0){
//             sp+=niz[i];
//         }
//         else{
//             sn+=niz[i];
//         }
//     }
//     printf("\nSuma parnih %d",sp);
//     printf("\nSuma neparnih %d",sn);
//     return 0;
// }
// ovo je za broj,kao element niza,a ako se trazi index-pozicija elementa u if se radi sve bez niz[i],nego samo i!!!
// 10.10. Саставити програм који прочита два низа, дужине n, са реалним компонентама,
// A = ( A1, A2 ,..., An ) и ( ) 1 2 , ,..., n B = B B B израчунава њихов скаларни производ
// 1
// 0
// n
// i i
// i
// s A B
// -
// =
// =Σ и
// исписује добијени резултат.
// main(){
//     int a[MAX],b[MAX],i,n,s=0;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Unesite elemente:");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n;i++){
//         s+=a[i]*b[i];
//     }
//     printf("Skalarni proizvod dva niza iznosi %d",s);
//     return 0;
// }
// 10.11. Саставити програм који учита елементе низа A = ( A1, A2 ,..., An ) дужине n и низа
// ( ) 1 2 , ,..., m B = B B B дужине m и спаја у један низ ( ) 1 2 1 2 , ,..., , , ,..., n m C = A A A B B B дужине n+m.
// Исписати новокреирани низ.
// main(){
//     int a[MAX],b[MAX],c[MAX],i,n,m;
//     printf("Unesite n za niz a");
//     scanf("%d",&n);
//     printf("\nElementi niza a: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Unesite m za niz b");
//     scanf("%d",&m);
//     printf("\nElementi niza b: ");
//     for(i=0;i<m;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<(m+n);i++){
//         if(i<n) c[i]=a[i];
//         else c[i]=b[i-n];//ova dva su uslova da ide redom,koji niz ima vise elemenata njega prvog ispisuje!!!!
//         printf("\t%d",c[i]);
//     }
//     return 0;
// }
// 10.12. Саставити програм који учита елементе два низа низа дужине n A = ( A1, A2 ,..., An ) и
// ( ) 1 2 , ,..., n B = B B B и формира и исписује нови низ чији су елементи
// ( ) 1 1 2 2 , ,..., n n C = A + B A + B A + B .
// main(){
//     int a[MAX],b[MAX],c[MAX],i,n;
//     printf("Unesite n za niz a");
//     scanf("%d",&n);
//     printf("\nElementi niza a: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("\nElementi niza b: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n;i++){
//         c[i]=a[i]+b[i];
//         printf("%d ",c[i]);
//     }
//     return 0;
//     }
// 10.14. Саставити програм за формирање низа С од два задата низа целих бројева А и В (сваки
// дужине 5) на следећи начин: А[0]+B[4],…,A[4]+B[0]. Исписати низ С.
// #define MAX 5
// main(){
//     int c[MAX],a[MAX],b[MAX],i;
//     printf("Unesite elemente niza a:");
//     for(i=0;i<MAX;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Unesite elemente niza b:");
//     for(i=0;i<MAX;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<MAX;i++){
//         c[i]=a[i]+b[MAX-1-i];
//         printf("%d je element niza c",c[i]);
//     }
//     return 0;
// }
// 10.15. Саставити програм који учита елементе низа A = ( A1, A2 ,..., An ) дужине n и низа
// ( ) 1 2 , ,..., m B = B B B дужине m, а затим формира и исписује низ С који се састоји од парних елемената
// низа А и низа В.
// #define MAX 100 

// main(){
//     int k=0,n,m,i,b[MAX],a[MAX],c[MAX];
//     printf("Unesite n za a niz");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Unesite m za b niz");
//     scanf("%d",&m);
//     for(i=0;i<m;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n;i++){
//         if(a[i]%2 ==0){
//             printf("%d",a[i]);
//             c[k]=a[i];
//             k++;
//         }
//     }
//     for(i=0;i<m;i++){
//         if(b[i]%2 ==0){
//             printf("%d",b[i]);
//             c[k]=b[i];
//             k++;
//         }
//     }
//     for(i=0;i<k;i++){
//         printf("%d ",c[i]);
//     }
//     return 0;
// }
// 10.16. Саставити програм који ће учитати два низа целих бројева А и В једнаких дужина n и на
// основу њих формирати низ С тако да i-ти елемент низа С буде једнак мањем од i-тих елемената низа
// А и В. Ако су i-ти елементи низа А и В једнаки онда i-ти елемент низа С треба да добије вредност
// нула. Исписати низ С.
// #define MAX 100
// main(){
//     int i,n,a[MAX],b[MAX],c[MAX];
//     printf("Unesite n:");
//     scanf("%d",&n);
//     printf("Elementi niza a:");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("Elementi niza b:");
//     for(i=0;i<n;i++){
//         scanf("%d",&b[i]);
//     }
//     for(i=0;i<n;i++){
//         if(a[i] == b[i]){
//             c[i]=0;
//         }
//         else if(a[i] > b[i]){
//             c[i]=b[i];
//         }
//         else{
//             c[i]=a[i];
//         }
//         printf("%d ",c[i]);
//     }
//     return 0;
// }
// #define MAX 100
// main(){
//     int i,n,a[MAX],b[MAX],c[MAX],m=0,j=0;
//     printf("Unesite n:");
//     scanf("%d",&n);
//     printf("Elementi niza a su:");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
//         if(a[i] >= 0){
//             c[j]=a[i];
//             j++;
//         }
//         else{
//             b[m]=a[i];
//             m++;
//         }
//     }
//     printf("Elementi niza C su:");
//     for(i=0;i<j;i++){
//         printf("%d ",c[i]);
//     }
//     printf("Elementi niza B su:");
//     for(i=0;i<m;i++){
//         printf("%d ",b[i]);
//     }
//     return 0;
// }
// 10.18. Саставити програм који за унети низ реланих бројева А дужине n формира и исписује нови
// низ В кога чине елементи низа А који су већи од аритемтичке средине свих елемената низа А.
// #define MAX 100

// main(){
//     int b[MAX],a[MAX],i,n,k=0,s=0;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Elementi niza A");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         s+=a[i];
//     }
//     for(i=0;i<n;i++){
//         if(a[i] > (s/n)){
//             b[k]=a[i];
//             k++;
//         }
//     }
//     printf("\nNiz b");
//     for(i=0;i<k;i++){
//         printf("%d ",b[i]);
//     }
//     return 0;
// }
// 10.19. Саставити програм који за унети низ целих бројева А, дужине n, формира и исписује нови
// низ В чији се елементи формирају по следећем принципу: В0=А0, В1=А0+А1, В2=А0+А1+А2, ...,
// Bi=A0+A1+A2+...+Ai.
// #define MAX 100
// main(){
//     int i,n,a[MAX],b[MAX],s=0;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("\nElementi niza a");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("\nNiz b:");
//     for(i=0;i<n;i++){
//         s+=a[i];
//         b[i]=s;
//         printf("%d ",b[i]);
//     }
//     return 0;
// }
// 10.21. Саставити функцију за израчунавање скаларног производа два низа реалних бројева
// 1
// 0
// n
// i i
// i
// s A B
// -
// =
// =Σ , а затим саставити главни програм који ће учитати два низа једнаких дужина n и
// применом формирани функције исписати скаларни производ два низа.
// #define MAX 100
// double skalar(double a[],double b[],int n){
//     double zbir=0;
//     int i;
//     for(i=0;i<n;i++){
//         zbir+=a[i]*b[i];
//     }
//     return zbir;
// }
// main(){
//     double a[MAX],b[MAX];
//     int i,n;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("\nElementi niza a");
//     for(i=0;i<n;i++){
//         scanf("%lf",&a[i]);
//     }
//     printf("\nElementi niza b");
//     for(i=0;i<n;i++){
//         scanf("%lf",&b[i]);
//     }
//     printf("\nSkalarni proizvod ova dva niza iznosi %.2f",skalar(a,b,n));
//     return 0;
// }
