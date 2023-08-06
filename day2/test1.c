#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//计算一个数二进制有几个1

int main()
{
	////1.while循环，只能算负数
	//int num = 0;
	//int count = 0;
	//scanf("%d", &num);

	//int i = 0;
	//while (num)
	//{
	//	if (num % 2 == 1)
	//	{
	//		count++;
	//	}
	//	num = num / 2;
	//}

	//2.用位与运算符
	int num = 0;
	int count = 0;
	scanf("%d", &num);

	int i = 0;
	//int总共有4字节，32位
	for (i = 0; i < 32; i++)
	{
		//向右移一位
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}