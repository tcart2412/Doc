# include <stdio.h>
void add(char arr1[], char arr2[]);
int main(void)
{	
	char arr1[500], arr2[500];
	while(scanf("%s + %s", arr1, arr2))
	{
		add(arr1, arr2);
		printf("%c", '\n');
	}
}

void add(char arr1[], char arr2[])
{
	int a = strlen(arr1);
	int b = strlen(arr2);
	int g = a - b;
	char n[a];
	for(int i = 0; i < a; i++)
		n[i] = '0';
	int z = 0;
	for(int i = g; i < a; i++)
	{
		n[i] = arr2[z];
		z ++;
	}
	int k = 0;
	int carry = 0;
	int re[500];
	for(int i = a - 1; i >= 0; i--)
	{
		int f = (arr1[i] - 48) + (n[i] - 48) + carry;
		re[k] = f % 10;
		if(f / 10 == 1)
			carry = 1;
		else
			carry = 0;
		k++;
	}
	if(carry == 1)
	{
		re[k] = 1;
		k ++;
	}
	for(int i = 1; i <= k; i++)
		printf("%d", re[k - i]);
}
