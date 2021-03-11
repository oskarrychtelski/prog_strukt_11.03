#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis;
    int spacje = 0;
    int linie = 0;
    int wszystkie = 0;
    printf("Wpisz napis zawierajacy znak #: ");
    while ((napis=getchar())!= '#')
        if (napis == ' ')
            spacje++;
        else if (napis == '\n')
            linie++;
        else
            wszystkie++;
    printf("liczba spacji to: %d\n", spacje);
    printf("liczba znakow nowych linii to: %d\n", linie);
    printf("liczba wszystkich innych znakow to: %d", wszystkie);
    return 0;
}
