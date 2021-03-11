#include <stdio.h>
#include <stdlib.h>
#define rzedy 5
int main()
{
    int i,j;
    for (i=0;i<rzedy;i++){
        for (j=0;j<=i;j++){
            printf("$ ");
        }
        printf("\n");
    }
    return 0;
}
