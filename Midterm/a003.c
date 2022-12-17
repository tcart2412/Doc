# include <stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int a[n];
	int sum = 0;
	for(int i = 0; i < n; i++)
		scanf(" %d", &a[i]);
	for(int i = 1; i <= n; i++)
		sum += a[i - 1] * i;
	printf("%d", sum);		
}
