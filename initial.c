#pragma warning(disable:4996)
#include <stdlib.h>
#include <stdio.h>
#define N 100

int main()
{
	double Xaxis[N];
	double Yaxis[N];
	double t2, t3, t4,t5,t6,a,b;
	t2 = 0.0;
	t3 = 0.0;
	t4 = 0.0;
	t5 = 0.0;
	t6 = 0.0;
	int number;
	do
	{ 
		printf("以下数据将根据y = a + b x 函数进行拟合。\n");
		printf("请输入总共有几组数据：");
		scanf("%d",&number); //用户输入的数据大小
		printf("\n");
		printf("请输入X，每组数据之间用空格相隔。\n");
		for (int i = 0; i < number; i++)
		{
			scanf("%lf", &Xaxis[i]);
		}
		printf("请输入Y，每组数据之间用空格相隔。\n");
		for (int i = 0; i < number; i++)
		{
			scanf("%lf", &Yaxis[i]);
		}
		for (int i=0;i<number;i++)
		{
			t2 += Xaxis[i]; //x的总数
			t3 += Yaxis[i]; //y的总数
			t4 += Xaxis[i] * Yaxis[i]; //x乘以y的总数
			t5 += Xaxis[i] * Xaxis[i]; //x平方的总数
		}
		b = (t4-number*t2/number*t3/number)/(t5-number*(t2/number)*(t2 / number));
		a = t3/number-b*t2/number;
		printf("a的数值为：%lf ， b的数值为：%lf\n",a,b);
		printf("按下ESC键关闭界面\n");
		system("pause");
	} while (kbhit() && getch() == 0x1b);
	return 0;
}
