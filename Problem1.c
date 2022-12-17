#include <stdio.h>
#include <stdlib.h>
int GCD(int a,int b) 
{
    int c,temp;
    while(a%b!=0)
	{
		temp=a%b;
		temp=a%b;
		a=b;
		b=temp;
	}
	return b;
}
int PrimeNumber(int a,int b)
{
    if(GCD(a,b)==1)
        return 1;
    else 
        return 0;
}
int main(void)
{
    int num,a1,a2,b1,b2,c,d,e,f,g,h,ref;
    while(scanf("%d",&num)==1)
    {
        for(int i=1;i<=num;i++)
        {
            ref=scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);                       
            if(ref<4)
            {
                printf("Input format error.\n");
                fflush(stdin);
            }
            else if(b1==0||b2==0)
            {
                printf("Input value error.\n");
                scanf("%d/%d %d/%d",&a1,&b1,&a2,&b2);
            }
            else
            {
                c=(a1*a2);
                d=(b1*b2);
                e=GCD(c,d);
                f=(a1*b2)+(a2*b1);
                g=(b1*b2);
                h=GCD(f,g);
                if(PrimeNumber(f,g)==0)
                {
                    f/=h;
                    g/=h;
                }
                if(f%g==0)
                    printf("%d",f/g);
                else if(f>d)
                    printf("%d %d/%d",f/g,f%g,g);
                else
                    printf("%d/%d",f,g);

                printf("\n");

                if(PrimeNumber(c,d)==0)
                {
                    c/=e;
                    d/=e;
                }
                if(c%d==0)
                    printf("%d",c/d);
                else if(c>d)
                    printf("%d %d/%d",c/d,c%d,d);
                else
                    printf("%d/%d",c,d);

                printf("\n");
            }
        }
    }
    return 0;
}



