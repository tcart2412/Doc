# include <stdio.h>
# include <stdlib.h>
# include <math.h>
int Cal(int);
int main(void)
{
    char ch;
    while(scanf("%c",&ch))
    {
        if((int)ch<65)
            printf("number\n");
        else
            printf("letter\n");
        fflush(stdin);
    }
}