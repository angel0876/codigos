#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,n;
    char * buffer;
    printf("teclea la longitud del arreglo");
    scanf("%d",&n);
    buffer = (char*) malloc ((n)*sizeof(char));
    if (buffer==NULL)exit (1);
    for(i=0;i<n; i++){
        printf("ingresa el valor %d \n",i);
        scanf("%c ",buffer+i);
    }
    printf("\nlos valores son\n");
    for (i=n-1; n>=0; n--){
        printf("%c", *(arreglo));
    }
    free (buffer);
    return 0;
}
//dr5 64 dr6 128
//dr4 32

//tink pad

 