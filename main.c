#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x,y;
    char znak;
    printf("Podaj pierwsza liczbe\n");
    scanf("%lf", &x);
    printf("Podaj znak dzialania, ktore chcesz wykonac (+,-,*,/)\n");
    scanf("%s", &znak);
    printf("Podaj druga liczbe\n");
    scanf("%lf", &y);
    if (znak=='+')
        printf("Dodaje liczby, a wynik to:%lf", x+y);
    if (znak=='-')
        printf("Odejmuje liczby, a wynik to:%lf", x-y);
    if (znak=='/')
        printf("Dziele liczby, a wynik to:%lf", x/y);
    if (znak=='*')
        printf("Mnoze liczby, a wynik to:%lf", x*y);
    return 0;
}
