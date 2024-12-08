#include <stdio.h>
#include <string.h>
#include <math.h>
float area(float z,float x,float w);
int main(){
    float z,x,w;
    float resultado;
    printf("ingresar la primer medida del triangulo");
    scanf("%f",&z);
     printf("ingresar la segunda medida del triangulo");
    scanf("%f",&x);
     printf("ingresar la primer medida del triangulo");
    scanf("%f",&w);
    resultado=area(z,x,w);
    printf("el area del triangulo es: %2.1f \n", resultado);
    return 0;
}
float area(float z,float x,float w){
   float p=(z+x+w)/2;
float resultado;
resultado=sqrt(p*(p-z)*(p-x)*(p-w));
return resultado;

}
