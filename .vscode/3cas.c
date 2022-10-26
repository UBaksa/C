// // for petlja
// #include <stdio.h>
// #include <stdlib.h>
// // for(pocetni izraz;uslov;korak promene)
// int main(){
//     int i;
//     for(i=1;i<=100;i++)
//     printf("%d  Hello world!\n",i);
// }4.1
// #include <stdio.h>
// #include <stdlib.h>
// //S=1+2+3+4+5+6+7+8+9+....(n-1)+n
// // S=0,1,3,6,10,15,21,28...-na kraju neka suma
// {
// int i,n;
// printf("Unesite n\n");
// scanf("%d",&n);
// S = 0;
// for(i=1;i<=n;i++);
// S = S + i;
// // S+= i;moze i ovako
// printf("Dobijena suma iznosi %d\n",S);
// return 0;
// }4.2
// input 3,-1,7
// output: 6,0,28
// #include <stdio.h>
//  int main(){
//     int i,n;
//     float broj;
//     printf("Unesite n\n");
//     scanf("%d",&n);
//     float S = 0;
//     for(i=1;i<=n;i++);
//     printf("Unesite jedan realan broj:");
//     scanf("%f",&broj);
//     S = S + broj;
//     printf("Dobijena suma iznosi %d",S);
//     return 0;
//  }4.3
// #include <stdio.h>
// int main(){
//     int i,n;
//     long fakt=1;
//     printf("Unesite n:");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//      fakt= fakt*i;
//     printf("%d=%ld",n,fakt);}
//     return 0;
// }4.6
// #include <stdio.h>
// int main(){
//     int i,n,m;
//     float S = 0;
//     printf("Unesite n i m\n");
//     scanf("%d","%d",&n,&m);
//     int znak = 1;
//     for(i=1;i<=m;i++){
//         float clan = znak*1.0/(n+i*m);
//         S = S + clan;
//         znak = -znak;
//     }
//     printf("Dobijena suma iznosi %.2f",S);
//     return 0;
// }4.8
#include <stdio.h>
int main(){
    
}