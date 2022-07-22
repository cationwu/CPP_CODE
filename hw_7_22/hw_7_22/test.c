#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	scanf("%d", &k);
//	for (i = 1; i <= k; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//
//		}
//		printf("\n");
//	}
//	return 0;
//}


//实现一个函数来交换两个整数的内容。
//void change(int* px, int* py)
//{
//	int z = 0;
//	z = *px;
//	*px = *py;
//	*py = z;
//}
//
//
//int main()
//{
//	int a = 20;
//	int b = 10;
//	change(&a,&b);
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}

//实现函数判断year是不是润年

//void year_run(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//		printf("%d为闰年", x);
//	else
//		printf("%d不是闰年", x);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	year_run(year);
//	return 0;
//}

//实现一个函数，判断一个数是不是素数。

#include <math.h>
void sushu(int x)
{
	int i = 0;
	int f = 1;
	for (i = 2; i < x; i++)
	{
		if (x % i == 0)
		{
			f = 0;
			printf("%d不是素数", x);
			break;
		}
	}
	if (f == 1)
		printf("%d是素数", x);


}
int main()
{
	int a = 0;
	scanf("%d", &a);
	sushu(a);
	return 0;
}