#define _CRT_SECURE_NO_WARNINGS 1

//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ����
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
//		printf("�ҵ���\n");
//	else
//		printf("û�ҵ�\n");
//	return 0;
//}

//ʵ��һ�����������������ַ����е�k���ַ�

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

//дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
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
		printf("��\n");
	else
		printf("��\n");
	return 0;
}