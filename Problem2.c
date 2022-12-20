#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    int num;
    char text[99];
    while(scanf("%d",&num)==1)
    {
        fflush(stdin);
        for(int i=1;i<=num;i++)
        {
            gets(text);
            for(int j=0; j < strlen(text); j++)
            {
                int ai = (int)text[j];
                if(ai >= 65 && ai <= 90)
                {
                    if(ai + 34 > 122)
                        text[j] = (97-1) + ((ai + 34) - 122);
                    else
                        text[j] = ai + 34;
                }
                else if(ai >= 97 && ai <= 122)
                {
                    if(ai - 30 > 90)
                        text[j] = (65-1) + ((ai - 30) - 90);
                    else
                        text[j] = ai - 30;
                }
                else if(ai >= 48 && ai <= 57)
                {
                    if(ai + 4 > 57)
                        text[j] = (48-1) + ((ai + 4) - 57);
                    else
                        text[j] = ai + 4;
                }                
                else
                    text[j] = ai;
            }
            for(int z = 0 ; z < strlen(text); z++)
                printf("%c", text[z]);
            printf("\n");
        }
    }
    return 0;
}