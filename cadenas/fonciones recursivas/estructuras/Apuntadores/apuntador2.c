#include <stdio.h>
#include <string.h>
int  main(){
    int x=17,y;
    int *p;
    p=&x;
    printf("el valor de x es%d",*p);
    y=*p+3;
    printf("el valor de y es %d",y);
}
//tarea
//investigar como se calculan los cilclos de reloj en c
//medir los ciclos de reloj al abrir word lenjuage c