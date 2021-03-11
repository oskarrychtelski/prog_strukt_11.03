#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int rozmiar=26;
    char tab[rozmiar];
    printf("Podaj liczby wchodzace do tablicy: \n");
    for (i=0;i<rozmiar;i++)
        scanf("%d", &tab[i]);
    printf("Twoje liczby to: \n");
    for (i=0;i<(rozmiar);i++)
        printf("%d ", tab[i]);
    return 0;
}
