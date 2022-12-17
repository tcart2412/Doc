#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a , b , c , d;
	printf("Please enter numbers:");
	scanf("%d,%d,%d,%d", &a , &b , &c , &d);
	int arr[] = { a , b , c , d };
	int n = sizeof(arr) / 4;
	int temp;
	int k = 0;
	for(int i = 1 ; i <= n ; i++)
	{
		for (int j = 1 ; j <= n-i ; j++)
		{
			if (arr[k] > arr[k+1]) // exchange
			{
				temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}
			k++;
		}
		k = 0;
	}
	for (int j = 0 ; j < n; j++)
		printf("%d ", arr[j]);
}