#include <stdio.h>
#include <math.h>
#include <string.h>
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