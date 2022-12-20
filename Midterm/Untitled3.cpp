#include <stdio.h>
int main(void)
{
	int a[3];
	scanf("%d %d %d", a[0], a[1], a[2]);
	for(int i = 0; i < 3; i++)
		printf("%d ", a[i]);
}
