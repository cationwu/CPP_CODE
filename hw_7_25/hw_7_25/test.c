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
//#include <string.h>
//void reverse_string(char* arr,int a)
//{
//	char tmp = *arr;
//	*arr = *(arr+a-1);
//	*(arr + a - 1) = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string((arr + 1), a - 2);
//	}
//	*(arr + a - 1) = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int a = strlen(arr);
//	reverse_string(arr,a);
//	printf("%s", arr);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ��strlen

//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//	{
//		return 1 + my_strlen(arr + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcd";
//	int s = my_strlen(arr);
//	printf("%d\n", s);
//	return 0;
//}

//int my_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

int Fib(int n)
{
	int a = 1;
	int b = 1;
	int s = 0;
	if (n <= 2)
		return 1;
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int sum = Fib(n);
	printf("%d", sum);
	return 0;
}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while(n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int sum = Fib(n);
//	printf("%d", sum);
//	return 0;
//}