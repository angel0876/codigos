#include <stdio.h>
#include <string.h>
int i[10], x;
float f[10];
int main (void)
{
    printf("\t\tEntero\t\tfloatante\n\n");
    for (x=0; x<10; x++){
         printf("elemento %d:\t%d\t\t%d\n", x, &i[x], &f[x]);
    }
    
}



