#include <stdio.h>

main()
{
    int i, s, a, b, c, d,broj,s1;
    printf("Unesite pocetnu sumu.");
    scanf("%d", &s);
    for (broj = 1000; i <= s; broj++)
    {
        scanf("%d", &broj);
        a = broj % 10;
        b = (broj / 10) % 10;
        c = (broj / 100) % 10;
        d = broj / 1000;
        broj = 1000 * d + 100 * c + 10 * b + a;
        if ((a == 1 || a == 3 || a == 5 || a == 7) && (b == 1 || b == 3 || b == 5 || b == 7) && (c == 1 || c == 3 || c == 5 || c == 7) && (d == 1 || d == 3 || d == 5 || d == 7))
        {
            printf("%d", broj);
        }
    }
    return 0;
}
#include <stdio.h>
main()
{
 int i;
 for(i=1; i<=500; i++)
 if(i%3==0 && i%4==0 && i%5==0 && i%7==0)
 {
 printf("%d\n", i);
 break;
 }
 getche();
 return 0;
}
#include <stdio.h>
main()
{
 int n, i;
 float s;
 while(1)
 {
 printf(" n= ");
 scanf("%d", &n);
 if(n <= 0) break;
 s=0;
 for(i=1; i<=n; i++)
 s+=1./(i*i);
 printf (" S= %.6f\n\n", s);
 }
 getche();
 return 0;
}
#include <stdio.h>
main()
{
 while(1)
 {
 double a, s, d;
 int n,i;
 printf("\n n= ");
 scanf("%d", &n);
 if(n <= 0) break;
 printf(" Elementi: ");
 s=0, d=0;
 for(i=1; i<=n; i++)
 {
 scanf("%lf",&a);
 s+=a;
 d+=a*a;
 }
 s/=n;
 d=sqrt(d/n-s*s);
 printf(" s= %.4f\n", s);
 printf(" d= %.4f\n", d);
 }
 getche();
 return 0;
}