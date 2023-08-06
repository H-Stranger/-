#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算 2 -3/2 + 5/3 - 8/5 + 13/8……
int  main()
{
	int n = 0;
	printf("输入n的值:");
	scanf("%d", &n);

	double a1 = 2, b1 = 1;
	double a2 = 3, b2 = 2;
	double sum = a1 / b1 - a2 / b2;
	int j = 1;

	if (n == 1)
	{
		sum = a1 / b1;
	}
	else if (n == 2)
	{
		sum = a1 / b1 - a2 / b2;
	}
	else if (n >= 3)
	{
		for (j = 1; j <= n - 2; j++)
		{
			double a = a1 + a2;
			double b = b1 + b2;
			double exp = a / b;
			if (j % 2 == 0)
			{
				exp *= -1;
			}
			sum += exp;
			a1 = a2;
			b1 = b2;
			a2 = a;
			b2 = b;
		}
	}
	printf("前%d项和为：%f", n, sum);

	return 0;
}