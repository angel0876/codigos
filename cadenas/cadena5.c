#include <stdio.h>
#include <string.h>
int main(){
    int len;
    char origen[]="brisas";
    char destino[11]="para";
    strcat(destino,origen);
    printf("destinp: %s ",destino);
    return 0;

}