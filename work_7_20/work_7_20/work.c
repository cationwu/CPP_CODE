//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//дһ�������ӡ1-100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//д���뽫�������������Ӵ�С�����
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	scanf("%d", &c);
//	if (a > b)
//	{
//		if (a > c)
//		{
//			printf("%d ", a);
//			if (b > c)
//			{
//				printf("%d ", b);
//				printf("%d", c);
//			}
//			else
//			{
//				printf("%d ", c);
//				printf("%d", b);
//			}
//				
//		}
//	
//		else
//		{
//			printf("%d ", c);
//			printf("%d ", a);
//			printf("%d", b);
//		}	
//	}
//	else
//		if (b > c)
//		{
//			printf("%d ", b);
//			if (a > c)
//			{
//				printf("%d ", a);
//				printf("%d", c);
//			}
//			else
//			{
//				printf("%d ", c);
//				printf("%d", a);
//			}
//		}
//		else
//		{
//			printf("%d ", c);
//			printf("%d ", b);
//			printf("%d", a);
//		}
//	return 0;
//}

//дһ�����룺��ӡ100~200֮�������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j == i)
//			printf("%d\n", i);
//			
//	}
//	return 0;
//}

//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int a = 1000;
//	for (a = 1000; a < 2000; a++)
//	{
//		if ((a % 100 != 0) && (a % 4 == 0))
//			printf("%d\n", a);
//		else if ((a % 100 == 0) && (a % 400 == 0))
//			printf("%d\n", a);
//	}
//	return 0;
//}


//���������������������������Լ��
//int gys(int x,int y)
//{
//	if (y == 0)
//		return x;
//	return gys(y, x % y);
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &a);
//	scanf("%d", &b);
//	c = gys(a, b);
//	printf("%d", c);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d""��""%d""=""%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//		
//
//			
//
//	return 0;
//}

//��10 �����������ֵ
int main()
{
	int i = 0;
	int arr[10] = {0};
	int max = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
		if (arr[i] > max)
			max = arr[i];
	}
	printf("%d", max);
	return 0;
}