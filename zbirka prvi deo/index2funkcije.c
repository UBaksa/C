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
// 10.22. Саставити функцију којом се одређује број различитих елемената у задатом целобројном
// низу. Затим саставити програм који чита низ целих бројева, и одређује број различитих елемената
// // користећи претходну функцију и исписује резултат.
// #define MAX 100

// int raziliciti(const int niz[],int n){
//     int i,j,brojac=0;
//     for(i=0;i<n;i++){
//         for(j=0;j<i && niz[j]!=niz[i];j++);
//             if(j==i){
//                 brojac++;
//         }
//     }
//     return brojac;
// }

// main(){
//     int a[MAX],i,n;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Niz a: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("\nBroj razlicitih elemenata u nizu a je %d",raziliciti(a,n));
//     return 0;
// }
// 10.23. Саставити програм за израчунавање статистике полагања испита која обухвата следеће
// функције: израчунавање укупне просечне оцене (сви који су полгали испит), израчунавање просечне
// оцене оних који су положили (оцена већа од 5), израчунавање броја који су положили испит,
// израчунавање броја који нису положили испит и израчунавање броја који имају оцену већу од
// просечне. У главном програму се уноси број студената и оцене студената у облику низа. Исписати
// добијене резултате
// #define MAX 100

// int prosek(int a[],int n){
//     int i;
//     float suma=0;
//     for(i=0;i<n;i++){
//         suma+=a[i];
//     }
//     return (suma/n);
// }
// int polozili(int a[],int n){
//     int i;
//     float s=0;
//     for(i=0;i<n;i++){
//         if(a[i] > 5){
//             s++;
//         }
//     }
//     return s;
// }
// int nisupolozili(int a[],int n){
//     int i;
//     float s=0;
//     for(i=0;i<n;i++){
//         if(a[i] == 5){
//             s++;
//         }
//     }
//     return s;
// }

// int prosekpolozenih(int a[],int n){
//     int i,k=0;
//     float s=0;
//     for(i=0;i<n;i++){
//         if(a[i] > 5){
//             s+=a[i];
//             k++;
//         }
//     }
//     return (s/k);
// }
// int BrojNadprosecnih (int a[], int b[], int n, float m)
// {
// int i, j=0;
// for(i=0; i<n; i++)
// {
// if(a[i] > m)
// {
// b[j]=i;
// j++;
// }
// }
// return j;
// }

// main(){
//     int student[MAX],ocena[MAX],i,n;
//     printf("Broj studenata:");
//     scanf("%d",&n);
//     printf("Ocene ucenika od 5 do 10: ");
//     for(i=0;i<n;i++){
//         printf("\nOcena ucenika %d:",i);
//         scanf("%d",&ocena[i]);
//     }
//     printf("\nProsek ocena: %d",prosek(ocena,n));
//     printf("\nPolozilo je %d ucenika",polozili(ocena,n));
//     printf("\nNisu %d ucenika polozili",nisupolozili(ocena,n));
//     printf("\nProsek polozenih %d",prosekpolozenih(ocena,n));
//     printf("\nBroj nadprosecnih ucenika je %d",BrojNadprosecnih(ocena,student,n,prosek(ocena,n)));
//     return 0;
// }
// 10.24. Саставити функцију која генерише првих n чланова Фибоначијевог низа и функцију која
// исписује чланове низа, а затим те функције тестирати у главном програму.
// Фибоначијев низ: f1=1, f2=1, fi=fi-1+fi-2, i=3, 4, 5, ...
// #define MAX 100 
// void fibonacijev(int n){
//     int i,a[MAX];
//     a[1]=1;
//     a[0]=1;
//     for(i=2;i<n;i++){
//         a[i]=a[i-1]+a[i-2];
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }
// main(){
//     int a[MAX],i,n;
//     printf("Unesite n");
//     scanf("%d",&n);
//     fibonacijev(n);
//     return 0;
// }    
// 10.25. Саставити рекурзивну функцију за израчунавање скаларног производа два низа реалних
// бројева
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

