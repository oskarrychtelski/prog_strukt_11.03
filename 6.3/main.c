#include <stdio.h>
#include <stdlib.h>
#define rows 6

int main() {
   int i, j;
   char ch='F';
   for (i=0;i<=rows;i++){
        for(j=0;j<i;j++)
            printf("%c", ch--);
    printf("\n");
    ch='F';
    }
   return 0;
}
