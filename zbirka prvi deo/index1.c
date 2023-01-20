// 2.6. Саставити програм којим се реални број унет са тастатуре заокружује на две децимале.

#include <stdio.h>
#include <math.h>
#define STOP 0

// main()
// {
//     float a;
//     printf("Unesite neki broj sa decimalnim zapisom");
//     scanf("%f",&a);
//     printf("Uneti broj skracen za dve decimale je %.2f",a);
//     return 0;
// }
// 2.14. Саставити програм којим се замењују вредности два унета цела броја.
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
// {
// double xA, yA, xB, yB, xC, yC, a, b, c, s, P;
// printf("Koordinate temena trougla\n");
// printf(" prvo teme <xA,yA>: "); scanf("%lf%lf",&xA,&yA);
// printf("drugo teme <xB,yB>: "); scanf("%lf%lf",&xB,&yB);
// printf("trece teme <xC,yC>: "); scanf("%lf%lf",&xC,&yC);
// a=sqrt(pow(xB-xC,2)+pow(yB-yC,2));
// b=sqrt(pow(xC-xA,2)+pow(yC-yA,2));
// c=sqrt(pow(xA-xB,2)+pow(yA-yB,2));
// s=(a+b+c)/2;
// P=sqrt(s*(s-a)*(s-b)*(s-c));
// printf("\nPovrsina trougla: %.2f\n", P);
// return 0;
// }
//2.27 Саставити програм који за унети троцифрени број исписује његове цифре и суму цифара.
// {
//     int broj,prva,druga,treca,suma;
//     suma = 0;
//     printf("Unesite trocifren broj:");
//     scanf("%d",&broj);
//     prva = broj / 100;
//     druga = (broj%100)/10;
//     treca = broj%10;
//     suma = prva+druga+treca;
//     printf("\nCifre su: %d %d %d",prva,druga,treca);
//     printf("\nSuma iznosi %d",suma);
//     return 0;
// }
// 2.28. Саставити програм који учитава вредност производа у динарима, а затим израчунава и
// приказује колико је потребно новчаница од 500 дин., 100 дин. и 1 дин. за плаћање тог производа.
// {
//     int cena,petsto,sto,dinar;
//     printf("Unesite cenu artikla:");
//     scanf("%d",&cena);
//     petsto = cena/500;
//     sto = (cena%500)/100;
//     dinar = (cena%500)%100;
//     printf("\nPotrebno je :\n %d od 500 \n %d od 100 \n %d od po jedan dinar.",petsto,sto,dinar);
//     return 0;
// }
// 2.29. Саставити програм који за унети временски интервал у секундама и исписује га у облику
// дани : часови : минуте : секунде.
// {
//     int sekunde,sec,dan,sat,minut;
//     printf("Unesite interval u sekundama:");
//     scanf("%d",&sekunde);
//     sec=sekunde%60;
//     minut=sekunde/60;
//     sat=minut/60;
//     minut=minut%60;
//     dan=sat/60;
//     sat=sat%60;
//     printf("\nIma:%d dana\n,%d sati,\n %d minuta,\n %d sekundi.");    
//     return 0;
// }
// 3.1. Саставити програм који исписује обавештење да ли је унети цео број паран или непаран.
// {
//     int a;
//     printf("Unesite broj a");
//     scanf("%d",&a);
//     if(a%2 == 0){
        // printf("Broj je paran.");