// float skalproizvod(float a[],float b[],int n){
//     int i;
//     float s=0;
//     for(i=0;i<n;i++){
//         s+=a[i]*b[i];
//     }
//     return s;
// }
// #define MAX 100

// main(){
//     float a[MAX],b[MAX];
//     int i,n;
//     printf("Unesite n: ");
//     scanf("%d",&n);
//     printf("Niz a:");
//     for(i=0;i<n;i++){
//         scanf("%f",&a[i]);
//     }
//     printf("Niz a:");
//     for(i=0;i<n;i++){
//         scanf("%f",&b[i]);
//     }
//     printf("Skalarni proizvod dva nizaje %.2f",skalproizvod(a,b,n));
//     return 0;
// }
// 10.4 Претраживање низова


// 10.27. Саставити програм који за унети низ реалних бројева, дужине n, исписује елемент највеће
// вредности, као и његове позиције у низу.

// #define MAX 100

// main(){
//     double niz[MAX],max;
//     int i,n,maxi=0;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("\nElementi niza:");
//     for(i=0;i<n;i++){
//         scanf("%lf",&niz[i]);
//     }
//     max=niz[0];
//     for(i=1;i<n;i++){
//         if(niz[i]>max){
//             max=niz[i];
//             maxi=i;
//         }
//     }
//     printf("\nPozicija najveceg elementa je %d,a najveci element je %.2f",maxi+1,max);
//     return 0;
// }
// 10.28. Саставити програм који учита низ реалних бројева, дужине n, налази најмањи и највећи члан
// низа, xmin и xmax, и исписује све елементе низа који су мањи од xmax/2 и већи од xmin*2.
// #define MAX 100

// main(){
//     int n,i;
//     float niz[MAX],xmin,xmax;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Elementi niza:");
//     for(i=0;i<n;i++){
//         scanf("%f",&niz[i]);
//     }
//     xmax=niz[0];
//     xmin=niz[0];
//     for(i=0;i<n;i++){
//         if(niz[i]> xmax){
//             xmax=niz[i];
//         }
//         if(niz[i]<xmin){
//             xmin=niz[i];
//         }
//     }
//     for(i=0;i<n;i++){
//         if(niz[i]>(xmin*2)&& niz[i]<(xmax/2)){
//             printf("\n %.2f",niz[i]);
//         }
//     }
//     return 0;
// }
// 10.29. Саставити програм који за унети низ целих бројева, дужине n, исписује елемент најмање
// вредности међу парним бројевима.
// #define MAX 100
// main(){
//     int niz[MAX],min,i,n;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("\nElementi niza:");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     for(i=0;i<n;i++){
//         if(niz[i]%2==0){
//             min=niz[i];
//         }
//     }
//     if(min == 0)printf("Nema parnih brojeva!");
//     else{
//         for(i=0;i<n;i++){
//             if(niz[i]%2 == 0 && niz[i]<min){
//                 min=niz[i];
//             }
//         }
//     }
//     printf("\nNajmanji element medju parnim brojevima je %d",min);
//     return 0;
// }
// 10.30. Саставити програм који за унети низ целих бројева, дужине n, проналази и на екрану
// исписује елементе на парним позицијама и међу њима проналази онај који има максималну
// вредност. Минимална дужина низа је 2.
// #define MAX 100
// main(){
//     int niz[MAX],i,n,max;
//     printf("Unesite n: ");
//     scanf("%d",&n);
//     printf("\nElementi niza su :");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     max=niz[1];
//     printf("Elementi na parnim pozicijama!");
//     for(i=0;i<n;i++){
//         if(i%2 !=0){
//             printf("\t:%d",niz[i]);
//             if(niz[i]>max){
//                 max=niz[i];
//             }
//         }
//     }
//     printf("\nMaximalni medju njima je %d",max);
//     return 0;
// }
// #define MAX 100

// void fibonacijev(int n){
//     int i,a[MAX];
//     a[0]=1;
//     a[1]=1;
//     for(i=2;i<n;i++){
//         a[i]=a[i-1]+a[i-2];
//     }   
//     printf("Elementi fib niza su:");
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }

