//compara las dos cadenas y devuelve un 0 srrcmp

#include <stdio.h>
#include <string.h>
int main(){
    int res;
    char str1[]="brisas";
    char str2[]="para";
    res= strcmp(str1,str2);
    printf("resultado: %d",res);
    return 0;
}
