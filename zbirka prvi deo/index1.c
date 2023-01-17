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