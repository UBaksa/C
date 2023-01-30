#define MAX 100

main()
{
    int j,i,n,mat[MAX] [MAX],sg=0,ss=0;
    printf("Unesite n:");
    scanf("%d",&n);
    printf("Unesite elemente matrice:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\nMatrica izgleda ovako:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf(" %d",mat[i][j]);
            printf("\n");
        }
    }
    printf("Dobijanje suma:");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i=j){
                sg+=mat[i][j];
            }
            ss+=mat[i][n-i-1];
        }
    }
    printf("\nSuma glavne : %d",sg);
    printf("\nSuma sporedne : %d",ss);
    return 0;
// }