#include<stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
// 1.4. Саставити програм који штампа унети низ карактера ред по ред.
#define MAX 100
// main()
// {
//     char s[MAX+1];
//     printf("Unesite poruku");
//     gets(s);
//     puts(s);
//     return 0;
// }
// 1.6. Саставити програм који за унети цео број n исписује одговарајуће поглавље дате књиге.
// Књига има следећа поглавља: Operatori, Ciklusi, Skokovi, Karakteri, Nizovi,
// Matrice, Stringovi, Pokazivaci, Strukture, Datoteke.
// 1.9. Саставити програм који врши:
// а) поређење два задата стринга помоћу функције strcmp().
// б) првих n карактера два стринга помоћу функције strncmp().
// main()
// {
//     char s1[MAX+1],s2[MAX+1];
//     printf("Prvi string");
//     gets(s1);
//     printf("Drugi string");
//     gets(s2);
//     if(strcmp(s1,s2)==0){
//         printf("Isti su");
//     }
//     else if(strcmp(s1,s2)>0){
//         printf("Prvi je veci od drugog");
//     }
//     else if(strcmp(s2,s1)>0){
//         printf("Drugi je veci od prvog");
//     }
//     return 0;
// }
// main()
// {
//     char s1[MAX+1],s2[MAX+1];
//     printf("Prvi string");
//     gets(s1);
//     printf("Drugi string");
//     gets(s2);
//     if(strncmp(s1,s2,3)==0){
//         printf("Prva 3 karaktera dva stringa su ista!");
//     }
//     else{
//         printf("Nisu!!");
//     }
//     return 0;
// }
// main()
// {
// int x, prom=5, *pokaz;
// pokaz = &prom;
// x = *pokaz;
// printf(" prom= %d\n x= %d\n", prom, x);
// return 0;
// }

// main()
// {
// int x=5;
// /*Adresu promenjive x zapamticemo u novoj promeljivoj.
// Nova promenljiva je tipa pokazivaca na int (int*)*/
// int *px;
// printf(" Adresa promenljive x: %p\n", &x);
// printf(" Vrednost promenljive x: %d\n", x);
// px=&x;
// printf(" Vrednost promenljive px (tj. px): %p\n", px);
// printf(" Vrednost promenljive na koju ukazuje px (tj. *px): %d\n", *px);
// /*Menjamo vrednost promenljive na koju ukazuje px*/
// *px=6;
// printf(" Vrednost promenljive na koju ukazuje px (tj. *px): %d\n", *px);
// /*Posto px sadrzi adresu promenljive x, ona ukazuje na x
// tako da je posredno promenjena i vrednost promenljive x*/
// printf(" Vrednost promenljive x: %d\n", x);
// getche();
// return 0;
// }
// Dinamcko alociranje
// 3.2. Саставити програм који учита један цео број и смешта га у динамички алоцирану меморију, а
// затим тај број исписује на стандардни излаз.
#include <stdlib.h>
// main()
// {
//     int *p;
//     p=(int *)malloc(sizeof(int));
//     if(p==NULL){
//         printf("\nGreska!");
//         return 1;
//     }
//     printf("Unesite ceo broj!");
//     scanf("%d",p);
//     printf("\nUneli ste %d",*p);
//     free(p);
//     return 0;
// }
// 3.3. Саставити програм који чита са тастатуре два цела броја и исписује њихов збир на екрану.
// Меморију за бројеве алоцирати динамички.
// main(){
//     int *p1,*p2;
//     p1=(int *)malloc(sizeof(int));
//     if(p1==NULL){
//         printf("\nGRESKA!");
//         return 1;
//     }
//     p2=(int *)malloc(sizeof(int));
//     if(p2==NULL){
//         printf("\nGRESKA!");
//         return 1;
//     }
//     printf("\nUnesite dva broja!");
//     scanf("%d %d",p1,p2);
//     printf("Zbir unetih brojeva je %d",(*p1) + (*p2));
//     free(p1);
//     free(p2);
//     return 0;
// }
// 3.4. Саставити програм који учита низ целих бројева дужине n и проналази и исписује највећи
// елемент. Елементе сместити у динамички алоцирану меморију.
// main(){
//     int i,n,max;
//     int *a;
//     printf("\nDimenzije niza:");
//     scanf("%d",&n);
//     a=(int*)malloc(sizeof(int));
//     if(a==NULL){
//         printf("\nNema dovoljno memorije!");
//         return 1;
//     }
//     printf("Unesite elemente niza:");
//     for(i=0;i<n;i++){
//         scanf("%d",a[i]);
//     }
//     max=a[0];
//     for(i=1;i<n;i++){
//         if(a[i]>max){
//             max=a[i];
//         }
//     }
//     printf("\nNajveci je %d",max);
//     free(a);
//     return 0;
// }
// 3.5. Саставити програм који учита низ целих бројева дужине n и проналази и исписује
// аритметичку средину елемената. Елементе низа сместити у динамички алоцирану меморију.

