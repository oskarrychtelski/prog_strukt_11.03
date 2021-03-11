#include <stdio.h>
#include <stdlib.h>

int main()
{
    int wszystkie=0;
    char napis;
    printf("Wpisz napis zawierajacy znak #: ");
    while ((napis=getchar())!= '#'){
        printf("%c:%d, ", napis, napis);
        wszystkie++;
        if (wszystkie%8==0)
            printf("\n");
    }
    return 0;
}
