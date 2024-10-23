#include <stdio.h>
int main(){
    int miArreglo[100];
    int i=0;
    int mul = 2;

    while (i<100){
        
        
       miArreglo[i]=mul;
       printf("2 * %d = %d\n",i,miArreglo[i]);
       i++;
       mul+=2;
        
    }

}