# include <stdio.h>
# include <string.h>
int re(int);
int in[26]; // 字母數字轉換後的值 
int z;
int main(void)
{
	char ch[10];
	while(gets(ch))
	{
		int co[10];
		int a = 8;
		int sum = 0;
		char at[3];
		char temp;
		for(int i = 0; i < strlen(ch)-1; i++)
		{
			co[i] = ch[i] - 48;
			sum += co[i] * a;
			a--;
		}
		char le[26]; //英文字母 
		for(int i = 0; i < 26; i++)
			le[i] = i + 65;
			
		for(int i = 0; i < 26; i++)
		{
			if(i == 8)
				in[i] = 39;
			else if(i == 14)
				in[i] = 48;
			else if(i == 22)
				in[i] = 21;	
			else if(i == 25)
				in[i] = 30;	
			else
			{
				if(i > 8 && i < 14) 
					in[i] = ((10 + (i - 1)) / 10) + (((10 + (i - 1)) % 10)* 9);
				else if(i > 14 && i < 22)
					in[i] = ((10 + (i - 2)) / 10) + (((10 + (i - 2)) % 10)* 9);
				else if(i > 22 && i < 25)
					in[i] = ((10 + (i - 3)) / 10) + (((10 + (i - 3)) % 10)* 9);	
				else
					in[i] = ((10 + i) / 10) + (((10 + i) % 10) * 9);
			}
		}
						
		int head = 0;
		while(head <= 83)
		{	
			if(((10 - ((head + sum) % 10)) == (ch[8] - 48)) && re(head))
			{
				int j = 0;
				for(int i = 0; i < 26; i++)
				{
					if(head == in[i])
					{
						at[j] = le[i];
						j++;
					}
				}
			}
			head++;
		}
		for(int i = 0; i < strlen(at); i++)
			printf("%c", at[i]);
		printf("%c", '\n');
		for(int i = 1; i <= strlen(at); i++)
		{
			for(int j = 0; j < strlen(at) - i; j++)
			{
				if(at[j] > at[j + 1])
				{
					temp = at[j];
					at[j] = at[j + 1];
					at[j + 1] = temp;
				}
			}
		}
		for(int i = 0; i < strlen(at); i++)
			printf("%c", at[i]);					 
		printf("%c", '\n');
	}
}
int re(int h)
{
	int count = 0;
	for(int i = 0; i < 26; i++)
	{
		if(h == in[i])
			count++;
	}
	return count;
}
