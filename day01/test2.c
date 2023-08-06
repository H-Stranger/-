#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	typedef enum{apple,banana,orange,strawberry,pear}fruits;
	double prices[5];
	fruits purchase;
	int fruit;
	double amount;
	for (int i = 0; i < 5; i++)
	{
		scanf("%lf", &prices[i]);
	}
	printf("水果编号：1.苹果 2.香蕉 3.橙子 4.草莓 5.梨子\n");
	printf("请输入水果编号(1-5),以及购买数量(按斤两计算):\n");
	scanf("%d %lf", &fruit, &amount);
	purchase = (fruits)fruit;
	printf("总价为：%.3lf", prices[purchase - 1] * amount);
	return 0;
}