//     }
//     else{
//         printf("Broj je neparan");
//     }
//     return 0;
// }
// 3.4. Саставити програм који за три унета цела броја исписује највећи.
// {
//     int a,b,c,max;
//     printf("Unesite a,b,c brojeve ovim redosledom.");
//     scanf("%d %d %d",&a,&b,&c);
//     max = a;
//     if(b>max){
//         max=b;
//     }
//     if(c>max){
//         max=b;
//     }
//     printf("Najveci je %d broj.",max);
//     return 0;
// }
// 3.5. Саставити програм који три унета реална броја уређује у неопадајућем редоследу.
// {
//     float a,b,c;
//     printf("Unesite tri broja:");
//     scanf("%f %f %f",&a,&b,&c);
//     if(a > b && a > c && b > c){
//         printf("%.2f %.2f %.2f",a,b,c);
//     }
//     else if(a > b && a > c && c > b){
//         printf("%.2f %.2f %.2f",a,c,b);
//     }
//     else if(b > a && b > c && a > c){
//         printf("%.2f %.2f %.2f",b,a,c);
//     }
//     else if(b > a && b > c && c > a){
//         printf("%.2f %.2f %.2f",b,c,a);
//     }
//     else if(c > a && c > b && a > b){
//         printf("%.2f %.2f %.2f",c,a,b);
//     }
//     else if(c > a && c > b && b > a){
//         printf("%.2f %.2f %.2f",c,b,a);
//     }
// return 0;
// }
// 3.8. Саставити програм који ће за унети опсег позитивних целих бројева од а до b исписати да ли
// се у задатом опсегу налази квадрат броја х (број х се уноси са тастатуре).
// {
//     int a,b,x;
//     printf("Unesite brojeve obseg a i b");
//     scanf("%d %d",&a,&b);
//     printf("Unesite broj x");
//     scanf("%d",&x);
//     if((a < x*x) && (b> x*x)){
//         printf("Kvadrat broja x se nalazi u domenu od a do b");
//     }
//     else{
//         printf("Kvadrat broja x se ne nalazi u domenu od a do b.");
//     }
//     return 0;
// }
// 4.5. Саставити програм који за унето n учитава n реалних бројева и приказује њихов збир и
// аритметичку средину.
// {
//         int n,i;
//         float s,broj,ars;
//         s=0;
//         printf("Unesite broj n koliko brojeva ce biti uneto.");
//         scanf("%d",&n);
//         for(i=1;i<=n;i++){
//                 scanf("%f",&broj);
//                 s+=broj;
//         }
//         ars=s/n;
//         printf("Suma svih unetih brojeva je %.2f.",s);
//         printf("Aritmeticka sredina unetih brojeva je %.2f",ars);
//         return 0;
// }
// 4.6. Саставити програм који за унети цео број n приказује његов факторијел.
// {
//         int i,n;
//         long faktorijel=1;
//         printf("Unesite broj n");
//         scanf("%d",&n);
//         for(i=1;i<=n;i++){
//                 faktorijel=faktorijel*i;
//         }
//         printf("Faktorijel unetog broja n je %ld",faktorijel);
//         return 0;
// }
// // 4.7. Саставити програм којим се за унети природан број n израчунава суму: S =1!+2!+3!+...+n!.
// {
//         int i,n,s=0;
//         long fakt=15
//         ;
//         printf("Unesite broj n do kojeg ce ici suma faktorijala;");
//         scanf("%d",&n);
//         for(i=1;i<=n;i++){
//                 fakt=fakt*i;
//                 s+=fakt;
//         }
//         printf("Suma faktorijala koja ide do broja n iznosi: %d",s);
//         return 0;
// }
// 4.12. Саставити програм који ће учитати n реалних бројева и исписати највећи.
// {
//         int i, n;
// float br, max;
// printf("\nn= ");
// scanf("%d",&n);
// printf("\nUnesite 1. broj: ");
// scanf("%f",&br);
// max=br;
// for(i=2; i<=n; i++)
// {
// printf("Unesite %d. broj: ",i);
// scanf("%f",&br);
// if(br>max) max=br;
// }
// printf("\nNajveci: %.2f", max);
// return 0;
// }
// 4.13. Саставити програм који ће исписати све бројева прве стотине који су дељиви са 6 и њихову
// суму.
// {
//         int i,s=0;
//         for(i=1;i<=100;i++){
//                 if(i%6 == 0){
//                         s+=i;
//                 }        
//         }
//         printf("Suma brojeva deljivis sa 6 je %d",s);
//         return 0;
// }
// 4.14. Саставити програм који исписује све троцифрене бројеве код којих је друга цифра за 2 већа
// од прве, а трећа за 1 већа од друге.
// {
//         int a,b,c;
//         for(a=1;a<=9;a++){
//                 for(b=0;b<=9;b++){
//                         for(c=0;c<=9;c++){
//                                 if(b == 2+a && c == 1+b){
//                                         printf("\n%d%d%d",a,b,c);
//                                 }
//                         }
//                 }
//         }
//         return 0;
// }
// 4.15. Саставити програм којим се исписују сви троцифрени Амстронгови бројеви. Троцифрени
// број је Амстронгов ако је једнак збиру кубова својих цифара.
// {
//         int a,b,c,broj;
//         for(a=1;a<=9;a++){
//                 for(b=0;b<=9;b++){
//                         for(c=0;c<=9;c++){
//                                 broj=100*a + 10*b + c;
//                                 if(broj==(pow(a,3)+pow(b,3)+pow(c,3))){
//                                         printf("\n%d",broj);
//                                 }
//                         }
//                 }
//         }
//         return 0;
// }
// // 4.17. Саставити програм којим се исписују сви троцифрени бројеви који имају особину да су
// дељиви бројем који се добија избацивањем средње цифре.

