//binary convert
# include <stdio.h>

int main(void)
{
	int n;
	while(scanf("%d", &n) != EOF)
	{
		int arr[1000];
		int count = 0;
		int j = 0;
		while(n != 0)
		{
			if(n % 2 == 0)
				arr[j] = 0;
			else
				arr[j] = 1;
			n /= 2;
			count ++;
			j ++;
		}
		int arr_r[count];
		for(int i = 0; i < count; i++)
			arr_r[i] = arr[i];
		for(int i = 1; i <= count; i++)
		{
			int temp;
			for(int z = 0; z < count - i; z++)
			{
				temp = arr_r[z];
				arr_r[z] = arr_r[z + 1];
				arr_r[z + 1] = temp;
			}
		}
		for(int i = 0; i < count; i++)
			printf("%d", arr_r[i]);
		printf("%c", '\n');
	}
	for(int i = 0; i < 10; i++)
}
