#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//	int a, b, c;
//	a = 5;
//	c = ++a;
//	b = ++c, c++, ++a, a++;
//	b += a++ + c;
//	printf("a = %d b = %d c = %d\n:", a, b, c);
//	return 0;
//}

//����������������������ʱ������
//#include <stdio.h>
//
//int main()
//{
//	int a = 1;
//	int b = 2;
//	a = a ^ b;
//	b = b ^ a;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}

//дһ���������ز����������� 1 �ĸ�����
//���磺 15    0000 1111    4 �� 1

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int count = 32;
//    int sum = 0;
//    scanf("%d", &a);
//    while (count)
//    {
//        if ((a & 1) == 1)
//        {
//            sum++;
//        }
//        a = a >> 1;
//        count--;
//    }
//    printf("%d", sum);
//    return 0;
//}

//���������������в�ͬλ�ĸ���
#include <stdio.h>
int main()
{
	int m = 0;
	int n = 0;
	int count = 32;
	int a = 0;
	int sum = 0;
	scanf("%d %d", &m,&n);
	a = m ^ n;
	while (count)
	{
		if ((a & 1) == 1)
		{
			sum++;
		}
		a = a >> 1;
		count--;
	}
	printf("%d", sum);

	return 0;
}