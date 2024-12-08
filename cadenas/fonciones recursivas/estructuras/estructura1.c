#include <stdio.h>
#include <string.h>
struct cd
{
  char titulo[100];
  char artista[30];  /* data */
};
int maind(void)
{
    struct cd cd1;
    printf("ingresa el titulo\n");
    scanf(cd1.titulo);
    printf("%s\n",cd1.titulo);
    return 0;
   
    
}
