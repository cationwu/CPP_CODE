#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//编写一个函数实现n的k次方，使用递归实现
//int cifang(int i,int j)
//{
//	if (j > 1)
//	{
//		return (i * cifang(i,j - 1));
//	}
//	else
//	{
//		return i;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	int s = 0;
//	scanf("%d %d", &n,&k);
//	s = cifang(n,k);
//	printf("%d", s);
//	return 0;
//}

//计算一个数的每位之和（递归实现）
//int DigitSum(int n)
//{
//	int sum = 0;
//	if (n > 9)
//	{
//		return (DigitSum(n / 10)+(n%10));
//	}
//	else
//	{
//		return (n % 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	int s = 0;
//	scanf("%d", &n);
//	s = DigitSum(n);
//	printf("输入：%d,输出：%d", n,s);
//	return 0;
//}

//字符串逆序（递归实现）
#include <string.h>
void reverse_string(char arr[],int a)
{
	
}

int main()
{
	char arr[] = "abcdef";
	int a = strlen(arr);
	reverse_string(arr,a);
	return 0;
}