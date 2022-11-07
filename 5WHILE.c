#include <stdio.h>
#include <math.h>

// main()
// {
//     int i,fp,fpp,fn,n;
//     printf("n=");
//     scanf("%d",&n);
//     printf("f1=1;f2=1");
//     fp=1;
//     fpp=1;
//     i=3;
//     while(i<=n){
//         fn=fp+fpp;
//         fpp=fp;
//         fp=fn;
//         printf("\nf%d = %d",i,fn);
//         i++;
//     }
//     return 0;
// }5.7/a

main(){
    int i,n,fpp,fp,fn;
    float s;
    s=0;
    i=3;
    fp=1;
    fpp=1;
    printf("Unesite n");
    scanf("%d",&n);
    while(i<=n){
        fn=fp+fpp;
        s=s+fn;
        fpp=fp;
        fp=fn;
        i++;
    }
    printf("Suma = %f",s);
    return 0;
}