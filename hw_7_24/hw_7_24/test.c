#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//递归实现求n的阶乘

//int jiecheng(int a)
//{
//	if (a != 1)
//		return a * jiecheng(a - 1);
//	else
//		return 1;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int s = jiecheng(n);
//	printf("%d", s);
//	return 0;
//}

//非递归实现求n的阶乘

//int main()
//{
//	int a = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &a);
//	for (i = 1; i <= a; i++)
//		sum = i * sum;
//	printf("%d", sum);
//	return 0;
//}

//递归方式实现打印一个整数的每一位

void print(int n)
{
	if (n > 9)
	{
		print(n / 10);
	}
	printf("%d ", n % 10);
}

int main()
{
	int i = 0;
	scanf("%d", &i);
	print(i);
	return 0;
}
