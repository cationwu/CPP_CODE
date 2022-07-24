//#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//写一个代码打印1-100之间所有3的倍数的数字
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

//写代码将三个整数数按从大到小输出。
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

//写一个代码：打印100~200之间的素数
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

//打印1000年到2000年之间的闰年
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


//给定两个数，求这两个数的最大公约数
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

//在屏幕上输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d""×""%d""=""%d ", j, i, i * j);
//		}
//		printf("\n");
//	}
//		
//
//			
//
//	return 0;
//}

//求10 个整数中最大值
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