#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int flowers(int n, int beers[]);
int main()
{
	char jud;
	do
	{
		int n, *beers, i, sum = 0, money;		
		srand((unsigned)time(NULL));
		n = rand() % 15 + 5;
		printf("总人数：%d\n", n);
		beers = (int*)malloc(n * sizeof(int));
		if (beers == NULL)
		{
			printf("内存分配失败！\n");
			return -1;
		}
		sum = flowers(n, beers);
		printf("喝酒的序号和数量：\n");
		for (i = 0; i < n; ++i)
		{
			if (beers[i] > 0)
			{
				printf("%d号同学共喝%d杯酒\n", i+1, beers[i]);
			}
		}
		printf("一共喝了%d杯酒\n",sum);
		if (sum % 3 == 0)
		{
			money = (sum / 3) * 5;
		}
		else
		{
			money = (sum / 3 + 1) * 5;
		}
		printf("总费用为：%d\n", money);
		printf("是否继续游戏(y/n)：");
		/*getchar();*/
		scanf_s("%c", &jud, 1);
		getchar();
		printf("\n\n");
	} while (jud=='y');
	if (jud == 'n')
	{
		printf("\n游戏结束！\n");
	}
	return 0;
}
int flowers(int n, int beers[])
{
	int x, y, z, i, j, sum = 0;
	for (i = 0; i < n; ++i)
	{
		beers[i] = 0;
	}
	z = rand() % 21 + 10;
	printf("共玩%d次\n", z);
	for (i=0,j = 0; j < z; ++j)
	{
		x = rand() % 4 + 2;
		y = rand() % 3 + 1;
		i = (i + x) % n;
		beers[i] += y;
		sum += y;
	}
	return sum;
}