// main(){
//     int i,n,niz[MAX],a[MAX];
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("\nElementi Vaseg niza:");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     a[0]=1;
//     a[1]=1;
//     for(i=2;i<n;i++){
//         a[i]=a[i-1]+a[i-2];
//     }   
//     printf("Elementi fib niza su:");
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     for(i=0;i<n;i++){
//         if(niz[i] == a[i]){
//             printf("Niz je fibonacijev");
//         }
//         else{
//             printf("Niz nije fibonacijev!");
//         }
//     }
//     return 0;
// }
// 10.32. Саставити програм који за унети низ целих бројева, дужине n, проналази позицију траженог
// елемента или исписује обавештење да тражени елемент не постоји у низу. Користити методу

// #define MAX 100

// main(){
//     int i,n,niz[MAX],trazeni,broj=0;
//     printf("Unesite n; ");
//     scanf("%d",&n);
//     printf("Elementi niza: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("Unesite trazeni element:");
//     scanf("%d",&trazeni);
//     for(i=0;i<n;i++){
//         if(niz[i] == trazeni){
//             broj=1;
//             printf("\nTrazeni element je u nizu,na poziciji %d",i+1);
//         }
//     }
//     if(!broj){
//         printf("Trazeni element nije u nizu!");
//     }
//     return 0;
// }
// 10.34. Саставити програм који од унетог низа А целих бројева дужине n формира и исписује низ В
// са обрнутим распоредом елемената.
// #define MAX 100
// main(){
//     int i,n,a[MAX];
//     printf("Unesite n ");
//     scanf("%d",&n);
//     printf("Elementi niza:");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     printf("\nNiz preuredjen:");
//     for(i=n-1;i>=0;i--){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
// 10.35. Саставити програм за циклично премештање елемената задатог низа целих бројева дужине n
// за једно место у лево и исписивање новодобијеног низа.
// #define MAX 100
// main(){
//     int i,n,a[MAX],pom;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Uneti niz");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n-1;i++){
//         a[i]=a[i+1];
//         a[i-1]=pom;
//     }
//     printf("Ciklicno pomeren niz");
//     for(i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
//     return 0;
// }
// // ZEKO DA POKAZE ZAMENU MESTA ROTIRANJE ITD...

//                  MATRICCCEEEEEEEEEEEEEEEEEEEE

// 11.1. Саставити програм који учитава, а затим исписује елементе матрице mxn. Елементи матрице
// су цели бројеви.

// #define MAX 100

// main()
// {
//     int i,n,j,m,mat [MAX] [MAX];
//     printf("Vrsta m:");
//     scanf("%d",&m);
//     printf("Kolona n");
//     scanf("%d",&n);
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             printf("    element [%d][%d] = ",i,j);
//             scanf("%d",&mat[i] [j]);
//         }
//     }
//     printf("Uneta matrica je:");
//     for(i=0;i<m;i++){
//         for(j=0;j<n;j++){
//             printf(" %d",mat[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }
// 11.2. Саставити програм који за унету матрицу димензија nxn врши сабирање њених елеменета и
// исписује добијени резултат. Елементи су цели бројеви.
// #define MAX 100
// main(){
//     int i,n,j,mat[MAX] [MAX],suma=0;
//     printf("Unesite n:");
//     scanf("%d",&n);
//     printf("Uneti elementi matrice:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             suma+=mat[i][j];
//         }
//     }
//     printf("Zbir svih clanova matrice je %d",suma);
//     return 0;
// }
// 11.3. Саставити програм који учита матрицу димензија mхn, а затим врши сабирање елемената
// који су парни бројеви. На крају исписати суму парних бројева и број елемената који су једнаки нули.
// Елементи матрице су цели бројеви од 0 до 9.
// #define MAX 100
// main()
// {
//     int i,n,j,m,mat[MAX] [MAX],suma=0,nule=0;
//     printf("Unesite vrstu n");
//     scanf("%d",&n);
//     printf("Unesite kolonu m");
//     scanf("%d",&m);
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             if(mat[i][j]%2 == 0){
//                 suma+=mat[i][j];
//             }
//             if(mat[i][j] == 0){
//                 nule++;
//             }
//         }
//     }
//     printf("\nSuma parnih brojeva je %d",suma);
//     printf("\nNula ima %d",nule);
//     return 0;
// }
// 11.4. Саставити програм који учита две матрице целих бројева, a и b, обе димензија mхn, а затим
// // врши сабирање ове две матрице и исписује нову матрицу с. Матрице се сабирају тако што се
// // сабирају елементи матрица са истим индексима.
// #define MAX 100

// main(){
//     int i,j,n,m,mat[MAX] [MAX],mat2[MAX] [MAX];
//     printf("Unesite n za vrstu:");
//     scanf("%d",&n);
//     printf("Unesite m za kolonu:");
//     scanf("%d",&m);
//     printf("Prva matrica:");
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Druga matrica:");
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&mat2[i][j]);
//         }
//     }
//     printf("Nova matrica:");
//    for(i=0; i<n; i++)
// {
// for(j=0; j<m; j++)
// printf(" %d", mat[i][j]+mat2[i][j]);
// printf("\n");
// }
//     return 0;
// }
// 11.5. Саставити програм који ће учитати матрицу димензија nxn, а затим исписати матрицу у
// облику таблице, исписати све елементе на главној и споредној дијагонали, као и суме елемената на
// главној и споредној дијагонали. Елементи матрице су цели бројеви.
// #define MAX 100

// main()
// {
//     int j,i,n,mat[MAX] [MAX],sg=0,ss=0;
//     printf("Unesite n:");
//     scanf("%d",&n);
//     printf("Unesite elemente matrice:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("\nMatrica izgleda ovako:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf(" %d",mat[i][j]);
//             printf("\n");
//         }
//     }
//     printf("Dobijanje suma:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(i=j){
//                 sg+=mat[i][j];
//             }
//             ss+=mat[i][n-i-1];
//         }
//     }
//     printf("\nSuma glavne : %d",sg);
//     printf("\nSuma sporedne : %d",ss);
//     return 0;
// }
// 11.6. Саставити програм који учита матрицу димензија nxn, а затим је исписује у облику таблице и
// израчунава и исписује суму елемената у свакој врсти. Елементи матрице су цели бројеви.
// #define MAX 100
// main()
// {
//     int i,j,n,s=0,mat[MAX][MAX];
//     printf("Unesite n");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Uneta matrica:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//         printf(" %d",mat[i][j]);
//         printf("\n");
//     }
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//         s+=mat[i][j];
//         printf(" %d",s);
//     }
//     printf("Suma elemenata po vrsti iznosi %d",s);
//     return 0; 
// }
// 11.7. Саставити програм који учита матрицу димензија mxn, а затим је исписује у облику таблице
// и на основу унетог редног броја врсте врши сабирање елемената у тој врсти. Елементи матрице су
// цели бројеви.
// #define MAX 100

// main()
// {
//     int i,j,n,m,broj,s=0,mat[MAX] [MAX];
//     printf("Unesite n vrstu ");
//     scanf("%d",&n);
//     printf("Unesite m vrstu ");
//     scanf("%d",&m);
//     printf("Unesite koju cete vrstu da uzmete za zbir:");
//     scanf("%d",&broj);
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&mat[i] [j]);
//         }
//     }
//     printf("Uneta matrica:");
//     printf("\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++)
//         printf(" %d",mat[i][j]);
//         printf("\n");
//     }
//     for(j=0;j<m;j++){
//         s+=mat[broj-1][j];
//     }
//     printf("Suma iznosi %d",s);
//     return 0;
// // }
// 11.8. Саставити програм који учита матрицу целих бројева А димензија mxn, а затим исписује
// њене елементе у редоследу као што је приказано на следећој слици:
// #define MAX 100
// main()
// {
//     int i,j,n,m,mat[MAX][MAX];
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Unesite m");
//     scanf("%d",&m);
//     printf("Uneta matrica:");
//     for(i=0;i<n;i++){
//         for(j=0;j<m;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Sredjen niz");
//     for(j=0;j<m;j++){
//         if(j%2==0){
//             for(i=0;i<n;i++)
//             printf("%d",mat[i][j]);
//         }
//         else
//         for(i=n-1;i>=0;i--){
//             printf("%d",mat[i][j]);
//         }
//     }
//     return 0;
// }
// Rastaviti na faktore

