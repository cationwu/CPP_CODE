#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ��
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

//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�
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
//	printf("���룺%d,�����%d", n,s);
//	return 0;
//}

//�ַ������򣨵ݹ�ʵ�֣�
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