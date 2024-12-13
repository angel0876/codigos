#include <stdio.h>
#include <string.h>
int main(void)
{
    int x=2;
    int y=3;
    printf("antes x= %d, y=%d\n",x,y);
    intercambio(&x,&y);
    printf("despues x = %d,y=%d/n",x,y);

}
void intercambio(int*a,int*b){
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}