// main()
// {
//     int broj,faktor,i,broj1;
//     printf("Unesite broj:");
//     scanf("%d",&broj);
//     broj1=broj;
//     for(i=2;i<broj;i++){
//         if(broj1%i==0){
//             printf("%d ",i);
//             broj1=broj1/i;
//             i--;
//         }
        
//     }
//     return 0;
// }
// broj tacaka,n tacaka.

// main()
// {
//     int x,y,i,n;
//     printf("Unesite n");
//     scanf("%d",&n);
//     switch(x,y){
//         case (x>0 && y>0):...
//     }
// }
// #define MAX 100
// main(){
//     int j,k,i,n,niz[MAX],s=0,s1=0;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Uneti niz");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("Uneti niz");
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
//     printf("\nProveravanje niza");
//     for(i=1;i<n-1;i++){
//         for(j=0;j<i;j++){
//             s+=niz[j];
//         }
//         for(k=i+1;k<n;k++){
//             s1+=niz[k];
//         }
//         if(s==s1){
//             printf("Indeks je %d ",i);
//         }
//         s1=0;
//         s=0;//BITNO JE DA SE RESETUJE JER ZA SVAKU ROTACIJU MORA DA SE RR SUMA!!
        
//     }
//     return 0;
// }
// septembar 2018 2 zad
// main(){
//     int i,n,broj,v,suma=0;
//     printf("Unesite n");
//     scanf("%d",&n);
//     if(n>100){
//         printf("ne moze");
//         return 1;
//     }
//     printf("Unesite v broj");
//     scanf("%d",&v);
//     i=0;
//     while(i<n){
//         scanf("%d",&broj);
//         if(broj<v)suma+=broj;
//         if(broj==v)printf("%d",i+1);
//         i++;
//     }
//     return 0;
// }
// 10.34. Саставити програм који од унетог низа А целих бројева дужине n формира и исписује низ В
// са обрнутим распоредом елемената.
// #define MAX 100

