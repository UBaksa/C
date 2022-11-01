// #include <stdio.h>
// #include <math.h>
// main(){
//     int main(){
//         int n,prva,druga,treca;
//         printf("Unesite jedan trocifren broj\n");
//         scanf("%d",&n);
//         if(n<100 || n>999){
//             printf("Uneti broj nije trocifren.");
//         }
//         else{
//             prva = n / 100; //123/100=1
//             druga = (n / 10) % 10; 
//             treca = n % 10;//123 / 10
//             int max = prva;
//             if(druga>max){
//                 max = druga;
//             }
//             if(treca>max){
//                 max =treca;
//             }
//             if(max == prva){
//                 if(b != 0)
//                 printf("%d%d%d\n",druga,prva,treca);
//                 if(c != 0)
//                 printf("%d%d%d\n",treca,prva,druga);
//                 if(b == 0 && c == 0)
//                 printf("%d%d%d\n",prva,druga,treca)
//             }
//             if(max == druga){
//                 if(b != 0)
//                 printf("%d%d%d\n",druga,prva,treca);
//                 if(c != 0)
//                 printf("%d%d%d\n",treca,prva,druga);
//                 if(b == 0 && c == 0)
//                 printf("%d%d%d\n",prva,druga,treca)
//             }1
//             if(max == treca){
//                 if(b != 0)
//                 printf("%d%d%d\n",druga,prva,treca);
//                 if(c != 0)
//                 printf("%d%d%d\n",treca,prva,druga);
//                 if(b == 0 && c == 0)
//                 printf("%d%d%d\n",prva,druga,treca)
//             }
//         }
//     }
// }2.zadatak
#include<stdio.h>
#include<math.h>
main(){
    int x,y,N,i,brojubeloj=0,brojucrvenoj=0;
    printf("Unesite broj N tacaka\n");
    scanf("%d",&N);
for(i=1;i<=N;i++){
    printf("Unesite x i y\n");
    scanf("%d %d",&x,&y);
    if(x >= 3 && x<=6 && y >= 5 && y <= 7)
        brojubeloj++;
    else if((x >= 1 && x<= 3 && y >= 2  && y <= 20))
    ||
    (x >= 3 && x<= 6 && x>= 2 && x<=5)
    ||
    ( x >= 3 && x<= 6 && y>= 7 && x<=20 )
    ||
    (x >= 6 && x <= 11 && y>= 2 && y<= 20))
    brojucrvenoj++;
    else
    brojubeloj++;
}
printf("Broj tacaka u beloj zoni je %d\n",brojubeloj);
printf("Broj tacaka u crvenoj zoni je %d\n",brojucrvenoj);
return 0;
}
