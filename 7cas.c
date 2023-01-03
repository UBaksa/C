#include <stdio.h>
#include <math.h>
#define MAX 10
// Matrice.

void unos(mat[MAX][MAX],int n,int m){
    int i,j;
    printf("Unesite el
    
    emente matrice");
    for(i=0;j<n;i++){
        for(j=0;j<m;i++)
        printf("%d ",max[i][j]);
printf("\n");
    }    
}

main(){
    int max[MAX][MAX],i,j,n,m;//n broj vrsta m broj kolona.
    printf("Unesite red matrice (n,m) ");
    scanf("%d %d",&n,&m);
    printf("Unesite elemente matrice");
    for(i=0;j<n;i++){
        for(j=0;j<m;i++)
        scanf("%d",&max[i][j]);
    }
    printf("Uneti elementi matrice:");
    for(i=0;i<n;i++){
        for(j=0;j<m;j++)
        printf("%d ",max[i][j]);
    }
    return 0;
    }