// main()
// {
//     int i,n,niz[MAX];
//     printf("Unesite n:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("\nNiz:");
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
//     printf("\nNiz B");
//     for(i=n-1;i>=0;i--){
//         printf("%d ",niz[i]);
//     }
//     return 0;
// }
// 10.35. Саставити програм за циклично премештање елемената задатог низа целих бројева дужине n
// за једно место у лево и исписивање новодобијеног низа.
// #define MAX 100
// main(){
//     int i,n,pom,niz[MAX];
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Uneti niz");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("Pomeren niz:");
//     pom=niz[0];
//     for(i=0;i<n-1;i++){
//         niz[i]=niz[i+1];
//         printf("%d",niz[i]);
//     }
//         niz[n-1]=pom;
//     printf("%d",niz[n-1]);
//     return 0;
// }
// 10.36. Саставити програм који за унети низ целих бројева дужине n врши ротирање чланова низа за
// x места у лево и исписује новодбијени низ.
// #define MAX 100

// void rotiraj(int a[],int n){
//     int i,pom;
//     pom=a[0];
//     for(i=0;i<n;i++)
//         a[i]=a[i+1];
//     a[n-1]=pom;
// }

// main()
// {
//     int x,n,i,niz[MAX];
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Unesite x:");
//     scanf("%d",&x);
//     printf("Niz :");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("\nNiz izgleda ovako:");
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
//     printf("Niz pomeren:");
//     for(i=0;i<x;i++){
//         rotiraj(niz,n);
//     }
//     printf("\n");
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
//     return 0;
// }
// 10.37. Саставити програм који за унети низ целих бројева дужине n врши замену суседних
// елемената низа на парним и непарним позицијама и исписује новодобијени низ.
// #define MAX 100

