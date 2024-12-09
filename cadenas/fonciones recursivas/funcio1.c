#include <stdio.h>
#include <string.h>
int main(void){
    int x,y, max;
    x=1;
    y=100;
    max=potencia(x,y);
    printf("la potencia es:%d",max);
    return 0;

}
int potencia(int a,int b){
    if(b-1)
    return 1;
    return a*potencia(a,b-1);
}
