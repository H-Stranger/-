#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//����һ�����������м���1

int main()
{
	////1.whileѭ����ֻ���㸺��
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

	//2.��λ�������
	int num = 0;
	int count = 0;
	scanf("%d", &num);

	int i = 0;
	//int�ܹ���4�ֽڣ�32λ
	for (i = 0; i < 32; i++)
	{
		//������һλ
		if (1 == ((num >> i) & 1))
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}