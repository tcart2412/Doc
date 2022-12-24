# include <stdio.h>

// fib = 0, 1, 1, 2, 3, 5, 8, 13... (從第 0 項開始) 
int main(void)
{
	int n;
	scanf("%d", &n);
	int fib[n + 2];
	fib[0] = 0;
	fib[1] = 1;
	for(int i = 2; i <= n; i++)
		fib[i] = fib[i - 2] + fib[i - 1];
	printf("fib[%d] = %d", n, fib[n]);  
	
}
		
		
