#include <stdio.h>
#include <string.h>
int main(){
    char cadena1[20],cadena2[20];
    int longitud,i;
    printf("primer palabra");
    scanf("%s",cadena1);
     printf("segunda palabra");
    scanf("%s",cadena2);
    int resultado=strcmp(cadena1,cadena2);
    if(resultado==0){
        printf("0");
    }else if(resultado<0){
        printf("1");

    }else if(resultado>0){
        printf("-1");

    }
    printf("\n");
    return 0;

}