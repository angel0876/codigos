#include <stdio.h>
#include <string.h>
struct cd
{
  char titulo[100];
  char artista[30];
  int num_canciones;
  int año;
  int precio;

};
int main(void)
{
    struct cd cd1;
    printf("ingresa el titulo\n");
    scanf("%s",cd1.titulo);
    printf("ingresa el nombre del artista\n");
    scanf("%s",cd1.artista);
    printf("ingresa numero canciones\n");
    scanf("%d",&cd1.num_canciones);
    printf("ingresa el año\n");
    scanf("%d",&cd1.año);
    printf("ingresa el precio\n");
    scanf("%d",&cd1.precio);


    printf("%s\n",cd1.titulo);
    printf("%s\n",cd1.artista);
    printf("%d\n",cd1.num_canciones);
    printf("%d\n",cd1.año);
    printf("%d\n",cd1.precio);
    
    return 0;
   
    
}
