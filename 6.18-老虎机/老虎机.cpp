#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int tiger(int initmoney, int winper, int lostper, int num, int finmoney);
int main()
{
	char jud;
	do
	{
		int itime;
		srand((unsigned)time(NULL));
		itime = tiger(10, 10, 1, 100, 100);
		printf("itime=%d\n", itime);
		printf("\nContinue or not(y/n):");
		scanf_s("%c", &jud, 1);
		getchar();
		printf("\n");
	} while (jud=='y');
	if (jud == 'n')
	{
		printf("\nGame over!\n");
	}	
	return 0;
}
int tiger(int initmoney, int winper, int lostper, int num, int finmoney)
{
	int sum = initmoney, n = 0;
	int data[3] = { 0 };
	int i, j;
	int bsame = 0, itime = 0;
	for ( ;sum < finmoney && sum>0; )
	{
		bsame = 0;
		j = 0;
		while(!bsame && j < num)
		{
			for (i = 0; i < 3; ++i)
			{
				data[i] = rand() % 4;
			}
			if (data[0] == data[1] == data[2])
			{
				bsame = 1;
			}
			++j;
		}
		if (bsame = 1)
		{
			sum += winper;
		}
		else
		{
			sum -= lostper;
		}
		printf("This time sum=%d\n", sum);
		++itime;
	}
	printf("sum=%d\n", sum);
	return itime;
}