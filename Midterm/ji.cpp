#include <stdio.h>
int main(void)
{
	char temp;
	char b = 'b';
	char a = 'a';
	temp = a;
	a = 'b';
	b = temp;
	
	printf("%c %c", a,b);
}
