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
	printf("ˮ����ţ�1.ƻ�� 2.�㽶 3.���� 4.��ݮ 5.����\n");
	printf("������ˮ�����(1-5),�Լ���������(����������):\n");
	scanf("%d %lf", &fruit, &amount);
	purchase = (fruits)fruit;
	printf("�ܼ�Ϊ��%.3lf", prices[purchase - 1] * amount);
	return 0;
}