// void zameni(int a[],int n){
//     int i,pomoc;
//     pomoc=a[i];
//     for(i=0;i<n-1;i+=2){
//     pomoc=a[i];
//         a[i]=a[i+1];
//     a[i+1]=pomoc;
//     }
// }

// main(){
//     int i,n,niz[MAX];
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Niz");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     zameni(niz,n);
//     printf("Novodobijeni niz:");
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
//     return 0;
// }
// 10.38. Саставити програм који за унети низ целих бројева дужине n формира и приказује нови низ
// који је састављен од елемената без понављања унетог низа.

// #define MAX 100

// main()
// {
//     int i,n,niz[MAX],ponavlja,j;
//     printf("Unesi n");
//     scanf("%d",&n);
//     printf("Niz\n");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     for(i=0;i<n-1;i++){
//             ponavlja=0;
//         for(j=i+1;j<n;j++)
//             if(niz[i]==niz[j]){
//                 ponavlja=1;
//                 break;
//             }
//             if(!ponavlja){
//                 printf("%d",niz[i]);
//             }
//     }
//     printf("%d",niz[n-1]);
//     return 0;
// }
// 10.39. Саставити програм за сортирање унетог низа целих бројева дужине n у неопадајући поредак
// методом избора (Selection Sort). Исписати сортирани низ.
// Selection Sort подразумева да минимални елемент низа размени са a[0], минимални елемент
// одсечка a[1], a[2], …, a[n-1] разменити са a[1], минимални елемент одсечка a[2], a[3], …, a[n-1]
// разменити са
// #define MAX 100

// main(){
//     int i,n,niz[MAX],pom,j;
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Uneti niz:");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("Sortiran niz:");
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(niz[i] > niz[j]){
//                 pom=niz[i];
//                 niz[i]=niz[j];
//                 niz[j]=pom;
//             }
//         }
//     }
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
//     return 0;
// }
// 11.10. Саставити програм који учита један цео број х и матрицу целих бројева А димензија nxn, а
// затим формира нову матрицу тако што све елементе испод главне дијагонала увећа за вредност х, а
// елементе изнад главне дијагонале увећава за 2х. Елементи на главној дијагонали се не мењају.
// Исписати добијену матрицу.
// #define MAX 100

// main()
// {
//     int i,j,n,x,mat[MAX] [MAX];
//     printf("Unesite n:");
//     scanf("%d",&n);
//     printf("Unesite x");
//     scanf("%d",&x);
//     printf("Uneta matrica:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Uneta matrica izgleda ovako:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//         printf(" %d",mat[i][j]);
//         printf("\n");
//     }
//     printf("Nova matrica:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//         if(i>j){
//             mat[i][j]+=x;
//         }
//         if(i<j){
//             mat[i][j]+=2*x;
//         }
//     }
//     }
//     printf("Novodobijeni niz igleda ovako:");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//         printf(" %d",mat[i][j]);
//         printf("\n");
//     }
//     return 0;
// }
// 11.12. Саставити програм који учита матрицу целих бројева А димензија nxn, а затим исписује
// матрицу у облику таблице и врши њено транспоновање. Танспонована матрица је матрица која се
// добија када се врсте почетне матрице поређају по колонама.
// а) без употребе функција;
// #define MAX 100

// main()
// {
//     int i,n,j,pom,mat[MAX] [MAX];
//     printf("Unesite n");
//     scanf("%d",&n);
//     printf("Unesite  niz:\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             scanf("%d",&mat[i][j]);
//         }
//     }
//     printf("Prikaz tr matrice:\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++)
//         printf(" %d",mat[i][j]);
//         printf("\n");
//     }
//     printf("Transponovana matrica:\n");
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             pom=mat[i][j];
//             mat[i][j]=mat[j][i];
//             mat[j][i]=pom;
//         }
//     }
//     printf("\n");
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             printf(" %d",mat[i][j]);
//             printf("\n");
//         }
//     }
//     return 0;
// }CAKA ZA TRANSPONOVANU MATRICU!!!!!!!
