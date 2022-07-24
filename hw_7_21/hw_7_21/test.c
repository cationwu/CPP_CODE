#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值，打印出结果
//int main()
//{
//	int i = 0;
//	int j = 0;
//	float sum1 = 0.0;
//	float sum2 = 0.0;
//	float sum = 0.0;
//	for (i = 1; i <= 100; i = i + 2)
//		sum1 = sum1 + 1.0 / i;
//	for (j = 2; j <= 100; j = j + 2)
//		sum2 = sum2 -1.0 / j;
//	sum = sum1 + sum2;
//	printf("%f", sum);
//	return 0;
//}

//编写程序数一下 1到 100 的所有整数中出现多少个数字9
//int main()
//{
//	int i = 0;
//	int sum = 0;
//	for (i = 1; i <= 100; i++)
//		if (i % 10 == 9)
//			sum = sum + 1;
//	for (i = 1; i <= 100; i++)
//		if (i / 10 == 9)
//			sum = sum + 1;
//	printf("%d", sum);
//	return 0;
//}

//猜数字游戏
//#include <stdlib.h>
//#include <time.h>
//void meau()
//{
//	printf("************************\n");
//	printf("*******  1.play  *******\n");
//	printf("*******  0.exit  *******\n");
//	printf("************************\n");
//}
//void game()
//{
//	int random_num = rand() % 100 + 1;
//	int input = 0;
//	while (1)
//	{
//		printf("请输入猜的数字：>");
//		scanf("%d", &input);
//		if (input < random_num)
//		{
//			printf("猜小了\n");
//		}
//		else if (input > random_num)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned)(time(NULL)));
//	do
//	{
//		meau();
//		printf("请选择：>");
//		scanf("%d", &input);
//		
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}

//二分查找
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int mid = 0;
	int key = 0;
	printf("请输入查找的数：>");
	scanf("%d", &key);
	
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (key > arr[mid])
			left = mid+1;
		else if (key < arr[mid])
			right = mid-1;
		else if (key = arr[mid])
		{
			printf("找到了:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("找不到");
	}
	return 0;
}