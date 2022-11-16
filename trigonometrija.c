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