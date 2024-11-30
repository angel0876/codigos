#include <stdio.h>
#include <string.h>

int main (void)
{
    int i,n;
    int * buffer, * p_buffer;
    printf("teclea la longitud del arreglo");
    scanf("%d",&n);
    buffer = (int*) malloc ((n)*sizeof(int));
    if (buffer==NULL)exit (1);

    p_buffer=buffer;
    for(i=0;i<n; i++){
        printf("ingresa el valor %d \n",i);

    }
    p_buffer = buffer;
    printf("\nlos valores son\n");
    for (n=0; n<i; n++){
        printf("arreglo[%d] = %d \n",*p_buffer++);

    }
    free (buffer);


}
//dr5 64 dr6 128
//dr4 32

//tink pad

 