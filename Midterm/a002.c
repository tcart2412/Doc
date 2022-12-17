# include <stdio.h>
int main(void)
{
	int a[] = { 1, 10, 19, 28, 37,
			   46, 55, 64, 39, 73,
			   82,  2, 11, 20, 48, 
			   29, 38, 47, 56, 65,
			   74, 83, 21,  3, 12,
			   30 };
	char id[10];
	while(gets(id))
	{
		int sum = 0;
		for(int i = 0; i < 8; i++)
			sum += (id[i] - 48) * (8 - i);		
		for(int i = 0; i < 26; i++)
		{
			int m = sum + a[i];
			int z = 10 - (m % 10);
			if(z == 10)
				z = 0;
			if(z == (id[8] - 48))
				printf("%c", i + 'A');
		}
		printf("%c", '\n');
	}
}
				
