#include <stdio.h>
#include <stdlib.h>

int main()
{
    int parzyste=0;
    int nieparzyste=0;
    int sumap=0;
    int suman=0;
    float sredniap, srednian;
    int napis;
    printf("Wpisz liczby calkowite, konczac program znakiem 0: ");
    scanf("%d", &napis);
    while (napis!=0){
        if (napis%2==0){
            sumap+=napis;
            parzyste++;
        }
        if (napis%2==1){
            suman+=napis;
            nieparzyste++;
        }
        scanf("%d", &napis);
    }
    sredniap=sumap/parzyste;
    srednian=suman/nieparzyste;
    printf("Ilosc parzystych: %d  Srednia: %f \nIlosc nieparzystych: %d  Srednia: %f", parzyste, sredniap, nieparzyste, srednian);
    return 0;
}
