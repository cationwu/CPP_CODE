#define _CRT_SECURE_NO_WARNINGS 1

//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在
//#include <stdio.h>
//int main()
//{
//	int arr[3][3] = { {1,2,3},{3,5,7},{5,7,9} };
//	int i = 0;
//	int j = 2;
//	int find = 7;
//	while (i < 3 && j >= 0)
//	{
//		if (find > arr[i][j])
//		{
//			i++;
//		}
//		else if (find < arr[i][j])
//		{
//			j--;
//		}
//		else
//		{
//			break;
//		}
//	}
//	if (i < 3 && j >= 0)
//		printf("找到了\n");
//	else
//		printf("没找到\n");
//	return 0;
//}

//实现一个函数，可以左旋字符串中的k个字符

//#include <stdio.h>
//#include <string.h>
//char left_hand(char* ch, int k)
//{
//	int len = strlen(ch);
//	while (k)
//	{
//		int i = 0;
//		char ret = ch[0];
//		for (i = 0; i < len; i++)
//		{
//			if (i == len - 1)
//			{
//				ch[i] = ret;
//			}
//			if (i < len - 1)
//			{
//				ch[i] = ch[i + 1];
//			}
//		}
//		k--;
//	}
//}
//
//int main()
//{
//	char ch[] = "ABCD";
//	int k = 0;
//	scanf("%d", &k);
//	left_hand(ch, k);
//	printf("%s", ch);
//	return 0;
//}

//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串
#include <stdio.h>
#include <string.h>

int left_hand(char* ch1, char* ch2)
{
	int len = strlen(ch1);
	int k = len - 1;
	while (k)
	{
		int i = 0;
		char ret = ch1[0];
		for (i = 0; i < len; i++)
		{
			if (i == len - 1)
			{
				ch1[i] = ret;
			}
			if (i < len - 1)
			{
				ch1[i] = ch1[i + 1];
			}
		}
		if (strcmp(ch1, ch2) == 0)
			return 1;
		k--;
	}
	return 0;
}

int main()
{
	char ch1[10] = { 0 };
	char ch2[10] = { 0 };
	scanf("%s %s", ch1, ch2);
	int s=left_hand(ch1, ch2);
	if (s == 1)
		printf("是\n");
	else
		printf("否\n");
	return 0;
}