// main()
// {
//     int i,n,*niz;
//     double s=0;
//     printf("Unesite n");
//     scanf("%d",&n);
//     niz=(int*)malloc(sizeof(int));
//     if(niz==NULL){
//         printf("Nemate dovoljno memorije za niz");
//         return 1;
//     }
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     for(i=0;i<n;i++){
//         s+=niz[i];
//     }
//     printf("Ar sredina niza iznosi %.2f",s/n);
//     return 0;
// }
// 3.6. Саставити програм који учита низ целих бројева дужине n и формира нови низ са обрнутим
// редоследом елемената унетог низа. Исписати новодобијени низ. Елементе низа сместити у
// динамички алоцирану меморију.
// main()
// {
//     int i,n,*niz;
//     printf("Unesite n");
//     scanf("%d",&n);
//     niz=(int*)malloc(sizeof(int));
//     if(niz==NULL){
//         printf("\nGRESKA,nema dovoljno memorije!");
//         return 1;
//     }
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     for(i=n-1;i>=0;i--){
//         printf("%d ",niz[i]);
//     }
//     return 0;
// }
// 3.7. Саставити програм који учита низ целих бројева дужине n и уређује их у неопадајућем
// редоследу методом уметања. Исписати уређени низ. Елементе низа сместити у динамички алоцирану
// меморију.
//  main(){
//      int *niz,n,i,j,b;
//      printf("Unesite n;");
//      scanf("%d",&n);
//      niz=(int*)malloc(sizeof(int));
//      if(niz==NULL){
//          printf("\nGRESKA,nema memorije");
//          return 1;
//      }
//      for(i=0;i<n;i++){
//          scanf("%d",&niz[i]);
//      }
//      printf("\nRastuci niz od ovih elemenata:");
//      for(i=0;i<n-1;i++){
//          b=niz[i];
//          for(j=i-1;j>=0 && niz[j]>b;j--){
//             niz[j+1]=niz[j];
//          }
//          niz[j+1]=b;
//      }
//      printf("\nNovi niz");
//      for(i=0;i<b;i++){
//         printf("%d ",niz[i]);
//      }
//      free(niz);
//      return 0;
// }
// 3.8. Саставити програм који учита динамички низ целих бројева А дужине n, а затим од њега
// формира динамичке низове В и С који се састоје од негативних, односно позитивних бројева низа А.
// Исписати новокреиране низове.
// main()
// {
//     int *a,*b,*c,n,i,j=0,k=0,np=0,nn=0;
//     printf("Unesite duzinu a niza");
//     scanf("%d",&n);
//     a=(int*)malloc(sizeof(int));
//     if(a==NULL){
//         printf("\nGreska nema dovoljno memorije!");
//         return 1;
//     }
//     printf("\nUnesite elemente niza a: ");
//     for(i=0;i<n;i++){
//         scanf("%d",&a[i]);
//         if(a[i]>=0){
//             np++;
//         }
//         else{
//             nn++;
//         }
//     }
//     b=(int*)malloc(sizeof(int));
//     c=(int*)malloc(sizeof(int));
//     if(c==NULL || b==NULL){
//         printf("\nGRESKA nema dovoljno memorije!");
//         return 1;
//     }
//     for(i=0;i<n;i++){
//         if(a[i]>=0){
//             b[j++]=a[i];
//         }
//         if(a[i]<0){
//             c[k++]=a[i];
//         }
//     }
//     free(a);
//     printf("\nNiz pozitivnih:");
//     for(j=0;j<np;j++){
//         printf("%d ",b[j]);
//     }
//     printf("\nNiz negativnih:");
//     for(k=0;k<nn;k++){
//         printf("%d",c[k]);
//     }
//     free(b);
//     free(c);
//     return 0;
// }
// 3.9. Саставити функцију која врши алокацију меморије за динамички низ целих бројева дужине
// n, а затим саставити главни програм који учита низ дужине n и исписује елемент који има
// максималну вредност.
// main()
// {
//     int i,n,*niz,max;
//     printf("Unesite n:");
//     scanf("%d",&n);
//     niz=(int*)malloc(sizeof(int));
//     if(niz==NULL){
//         printf("\nGreska nema memorije!");
//         return 1;
//     }
//     printf("Unesite niz:");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     max=niz[0];
//     for(i=1;i<n;i++){
//         if(niz[i]>max){
//             max=niz[i];
//         }
//     }
// printf("\nElement sa najvecom vrednoscu je %d",max);
// return 0;
// }
// 3.12Саставити функцију за сортирање низа
// целих бројева дужине n у неопадајући поредак
// методом Merge Sort користећи као аргумент
// функције показивач на низ. За формирање
// функције користити динамичку меморију. Затим
// саставити програм који за унети низ целих
// бројева дужине n употребом претходне функције
// сортира низ и исписује новодобијени низ.
// main(){
//     int i,n,j,pomocna,*niz;
//     printf("Unesite n");
//     scanf("%d",&n);
//     niz=(int*)malloc(sizeof(int));
//     if(niz==NULL){
//         printf("\nNemate memorije!!");
//         return 1;
//     }
//     printf("\nUnesite niz:");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(niz[i]>niz[j]){
//             pomocna=niz[i];
//             niz[i]=niz[j];
//             niz[j]=pomocna;
//             }
//         }
//     }
//     printf("\nUredjen niz:");
//     for(i=0;i<n;i++){
//         printf("%d ",niz[i]);
//     }
//     return 0;
// }
// 3.13. Саставити програм који алоцира низ од max=5 целобројних елемената. Корисник затим
// уноси низ бројева. Ако број унетих бројева премаши max, тада се повећава алоцирана меморија за
// додатних 5 елемената. Унос се прекида када корисник укуца слово. На крају се исписује низ и
// деалоцира меморија.
// main()
// {
//     int max=5,element,br=0,*niz,i;
//     niz=malloc(max*sizeof(int));
//     if(niz==NULL){
//         printf("\nGRESKA!");
//         return 1;
//     }
//     printf("Unesite elemente sve dok ne ispisete neko slovo!: \n");
//     while(scanf("%d",&element)==1){
//         niz[br++]=element;
//         if(br>=max){
//             max+=5;
//             niz=realloc(niz,max*sizeof(int));
//             if(niz==NULL){
//                 printf("\nGreska nema memorije!");
//                 return 1;
//             }
//         }
//     }
//     printf("\nUneti niz:");
//     for(i=0;i<br;i++){
//         printf("%d ",niz[i]);
//     }
//     free(niz);
//     return 0;
// }
// 3.14. Саставити програм који са стандардног улаза чита целе бројеве све док се не унесе 0. Бројеви
// се смештају у низ. Не правити никакве претпоставке о димензији низа целих бројева. Унети низ
// исписати у обрнутом редоследу. Меморију проширивати:
// а) употребом realloc() функције;
// #define KORAK 10
// main(){
//     int *niz,i,br=0,element;
//     niz=malloc(KORAK*sizeof(int));
//     if(niz==NULL){
//         printf("\nGRESKA nema memorije!!");
//         return 1;
//     }
//     while(scanf("%d",&element) != 0){
//         niz[br++]=element;
//         if(br>=KORAK){
//             niz=realloc(niz,(KORAK/br)*sizeof(int));
//             if(niz==NULL){
//                 printf("\nGRESKA,nema memorije");
//                 return 1;
//             }
//         }
//     }
//     printf("\nNiz obrnutim redosledom!");
//     for(i=br-1;i>=0;i--){
//         printf("%d ",niz[i]);
//     }
//     free(niz);
//     return 0;
// }
// 3.15. Саставити програм за унети низ целих бројева дужине n врши уметање новог елемента
// између ј-тог и ј+1-ог елемента датог низа. Исписати новоформирани низ. Низ сместити у динамичку
// зону меморије.
// main()
// {
//     int n,*niz,i,j,k;
//     printf("Unesite duzinu niza:");
//     scanf("%d",&n);
//     niz=malloc((n+1)*sizeof(int));
//     printf("Unesite niz:");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);
//     }
//     printf("Unesite poziciju novog clana:");
//     scanf("%d",&j);
//     if(j<=0 || j>n){
//         printf("\nUnesite pozitivan ceo broj!");
//         return 1;
//     }
//     printf("Unesite koji ce to biti element");
//     scanf("%d",&k);
//     niz[j-1]=k;
//     for(i=j;i<n+1;i++){
//         niz[i+1]=niz[i];
//     }
//     printf("\nNiz sa umetnutim elementom:");
//     for(i=0;i<n+1;i++){
//         printf("%d ",niz[i]);
//     }
//     free(niz);
//     return 0;
// }
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// ///////////////////////// STRUKTURE //////////////////////////////////////

// struct osoba
// {
// char prezime[15];
// char ime[15];
// int visina;
// };
// main(){
//     struct osoba;
//     osoba.prezime = "Markovic";
//     osoba.ime = "Marko";
//     osoba.visina = 190;
//     printf("%s %s %d",osoba.prezime,osoba.ime,osoba,visina);
//     return 0;
//     }
// 4.3. а) Саставити структуру која садржи дан, месец и годину, затим у главном програму
// користећи ову структуру унети податке о дану, месецу и години и исписати датум.
// б) Саставити структуру која садржи податке о раднику (име, презиме и месецна плата),
// затим у главном програму користећи ову структуру унети податке о раднику и исписати исте.

// struct datum{
//     int dan;
//     int mesec;
//     int godina;
// };
// main(){
//     int d,g,m;
//     struct datum danas;
//     printf("Unesite datum");
//     scanf("%d",&d);
//     printf("Unesite mesec");
//     scanf("%d",&m);
//     printf("Unesite godinu");
//     scanf("%d",&g);
//     danas.dan = d;
//     danas.godina = g;
//     danas.mesec = m;
//     printf("%d-mesec,\n%d-godina,\n%ddan",m,g,d);
//     return 0;
// }

// Саставити структуру која садржи податке о раднику (име, презиме и месецна плата),
// затим у главном програму користећи ову структуру унети податке о раднику и исписати исте.

// struct osoba{
//     char ime[30];
//     char prezime[30];
//     float plata;
// };
// main(){
//     struct osoba radnik;
//     printf("Ime:");
//     scanf("%s", &radnik.ime);
//     printf("Ime pre zime:");
//     scanf("%s", &radnik.prezime);
//     printf("Plata");
//     scanf("%f", &radnik.plata);
//     printf("Ime %s prezime %s plata %.2f",radnik.ime,radnik.prezime,radnik.plata);
//     return 0;
// } 
// 4.4. Саставити програм који учитава податке за две особе (име и презиме, адреса и старост у
// годинама), а затим исписује податке о старијој особи.
// struct osoba{
//     char ime[30];
//     char prezime[30];
//     int starost;
// };
// main(){
//     struct osoba person1, person2, s;
//     printf("Persona1");
//     gets(person1.ime);
//     gets(person1.prezime);
//     scanf("%d",&person1.starost);
//     printf("Persona 2");
//     gets(person2.ime);
//     gets(person2.prezime);
//     scanf("%d",&person2.starost);
//     if(person1.starost > person2.starost){
//         s=person1.starost;
//     }
//     else{
//         s=person2.starost;
//     }
//     printf("Starija je osoba %s %s sa %d godina",s.ime,s.prezime,s.starost);
//     return 0;
// }
// 4.13. Саставити структуру која садржи податке о датуму (дан, месец и година), а затим користећи
// формирану структуру саставити главни програм који за унете податке о дану, месецу и години
// исписује датум. Приступ члановима структуре остварити преко показивача.

// struct datum {
//     int dan;
//     int mesec;
//     int godina;
// };


// main()
// {
//     int d,m,g;
//     struct datum Danas, *danas;
//     printf("\nDan");
//     scanf("%d",&d);
//     printf("\nMesec: ");
//     scanf("%d",&m);
//     printf("\nGodina: ");
//     scanf("%d",&g);
//     danas = &Danas;
//     (*danas).dan = d;
//     (*danas).mesec = m;
//     (*danas).godina = g;
//     printf("\nDanasnji datum: %d %d %d",(*danas).dan,(*danas).mesec,(*danas).godina);
//     return 0;
// }
// 4.14. Саставити функцију којим се учитавају подаци за особу (име и презиме, адреса и старост у
// годинама), а затим у главном програму користећи претходну функцију учитати податке за две особе
// и исписати податке о старијој особи.
// struct osoba{
//     char ime[30];
//     char prezime[50];
//     int starost;
// };

// main()
// {
//     struct osoba person1,person2, *stariji;
//     printf("-----PRVA OSOBA----\n");
//     printf("Ime: ");
//     gets(person1.ime);
//     printf("Prezime: ");
//     gets(person1.prezime);
//     printf("Starost:");
//     scanf("%d",&person1.starost);
//     printf("-----DRUGA OSOBA----\n");
//     printf("Ime: ");
//     gets(person2.ime);
//     printf("Prezime: ");
//     gets(person2.prezime);
//     printf("Starost:");
//     scanf("%d",&person2.starost);
//     if(person1.starost > person2.starost){
//         stariji =&person1;
//     }
//     else{
//         stariji=&person2;
//     }
//     printf("\nStarija osoba je: %s %s %d",(*stariji).ime,(*stariji).prezime,(*stariji).starost);
//     return 0;
// }

// 4.15. Саставити програм који учитава структуру која садржи три координате вектора, а затим у
// главном програму одредити и исписати његов интензитет:

// struct Vektor{
//     float x;
//     float y;
//     float z;
// };

// main(){
//     struct Vektor vektor3d;
//     float rezultat;
//     printf("Unesite x koordinatu:");
//     scanf("%f",&(vektor3d.x));
//     printf("Unesite y koordinatu:");
//     scanf("%f",&(vektor3d.y));
//     printf("Unesite z koordinatu:");
//     scanf("%f",&(vektor3d.z));
//     rezultat=sqrt(vektor3d.x*vektor3d.x + vektor3d.y*vektor3d.y + vektor3d.z*vektor3d.z);
//     printf("Intenzitet vektora iznosi %.2f",rezultat);
//     return 0;
// }
// 4.16. Саставити главни функцију која проверава да ли се задата тачка налази унутар задатог круга.
// Параметри круга су координате центра и полупречник. Затим саставити програм који тестира
// претходну функцију.

// struct tacka{
//     double x;
//     double y;
// };

// struct krug{
//     struct tacka o;
//     double r;
// };

// double Rastojanje(struct tacka *a,struct tacka *b){
//     return sqrt(((*a).x - (*b).x)*((*a).x - (*b).x)+((*a).y - (*b).y)*((*a).y - (*b).y));
// }

// int pripadanje(struct tacka *t,struct krug *k){
//     if(Rastojanje(t,&(*k).o)<=(*k).r){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// main()
// {
// struct tacka t;
// struct krug k;
// printf("\n Unesite koordinate tacke koja se testira: ");
// scanf("%lf%lf", &t.x, &t.y);
// printf(" Unesite koordinate centra kruga: ");
// scanf("%lf%lf", &k.o.x, &k.o.y);
// printf(" Unesite poluprecnik kruga: ");
// scanf("%lf", &k.r);
// if(pripadanje(&t, &k))
// printf("\n Tacka pripada krugu.");
// else
// printf("\n Tacka ne pripada krugu.");
// return 0;
// }
// 4.17. Саставити главни функцију која проверава да ли се задата тачка налази унутар задатог
// правоугаоника. Функција треба да врати вредност различиту од нуле уколико се тачка налази унутар
// задатог правоугаоника. Затим саставити програм који тестира претходну функцију. Правоугаоник се
// налази у првом квадранту координатног система. Тачке правоугаоника које се задају су доња лева и
// горња десна.

// struct tacka{
//     float x;
//     float y;
// };

// struct pravouganik{
//     struct tacka doleLevo;
//     struct tacka goreDesno;
// };
// int proveravanje(struct pravouganik pr,struct tacka *t){
//     return ((*t).x > pr.doleLevo.x && (*t).x < pr.goreDesno.x && (*t).y > pr.doleLevo.y && (*t).y < pr.goreDesno.y);
// }

// main(){
//     struct tacka *tt;
//     struct pravouganik prr;
//     int x1,x2,x3,y1,y2,y3;
//     printf("Unesite dve tacke za pravouganik.");
//     printf("\n x1 i y1");
//     scanf("%d %d",&x1,&y1);
//     printf("\nUnesite x2 y2");
//     scanf("%d %d",&x2,&y2);
//     prr.doleLevo.x = x1;
//     prr.doleLevo.y = y1;
//     prr.goreDesno.x = x2;
//     prr.goreDesno.y = y2;
//     printf("Unesite tacku koja se testira:");
//     scanf("%d %d",&x3,&y3);
//     (*tt).x = x3;
//     (*tt).y = y3;
//     if(proveravanje(prr,tt)){
//         printf("Nalazi se unutar pravouganika");
//     }
//     else{
//         printf("Ne nalazi se!");
//     }
//     return 0;
// }
// 4.19. Саставити структуру која садржи податке о датуму (дан, месец и година), а затим користећи
// формирану структуру саставити главни програм који уноси податке о пет датума и исписује исте.

// struct datum{
//     int dan,mesec,godina;
// };

// main(){
//     struct datum danas[5];
//     int i;
//     for(i=0;i<5;i++){
//         printf("Unesite datum po redosledu dan-mesec-godina:\n");
//         scanf("%d %d %d",&danas[i].dan,&danas[i].mesec,&danas[i].godina);
//     }
//     printf("Uneti datumi:");
//     for(i=0;i<5;i++){
//         printf("%d %d %d\n",danas[i].dan,danas[i].mesec,danas[i].godina);
//     }
//     return 0;
// }

// 4.23. Саставити програм који учитава податке о n МР3 песама (назив, извођач, албум, година
// издања), а затим исписује унете песме и приказује број песмама издатих у 2011. години.
// #define MAX 100
// typedef struct pesme{
//     char naziv[30];
//     char izvodjac[30];
//     char album[30];
//     int godina;
// }PESME;

// void citajZapis(PESME *p){
//     printf("Unesite naziv pesme:");
//     gets((*p).naziv);
//     printf("Unesite izvodjaca:");
//     gets((*p).izvodjac);
//     printf("Unesite naziv albuma:");
//     gets((*p).album);
//     printf("Unesite godinu izbacivanja albuma");
//     scanf("%d",&(*p).godina);
//     while(getchar()!='\n');
// }
// main(){
//     PESME pesma[MAX];
//     int i,n,s=0;
//     printf("Unesite broj pesama:");
//     scanf("%d",&n);
//     for(i=0;i<n;i++){
//         printf("Unesite podatke za pesmu:");
//         citajZapis(&pesma[i]);
//     }
//     printf("Zavrsen unos:\n");
//     for(i=0;i<n;i++){
//         printf("%s %s %s %d\n",pesma[i].naziv,pesma[i].izvodjac,pesma[i].album,pesma[i].godina);
//         if(pesma[i].godina == 2011){
//             s++;
//         }
//     }
//     printf("\nBroj pesama koji su izbacene 2011 godine je %d",s);
//     return 0;
// }
// 4.28. Структура о студентима се састоји од имена, презимена и оцене. Саставити програм којим се
// учитава низ од n студената и сортира их по њиховим оценама. Исписати сортирани списак
// студената.
// #define MAX 100
// typedef struct studentt{
//     char ime[30];
//     char prezime[30];
//     int ocena;
// }STUDENTI;

// void zapis(STUDENTI studentt){
//     printf("Unesite ime studenta:\n");
//     gets(student.ime);
//     printf("Unesite prezime studenta:\n");
//     gets(student.prezime);
//     printf("Unesite ocenu:\n");
//     scanf("%d",student.ocena);
// }

// main(){
//     STUDENTI osoba,pom;
//     int n,i,j;
//     printf("Unesite koliko hocete ucenika:");
//     scanf("%d",&n);
//     pritnf("\nUnesite podatke ucenika:");
//     for(i=0;i<n;i++){
//         zapis(osoba[i]);
//     }
//     printf("Pregledavanje i sortiranje ucenika po ocenama:\n");
//     for(i=0;i<n-1;i++){
//         for(j=i+1;j<n;j++){
//             if(osoba[i].ocena > osoba[j].ocena){
//                 pom=osoba[i];
//                 osoba[i]=osoba[j];
//                 osoba[j]=pom;
//             }
//         }
//     }
//     printf("\nUredjen niz!\n");
//     for(i=0;i<n;i++){
//         printf("%s %s %d \n",osoba[i].ime,osoba[i].prezime,osoba[i].ocena);
//     }
//     return 0;
// }
/////////////////////////////////DATOTEKE///////////////////////////////////////



// 5.1. Саставити програм којим се у датотеку podaci.txt уписује првих 10 целих бројева , а затим се
// из исте датотеке читају бројеви док се не достигне до краја датотеке, а затим се бројеви исписују на
// // стандарни излаз (екран).
// main()
// {
//     int i,br;
//     FILE *dato;
//     dato=fopen("podaci.txt","w");
//     if(dato==NULL){
//         printf("\nGRESKA pri otvaranju datoteke.txt");
//         exit(1);
//     }
//     for(i=0;i<10;i++){
//         fprintf(dato,"%d\n",i);
//     }
//     fclose(dato);
//     dato=fopen("podaci.txt","r");
//     if(dato==NULL){
//         printf("\nGRESKA pri otvaranju datoteke.txt");
//         exit(1);
//     }
//     while(1){
//         fscanf(dato,"%d",&br);
//         if(feof(dato)){
//             break;
//         }
//         printf("Procitano:%d\n",br);
//     }
//     fclose(dato);
//     return 0;
// }
// 5.2. Дата је датотека podaci2.txt чији је садржај приказан
// на слици. Саставити програм који у постојећеој датотеци
// дописује текст ''Pozdrav svima''.

// main(){
//     FILE *dato;
//     dato=fopen("podaci2.txt","w");
//     if(dato==NULL){
//         printf("\nGRESKA!!!!");
//         exit(1);
//     }
//     fprintf(dato,"Zdravo svima\nOvo je datoteka!");
//     fclose(dato);
//     fopen(dato,"a");
//     fprintf(dato,"Pozdrav svima");
//     fclose(dato);
//     return 0;   
// }
// main()
// {
// FILE *dato;
// int najmanji, najveci, broj;
// dato=fopen("brojevi.txt","r");
// if(dato==NULL)
// {
// printf("\n Greska pri otvaranju datoteke!");
// exit(1);
// }
// fscanf(dato,"%d",&broj);
// najmanji=broj;
// najveci=broj;
// while(fscanf(dato,"%d",&broj)!=EOF)
// {
// if(broj<najmanji) najmanji=broj;
// if(broj>najveci) najveci=broj;
// }
// fclose(dato);
// printf("\n Najmanji je broj: %d", najmanji);
// printf("\n Najveci broj: %d", najveci);
// return 0;
// }
// 5.4. Дата је датотека BrojeviStari.txt која у сваком реду садржи по један цео број. Саставити
// програм који формира датотеку BrojeviNovi.txt тако што из датотеке BrojeviStari.txt преписује
// бројеве из парних редова, а из непарних удвостручује.
// main(){
//     int broj,i=1;
//     FILE *a,*b;
//     a=fopen("BrojeviStari.txt","r");
//     if(a==NULL){
//         printf("\nGRESKA NEMA MEMORIJE!");
//         exit(1);
//     }
//     b=fopen("BrojeviNovi.txt","w");
//     if(b==NULL){
//     printf("\nGRESKA NEMA MEMORIJE!");
//         exit(1);
//     }
//     while(fscanf(a,"%d",&broj) !=EOF){
//         if(i%2==0){
//             fprintf(b,"%d",broj);
//         }
//         else{
//             fprintf(b,"%d",2*broj);
//         }
//         i++;
//     }
//     fclose(a);
//     fclose(b);
//     getche();
//     return 0;
// }
// main()
// {
// int broj, i=1;
// FILE *a,*b;
// a=fopen("BrojeviStari.txt","r");
// if(a==NULL)
// {
// printf("\n Greska pri otvaranju datoteke!");
// exit(1);
// }
// b=fopen("BrojeviNovi.txt","w");
// if(b==NULL)
// {
// printf("\n Greska pri otvaranju datoteke!");
// exit(1);
// }
// while(fscanf(a,"%d",&broj)!=EOF)
// {
// if(i%2==0)
// fprintf(b,"%d\n", broj);
// else
// fprintf(b,"%d\n", 2*broj);
// i++;
// }
// fclose(a);
// fclose(b);
// getche();
// return 0;
// }
// 5.5. Дата је датотека BrojeviХ.txt која у сваком реду садржи по један природни број. Саставити
// програм који формира датотеку BrojeviY.txt тако што из датотеке BrojeviX.txt преписује само оне
// бројеве који се састоје од цифара 3 и 7.
// main(){
//     int broj,pom,cifr,ind;
//     FILE a*, *b;
//     a=fopen("BrojeviX.txt","r");
//     if(a==NULL){
//         printf("\nGreska nema memorije!");
//         exit(1);
//     }
//     b=fopen("BrojeviY.txt","w");
//     if(b==NULL){
//         printf("\nGreska nema memorije!");
//         exit(1);
//     }
//     while(fscanf(a,"%d",&broj) !=EOF){
//         ind=1;
//         pom=broj;
//         while(pom!=0){
//             cifr=pom%10;
//             if(cifr!=3 && cifr!=7){
//                 ind=0;
//             }
//             pom/=10;
//         }
//         if(ind && broj!=0){
//             fprintf(b,"%d",broj);
//         }
//     }
//     fclose(a);
//     fclose(b);
//     return 0;
// }
