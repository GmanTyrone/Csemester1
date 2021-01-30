#include <stdio.h>
#include <stdlib.h>
int f(int x)
{
    int a=h(x);
    int b=g(x);
    if(a==x)return 1;
    else if(x<a)return f(b)-b;
    else return f(x-1)-a;
}
int h(int y)
{
    if(y<2) return -1;
    else return 2+h(y-1)-h(y-2);
}
int g(int z)
{
    if (z>2) return 2;
    else return pow(z,2)-1;
}



int main(void)
{
     int n;
    scanf("%d",&n);
    printf("%d",f(n));
    return 0;
}
