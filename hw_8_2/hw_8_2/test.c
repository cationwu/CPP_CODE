#define _CRT_SECURE_NO_WARNINGS 1

//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
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

//дһ����������������һ���ַ���������

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
//    //gets()�����ɽ��տո������س�����
//    gets(ch);
//    len = strlen(ch) - 1;
//    reverse(ch, len);
//    return 0;
//}

//��ӡ����
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
	//��ӡ�ϰ벿��
	for (i = 0; i < line; i++)
	{
		//��ӡһ��
		//��ӡ�ո�
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}


	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		//��ӡһ��
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

//���0��100000֮������С�ˮ�ɻ����������
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

//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
//���磺2 + 22 + 222 + 2222 + 22222
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
