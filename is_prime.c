# include <stdio.h>
int is_prime(int);
int main(void)
{ 
	int a;
	while(scanf("%d", &a))
	{
		if(is_prime(a) && a != 1)
			printf("%d is a prime number.\n", a);
		else
			printf("%d is not a prime number.\n", a);
	}
}

int is_prime(int n)
{
	/*┮孔借计 a, 赣计计 z(z <= a && a % z ==0)
	Τㄢ(1㎝セō a), 璝 1 ~ aぇ丁临Τヴ種计,计 */
	for(int i = 2; i < n; i++)
	{
		if(n % i == 0)
			return 0; // not a prime number.
	}
	return 1; // is a prime number.
}

