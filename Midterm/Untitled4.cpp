# include <stdio.h>
int main(void)
{
	int a[] = {1,12};
	int b[] = {1,2};
	b = a;
	for(int i = 0; i < 2; i++)
		printf("%d", b[i]);
}
