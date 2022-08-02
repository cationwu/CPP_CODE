#define _CRT_SECURE_NO_WARNINGS 1

//写一个函数打印arr数组的内容，不使用数组下标，使用指针
//#include <stdio.h>
//
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int i = 0;
//	int* pa = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *(pa + i));
//	}
//	return 0;
//}

//写一个函数，可以逆序一个字符串的内容

//#include <stdio.h>
//#include <string.h>
//void reverse(char* str, int len)
//{
//    int i = 0;
//    for (i = len; i >= 0; i--)
//    {
//        printf("%c", *(str + i));
//    }
//}
//int main()
//{
//    char ch[10000] = { 0 };
//    int len = 0;
//    //gets()函数可接收空格，遇到回车结束
//    gets(ch);
//    len = strlen(ch) - 1;
//    reverse(ch, len);
//    return 0;
//}

//打印菱形
//#include <stdio.h>
//
//int main()
//{
//	printf("      *      \n");
//	printf("     ***     \n");
//	printf("    *****    \n");
//	printf("   *******   \n");
//	printf("  *********  \n");
//	printf(" *********** \n");
//	printf("*************\n");
//	printf(" *********** \n");
//	printf("  *********  \n");
//	printf("   *******   \n");
//	printf("    *****    \n");
//	printf("     ***     \n");
//	printf("      *      \n");
//	return 0;
//}
#include <stdio.h>
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);//7
	//打印上半部分
	for (i = 0; i < line; i++)
	{
		//打印一行
		//打印空格
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		//打印一行
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

//求出0～100000之间的所有“水仙花数”并输出
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int count = 0;
//		int tmp = 0;
//		tmp = i;
//		int sum = 0;
//		while (tmp)
//		{
//			tmp = tmp / 10;
//			count++;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum = sum+pow(tmp % 10, count);
//			tmp = tmp / 10;
//		}
//		if (i == sum)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}

//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//#include <stdio.h>
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int s = 0;
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 5; i++)
//	{
//		s = n + s * 10;
//		sum = sum + s;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
