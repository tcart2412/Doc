#include <stdio.h>
int main()
{
    int n=0;
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5-i;j++)
            printf(" ");
        for(int j=1;j<=i+n;j++)
            printf("*");
        n++;
        printf("\n");
    }
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            if(j-i>2 || i-j>2 || i+j<4 || i+j>8)
                printf("  ");
            else
                printf("* ");        
        }
        printf("\n");
    }
}