// {
//         int a,b,c,broj,dvecifre;
//         for(a=1;a<=9;a++){
//                 for(b=0;b<=9;b++){
//                         for(c=0;c<=9;c++){
//                                 broj=100*a + 10*b + c;
//                                 dvecifre=10*b+c;
//                                 if(broj%dvecifre == 0){
//                                         printf("\n %d",broj);
//                                 }
//                         }
//                 }
//         }
//         return 0;
// }

// 4.18. Саставити програм који рачуна суму троцифрених природних бројева чији је збир цифара
// једнак 5. Исписати и обавештење колико бројева има такву особину.
// {
//         int a,b,c,broj,suma=0,s=0;
//         for(a=1;a<=9;a++){
//                 for(b=0;b<=9;b++){
//                         for(c=0;c<=9;c++){
//                                 broj=100*a + 10*b + c;
//                                 if(a+b+c==5){
//                                         printf("\n%d%d%d",a,b,c);
//                                         suma+=broj;
//                                         s++;
//                                 }
//                         }
//                 }
//         }
//         printf("\nSuma brojeva je %d",suma);
//         printf("\nTih brojeva ima %d",s);
//         return 0;
// }
// 4.19. Саставити програм који ће исписати све делиоце унетог броја n.
// {
//         int i,n;
//         printf("Unesite broj koji zelite proveriti njegove delioce");
//         scanf("%d",&n);
//         for(i=1;i<=n;i++){
//                 if(n%i == 0){
//                         printf("\n%d",i);
//                 }
//         }
// }
// 4.20. Саставити програм који ће исписати обавештење да ли је унети број n савршен. Број је
// савршен ако је једнак суми својих делиоца искључујући њега самог. На пример, 28=1+2+4+7+14.
// {
//         int n,s=0,i;
//         printf("Unesite broj koji zelite proveriti je li savrsen.");
//         scanf("%d",&n);
//         for(i=1;i<=n;i++){
//                 if(n%i == 0){
//                         s+=i;
//                 }
//         }
//         if(n  == (s-n)){
//                 printf("Broj je savrsen.");
//         }
//         else{
//                 printf("Broj nije savrsen.");
//         }
//         return 0;
// }
// 5.3. Саставити програм за исписивање суме природних бројева од 1 до n. Број n се уноси са
// тастатуре.
// {
//         int i,n,s=0;
//         printf("Unesite n");
//         scanf("%d",&n);
//         i=1;
//         while(i<=n){
//                 s+=i;
//                 i++;
//         }
//         printf("Suma iznosi %d",s);
//         return 0;
// }
// 5.4. Саставити програм за исписивање суме сваког трећег природног броја од 1 до n. Број n се
// уноси са тастатуре.
// {
//         int i,n,s=0;
//         printf("Unesite n");
//         scanf("%d",&n);
//         i=1;
//         while(i<=n){
//                 s+=i;
//                 i=i+3;
//         }
//         printf("Suma svakog treceg iznosi %d",s);
//         return 0;
// }
// 5.6. Саставити програм за израчунавање суме s квадрата парних и кубова непарних природних
// бројева од n до m (n<m).
// {
//         int i,n,m,s=0;
//         printf("Unesite n;");
//         scanf("%d",&n);
//         printf("Unesite m;");
//         scanf("%d",&m);
//         while(i<=m){
//                 if(i%2==0){
//                         s+=pow(i,2);
//                 }
//                 else{
//                         s+=pow(i,3);
//                 }
//                 i++;
//         }
//         printf("Suma iznosi %d",s);
//         return 0;
// }
// 5.7. Саставити програм којим се:
// а) исписује n елемената Фибоначијевог низа;
// б) израчунава и исписује сума првих n елемената Фибоначијевог низа.
// Фибоначијев низ: f1=1, f2=1, fi=fi-1+fi-2, i=3, 4, 5, ...
// {
//         int i,n,fp=1,fpp=1,fn;
//         printf("Unesite koliko zelite n elemenata fib niza.");
//         scanf("%d",&n);
//         printf("%d %d",fp,fpp);
//         while(i<=n){
//                 fn=fp+fpp;
//                 fpp=fp;
//                 fp=fn;
//                 printf("\n%d",fn);
//                 i++;
//         }
//         return 0;
// }
// {
//         int i=3,n,fp=1,fpp=1,s=2,fn;
//         printf("Unesite n");
//         scanf("%d",&n);
//         printf("%d\n%d",fp,fpp);
//         while(i<=n){
//                 fn=fp+fpp;
//                 s+=fn;
//                 fpp=fp;
//                 fp=fn;
//                 i++;
//         }
//         printf("Suma iznosi %d",s);
//         return 0;
// }
// KOD FIBONACIJEVOG I KRECE OD 3!!!!!!!!!
// 5.8. Саставити програм за исписивање n-тог степена броја а. Оба броја се уносе са тастатуре.
// {
//         int a,n=1,i;
//         printf("Unesite broj a;");
//         scanf("%d",&a);
//         printf("Unesite stepen broja a;");
//         scanf("%d",&n);
//         i=1;
//         (while i<=n){
//                 n=n*a;
//                 i++
//         }
//         printf("Stepenovan broj iznosi ")
// // }
// 5.9. Саставити програм за израчунавање средње вредности унетих реалних бројева. Користити
// број 0 као STOP кôд за крај учитавања.
main()
// {
// int n=0;
// float x,s=0;
// printf("Unesite niz realnih brojeva sve do 0");
// scanf("%f",&x);
// while(x!=STOP){
//         s+=x;
//         n++;
//         scanf("%f",&x);
// }
// if(n==0){
//         printf("Morate zadati neki niz!");
// }
// else{
//         printf("Ar sredina iznosi %.2f",s/n);
// }
// return 0;
// }
// 5.10. Саставити програм који ће учитавати један за другим низ бројева. Крај уноса означен је
// нулом. Наћи и исписати аритметичку средину учитаних бројева узимајући у обзир само оне бројеве
// који су већи или једнаки 2 и мањи или једнаки 6.
// {
//         int i=0;
//         float x,s=0,n=0;
//         printf("Unesite neke brojeve");
//         scanf("%f",&x);
//         while(x!=STOP){
//                 if( x >= 2 || x <= 6){
//                         s+=x;
//                         n++;
//                 }
//                 i++;
//         }
//         printf("Ar sredina brojeva iznosi %.2f",s/n);
//         return 0;
// }bolje kako su oni uradili u zbirci.
// 5.12. Саставити програм који ће учитати два броја m и n. Оба броја треба да буду природна. Ако
// тај услов није испињен, учитавање треба поновити. Ако је n<m, заменити m са n. Наћи и исписати
// суму квадратних корена свих непарних бројева од m до n.
// {
//         int i,m,n,pomocna;
//         float suma=0,koren;
//         printf("Unesite m i n");
//         while(m<1 || n<1){
//                 scanf("%d %d",&m,&n);
//         }
//         if(n<m){
//                 m=pomocna;
//                 n=m;
//                 pomocna=n;
//         }
// }
// 5.17. Саставити програм којим се исписује највећи заједнички делилац (NZD) бројева a и b
// помоћу Еуклидовог алгоритма:
// - ако је a=b, тада је NZD=a и то је крај алгоритма;
// - ако је а≠b, тада од већег броја одузимамо мањи и враћамо се на први корак.
// {
//         int a,b;
//         printf("Unesite a;");
//         scanf("\n%d",&a);
//         printf("\nUnesite b;");
//         scanf("\n%d",&b);
//         if(a=b)
// }
// 5.18. Саставити програм који испитује да ли је унети број Нивенов. Нивенов број је број који је
// дељив са сумом својих цифара.//// FINTA ZA IZVLACENJE SVAKE CIFRE PONAOSOB!!!!!!
// {
//         int n, k, suma=0;
// printf(" n= ");
// scanf("%d", &n);
// k=n;
// while(k > 0)
// {
// suma+=k%10;
// k /= 10;
// }
// if(k%suma==0)
// printf("\n Broj %d jeste Nivenov\n", n);
// else
// printf("\n Broj %d nije Nivenov\n", n);
// return 0;
// }
// 6.4. Саставити програм којим се исписују сви степени броја 2 који нису већи од унете вредности
// променљиве границе, а која је већа од броја 2.
// {
//         int stepen,granica;
//         printf("Unesite granicu");
//         scanf("%d",&granica);
//         stepen=1;
//         do{
//                 printf("\n%d",stepen);
//                 stepen*=2;
//         }
//         while(stepen<=granica);
//         return 0;
// }
// 6.9. Саставити програм којим се врши сабирање и исписује сума свих троцифрених бројева
// дељивих са 64. Колико има таквих бројева?
// {
//         int i=100,brojac=0,s=0;
//         do{
//                 if(i%64==0){
//                         s+=i;
//                         brojac++;
//                 }
//                 i++;
//         }
//         while(i<=999);
//         printf("\nSuma iznosi %d",s);
//         printf("\nTih brojeva ima %d",brojac);
//         return 0;
// }
// 7.2. Саставити програм који ће учитавати позитивне целе бројеве и исписивати њихове квадрате
// све док не причита негативни број.
// {
// int i;
// while(1){
//         printf("i=");
//         scanf("%d",i);
//         if(i<0){
//                 break;
//         }
//         printf("%d",i*i);
// }
// return 0;
// }
// 7.3. Саставити програм који са тастатуре копира на екран низ целих бројева све док се не унесе
// 100 или број 0 као STOP код.
// {
//         int i,x;
//         printf("Unesite cele brojeve 100 njih sve dok se ne unese 0.\n\n");
//         for(i=0;i<=100;i++){
//                 scanf("%d",&x);
//                 if(x==0){
//                         break;
//                 }
//                 printf("\n%d",x);
//         }
//         return 0;
// }
// 7.4. Саставити програм који ће исписати први број (ако постоји) који је мањи од 500, а дељив са
// бројевим 3, 4, 5 и 7.
// {
//         int i;
//         for(i=1;i<500;i++){
//                 if(i % 3 == 0 && i % 4 == 0 && i % 5 == 0 && i % 7 == 0){
//                         printf("%d",i);
//                         break;
//                 }
//         }
//         return 0;
// }
// 7.7. Саставити програм који ће исписати све просте бројеве од 1 до 100. Број је прост ако је
// дељив само са 1 и самим собом.
