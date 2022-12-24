#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int a = 123;
	int n, num = 0;
	int status;
	do
	{
		printf("請輸入密碼:");
		scanf("%d", &n);
		if(n != a)
			num ++;
		else
		{
			status = 1;
			break;
		}
	}while(num < 3);
	
	if(status == 1)
	{
		while(1)
		{
			int z;
			printf("輸入所需服務: 1.存款 2.離開系統:");
			scanf("%d", &z); 
			if(z == 1)
			{
				int price;
				printf("請輸入要存款的金額(1~9999):");
				scanf("%d", &price);
				printf("總共存入%d張1000元,%d張500元,%d張100元,%d個50元,%d個10元,%d個5元,%d個1元\n",
				price/1000, (price%1000)/500, (price%500)/100, 
				(price%100)/50, (price%50)/10, (price%10)/5, (price%5)%10);
			}
			else
			{
				printf("感謝使用服務, 歡迎下次再度光臨\n");
				break;
			}
		}
	}
	else
		printf("密碼輸入超過三次, 強制登出\n"); 
	system("pause");
}