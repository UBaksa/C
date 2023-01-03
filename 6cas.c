// NIZOVI
// U C-U
// indeksiranje krece od 0 do n...
// za pristupanju indeksu koristi se [npr 0]
// printf("%d",a[0]);

#include <stdio.h>
#define MAX 100 
// main(){
//     int niz[MAX],n,i;
// printf("Unesite duzinu niza(broj elemenata)");
// scanf("%d",&n);
// printf("Unesite elemente niza");
// for(i=0;i<n;i++){
//     scanf("%d",&niz[i]);//niz[o],niz[1],niz[2]...
// }
// printf("Uneti elementi su:\n");
// for(i=0;i<n;i++){
//     printf("%d",niz[i]);
// }
//     return 0;
// }


// naci aritmeticku sredinu niza
// main(){
// int niz[MAX],n,i,S=0;
// printf("Unesite duzinu niza(broj elemenata)");
// scanf("%d",&n);
// printf("Unesite elemente niza");
// for(i=0;i<n;i++){
//     scanf("%d",&niz[i]);//niz[o],niz[1],niz[2]...
//     S+= niz[i];
// }
// float as = (float)S/n;
// printf("Ar sredina niza iznosi %.2f",as);
// return 0;
// }


// main(){
//     int niz[MAX],n,i,S=0,k=0;
//     printf("Unesite duzinu niza(broj elemenata)");
//     scanf("%d",&n);
//     printf("Unesite elemente niza");
//     for(i=0;i<n;i++){
//         scanf("%d",&niz[i]);//niz[o],niz[1],niz[2]...
//         if(niz[i]%3 == 0){
//             S+=niz[i];
//             k++;
//         }
//     }
//     float as = (float)S/k;
//     printf("AR sredina niza iznosi %.2f",as);
//     return 0;
// }

// main(){
//     int A[MAX],B[MAX],n,i,S=0;
//     printf("Unesite duzinu niza(broj elemenata)");
    // scanf("%d",&n);
//     printf("Unesite elemente niza A");
//     for(i=0;i<n;i++){
//         scanf("%d",&A[i]);
//     }
//     printf("Unesite elemente niza B");
//     for(i=0;i<n;i++){
//         scanf("%d",&B[i]);
//     }
//     for(i=0;i<n;i++){
//         S+=A[i]*B[i];
//     }
//     printf("Skalarni proizvod iznosi %.2f",S);
//     return 0;
// }

// unos svakog niza je isti i iste su for petlje!


// 10.11

void unos(int niz[MAX],int n){
    printf("Unesite elemente niza A");
    for(i=0;i<n;i++){
        scanf("%f",&A[i]);
    }
}
void ispis(int niz[MAX],int w){
    int i;
    printf("Elementi niza su\n");
    for(i=0;i<w;i++)
    printf("%d",&niz[i]);
}

// 10.22
main(){

}