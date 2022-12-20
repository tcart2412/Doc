#include <stdio.h>

int main(void)
{
	int n;
	while(scanf("%d", &n))
	{
		int k = 1;
		printf("%d! = ", n);
		if(n != 0 && n != 1)
		{
			for(int i = 1; i <= n; i++)
			{
				k = k * i;
				if(i == n)
					printf("%d", i);
				else
					printf("%d * ", i);
			}
			printf(" = %d\n", k);
		}
		else
			printf("%d\n", 1);
	}
}
