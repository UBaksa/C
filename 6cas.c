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


main(){
    int niz[MAX],n,i,S=0,k=0;
    printf("Unesite duzinu niza(broj elemenata)");
    scanf("%d",&n);
    printf("Unesite elemente niza");
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);//niz[o],niz[1],niz[2]...
        if(niz[i]%3 == 0){
            S+=niz[i];
            k++;
        }
    }
    float as = (float)S/k;
    printf("AR sredina niza iznosi %.2f",as);
    return 0;
}
