#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, dg, gg;
    int x,y,z;
    printf("Wpisz gorna, a potem dolna granice tabeli:\n");
    scanf("%d %d", &gg, &dg);
    for (i=0;i<dg;i++){
        x=gg+i;
        y=pow(x,2);
        z=pow(x,3);
        printf("%d %d %d\n", x, y, z);
    }
    return 0;
}
