# include <stdio.h>
void add(char arr1[], char arr2[]);
int main(void)
{
	add("9314", "996");	
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
		int f = (arr1[i] - 48) + (n[i] - 48);
		re[k] = (f + carry) % 10;
		printf("%d\n", re[k]);
		if(f >= 10)
			carry = 1;
		else
			carry = 0;
		k++;
	}
	if(carry == 1)
	{
		re[k + 1] = 1;
		k ++; 
	}
	for(int i = 0; i < k; i++)
		printf("%d", re[i]);
}
