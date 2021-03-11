#include <stdio.h>
#include <stdlib.h>

int main()
{
    char napis;
    int operacje=0;
    printf("Wpisz napis zawierajacy znak #: ");
    while ((napis=getchar())!= '#'){
        if(napis=='.'){
            putchar('!');
            operacje++;
        }
        else if(napis=='!'){
            putchar('!');
            putchar('!');
            operacje++;
        }
        else
            putchar(napis);
}
    printf("\nliczba wykonanych operacji to: %d", operacje);
    return 0;
}
