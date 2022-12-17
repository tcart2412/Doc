#include <stdio.h>
int main(void)
{
	int a;
	while(scanf("%d", &a))
	{
		int arr[a];
		int temp;
		for(int i = 0; i < a; i++)
			scanf("%d", &arr[i]);
		for(int i = 1; i <= a; i++)
		{
			for(int j = 0; j < a - i; j++)
			{
				if(arr[j] < arr[j + 1]) 
				{
					temp = arr[j];
					arr[j] = arr[j + 1];
					arr[j + 1] = temp;
				} 
			}
		}
		for(int i = 0; i < a; i++)
			printf("%d ", arr[i]);
		printf("%c", '\n');
	}
}
