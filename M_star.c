# include <stdio.h>
int main(void)
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < i; j++)
			printf("%c", ' ');
		for(int j = 0; j < 5 - 2 * i; j++)
			printf("%c", '*');
		printf("%c", '\n');
	}
	for(int i = 2; i <= 3; i++)
	{
		for(int j = 0; j < 3 - i; j++)
			printf("%c", ' ');
		for(int j = 0; j < 5 - 2 * (3 - i); j++)
			printf("%c", '*');
		printf("%c", '\n');
	}
}
				
