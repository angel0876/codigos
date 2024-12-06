#include <stdio.h>

int maximo(int num1,int num2);
int main(){
    int num1,num2,mayor;
    printf("ingresar numero");
    scanf("%d", &num1);
    printf("ingresa segundo numero");
    scanf("%d",&num2);
    mayor=maximo(num1,num2);
    printf("el numero mayor es:%d\n",mayor);
    return 0;
}
int maximo(int num1,int num2){
    int mayor;
    
    if(num1>num2){
        mayor=num1;

    }
    else{
        mayor=num2;
    }
    return mayor;
}