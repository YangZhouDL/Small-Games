#include <stdio.h>
int main()
{
	int i, k = 0, m = 0, maxstudent = 0, minstudent = 0;
	float average,maxscore = 0, minscore = 100, sum = 0;
	float student[10];	
	for ( i = 0; i < 10; ++i)
	{		
		printf("�������%d���˵ĳɼ���",i+1);
		scanf_s("%f", &student[i]);
		sum += student[i];
		if (maxscore<student[i])
		{
			maxscore = student[i];		
		}
		if (minscore > student[i])
		{
			minscore = student[i];
		}
	}
	average = sum / i;
	printf("��߷�Ϊ%.2f\n", maxscore);
	printf("��ͷ�Ϊ%.2f\n", minscore);
	printf("ƽ����Ϊ%.2f\n", average);
	for (i = 0; i < 10; ++i)
	{
		if (maxscore == student[i])
		{
			++k;
			maxstudent = i + 1;
			printf("��%dλͬѧ�÷����\n", maxstudent);
		}
	}
	for (i = 0; i < 10; ++i)
	{
		if (minscore == student[i])
		{
			++m;
			minstudent = i + 1;
			printf("��%dλͬѧ�÷����\n", minstudent);
		}
	}
	printf("��%dλͬѧ�����߷�\n",k);
	printf("��%dλͬѧ�����ͷ�\n",m);
	return 0;
}