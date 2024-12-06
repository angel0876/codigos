#include <stdio.h>
#include <string.h>

void inverso(char palabra [10], char resultado[10]);
int main(){
    char palabra[10];
    char resultado[10];

    printf("ingresa una palabra que quieras");
    scanf("%s",palabra);
    inverso(palabra,resultado);
    printf("la palabra alreves es: %s \n",resultado);
    return 0; 
}
void inverso(char palabra [10], char resultado[10]){
   
    int len=strlen(palabra);
    for(int i=len-1;i>=0;i--){
        resultado[i]=palabra[len-1-i];
    }
}



  

