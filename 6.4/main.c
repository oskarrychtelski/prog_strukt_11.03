#include <stdio.h>

int main()
    {
    int rzad, j, maks, spacje;
    int x = 1;
    char ch = 'A';

    printf("Ile rzedow ma byc w piramidzie? \n");
    scanf("%d", &maks);

    for (rzad = 1; rzad <= maks; rzad++)
    {
        for(spacje = 1;spacje <= maks - rzad;spacje++)
            printf("  ");
        for (j = 0; j <= (x / 2); j++)
            printf("%c ", ch++);
        ch -= 2;
        for (j = 0; j < (x / 2); j++)
            printf("%c ", ch--);
        ch = 'A';
        x += 2;
        printf("\n");
    }
    return 0;
}
