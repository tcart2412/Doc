#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a,num;
    int sum=0;
    scanf("%d",&a);
    int fib[a+2];//
    fib[0]=0;fib[1]=1;//fib從第0項開始
    int k=0;

    for(int i=2;i<a+2;i++)
        fib[i]=fib[i-1]+fib[i-2];

    printf("%d",fib[a]);
}