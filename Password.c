#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    int a , b , c , d , e , f;
    int status = 0;
    printf("Enter:");
    scanf("%d%d%d", &a , &b, &c);
    int sum = 0;
    for(int i = 0 ; i <= 9 ; i++)
    {
        for(int j = 0 ; j <= 9 ; j++)
        {
            for(int k = 0 ; k <= 9 ; k++)
            {
                printf("%d%d%d\n", i , j , k);
                if(a == i && b == j && c == k)
                {
                    status = 1;
                    sum++;
                    break;
                }
                sum++;
            }
            if(status == 1)
                break;
        }
        if(status == 1)
            break;
    }
    printf("執行了第%d/1000時找到...", sum);
}