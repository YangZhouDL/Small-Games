#include <stdio.h>
int main()
{
	int i, k = 0, m = 0, maxstudent = 0, minstudent = 0;
	float average,maxscore = 0, minscore = 100, sum = 0;
	float student[10];	
	for ( i = 0; i < 10; ++i)
	{		
		printf("请输入第%d个人的成绩：",i+1);
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
	printf("最高分为%.2f\n", maxscore);
	printf("最低分为%.2f\n", minscore);
	printf("平均分为%.2f\n", average);
	for (i = 0; i < 10; ++i)
	{
		if (maxscore == student[i])
		{
			++k;
			maxstudent = i + 1;
			printf("第%d位同学得分最高\n", maxstudent);
		}
	}
	for (i = 0; i < 10; ++i)
	{
		if (minscore == student[i])
		{
			++m;
			minstudent = i + 1;
			printf("第%d位同学得分最低\n", minstudent);
		}
	}
	printf("共%d位同学获得最高分\n",k);
	printf("共%d位同学获得最低分\n",m);
	return 0;
}