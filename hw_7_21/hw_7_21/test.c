#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//����1/1-1/2+1/3-1/4+1/5 ���� + 1/99 - 1/100 ��ֵ����ӡ�����
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

//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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

//��������Ϸ
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
//		printf("������µ����֣�>");
//		scanf("%d", &input);
//		if (input < random_num)
//		{
//			printf("��С��\n");
//		}
//		else if (input > random_num)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��>");
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
//			printf("����������������룡\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}

//���ֲ���
int main()
{
	int arr[] = { 1,2,3,4,5 };
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0])-1;
	int mid = 0;
	int key = 0;
	printf("��������ҵ�����>");
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
			printf("�ҵ���:%d", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���");
	}
	return 0;
}