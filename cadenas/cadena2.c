#include <stdio.h>
#include <string.h>

int main(){
    int len;
    char cad[]="es una cadena";
    len=strlen(cad);
    printf("la longitud de:\`%s\`es:%d\n",cad,len);
    system("pause");
    return 0;
    //strlen devuelve la longitud de la cadena din tomar en cuenta el caracter de final de cadena
    
    
}