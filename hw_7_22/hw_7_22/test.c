#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
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


//ʵ��һ�������������������������ݡ�
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

//ʵ�ֺ����ж�year�ǲ�������

//void year_run(int x)
//{
//	if (((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0))
//		printf("%dΪ����", x);
//	else
//		printf("%d��������", x);
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	year_run(year);
//	return 0;
//}

//ʵ��һ���������ж�һ�����ǲ���������

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
			printf("%d��������", x);
			break;
		}
	}
	if (f == 1)
		printf("%d������", x);


}
int main()
{
	int a = 0;
	scanf("%d", &a);
	sushu(a);
	return 0;
}