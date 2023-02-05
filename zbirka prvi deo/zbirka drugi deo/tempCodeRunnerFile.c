main()
{
    int n,*niz,i,j,k;
    printf("Unesite duzinu niza:");
    scanf("%d",&n);
    niz=malloc((n+1)*sizeof(int));
    printf("Unesite niz:");
    for(i=0;i<n;i++){
        scanf("%d",&niz[i]);
    }
    printf("Unesite poziciju novog clana:");
    scanf("%d",&j);
    if(j<=0 || j>n){
        printf("\nUnesite pozitivan ceo broj!");
        return 1;
    }
    printf("Unesite koji ce to biti element");
    scanf("%d",&k);
    niz[j-1]=k;
    for(i=j;i<n+1;i++){
        niz[i+1]=niz[i];
    }
    printf("\nNiz sa umetnutim elementom:");
    for(i=0;i<n+1;i++){
        printf("%d ",niz[i]);
    }
    free(niz);
    return 0;
}