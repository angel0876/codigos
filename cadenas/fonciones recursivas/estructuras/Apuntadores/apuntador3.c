#include <stdio.h>
#include <string.h>

int*p,y;

void func()
{
    int x=40;
    p=&x;
    y=*p;
    *p=23;

}

int maind (void)
{
    func();
    y=*p;
    *p=25;
    printf("");
}
