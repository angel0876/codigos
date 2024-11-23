#include <stdio.h>
int main(){

    int A [10]= {3,5,6,8,4,7,8,5,3,1};
    int B [10]={3,4,6,8,9,1,2,3,0,9};

    printf("EL RESUTADO DE A[3] MOD (B[2]/2) es: %d \n",A[3]%(B[2]/2));
    printf("el resultado de B[A[i]]-A[9 ES: %d \n]", B[A[1]-A[9]]);
    printf("el resultado de A[0]+ A[1+2 ES : %d]\n",A[0]+ A[1+2]);
    printf("EL RESULTADO DE A[3]mod (B[2/2]) es %d \n",A[3]%(B[2]/2));
    printf("EL RESULTADO DE B [A[1]]-A[9] ES: %d/n",B[A[1]]-A[9]);

}