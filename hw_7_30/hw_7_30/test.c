#define _CRT_SECURE_NO_WARNINGS 1

//��ȡһ���������������������е�ż��λ������λ���ֱ��ӡ������������
//#include <stdio.h>
//
//int main()
//{
//	int a = 0;
//	int b = 1;
//	int i = 0;
//	scanf("%d", &a);
//	int n = 0;
//	n = a >> 1;
//	for (i = 0; i < 32; i=i+2)
//	{
//		if ((a & b) == 1)
//			printf("1");
//		else
//			printf("0");
//		a =a>>2;
//	}
//	printf("\n");
//	for (i = 0; i < 32; i = i + 2)
//	{
//		if ((n & b) == 1)
//			printf("1");
//		else
//			printf("0");
//		n = n>>2;
//	}
//	return 0;
//}

//�����Ǿ����ж�
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    scanf("%d ", &n);
//    int arr[10][10] = { 0 };
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        int j = 0;
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if (i > j)
//                sum = sum + arr[i][j];
//        }
//    }
//    if (sum == 0)
//        printf("YES\n");
//    else
//        printf("NO\n");
//    return 0;
//}

//����ת��

//#include <stdio.h>
//
//void change(int a)
//{
//    if (a >= 6)
//    {
//        change(a / 6);
//    }
//    printf("%d", a % 6);
//
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 0;
//    change(n);
//    return 0;
//}

//������ɾ��ָ������
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int del = 0;
//    scanf("%d", &del);
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] != del)
//            printf("%d ", arr[i]);
//    }
//    return 0;
//}

//�����������Լ������С������
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int max = 0;
//    int min = 0;
//    int sum = 0;
//    //�㷨���Ӷȴ�
//    max = n > m ? n : m;
//    min = n > m ? m : n;
//    while (1)
//    {
//        if ((n % max == 0) && (m % max == 0))
//            break;
//        max--;
//    }
//    while (1)
//    {
//        if ((min % n == 0) && (min % m == 0))
//            break;
//        min++;
//    }
//    sum = max + min;
//    printf("%d\n", sum);
//    return 0;
//}
////շת��������㷨���Ӷ�С
//#include <stdio.h>
//int main()
//{
//    long long n = 0;
//    long long m = 0;
//    scanf("%lld %lld", &n, &m);
//    long long max = 0;
//    long long min = 0;
//    long long tmp = 0;
//    long long sum = 0;
//    long long a = 0;
//    long long b = 0;
//    a = n;
//    b = m;
//    while (tmp = n % m)
//    {
//        n = m;
//        m = tmp;
//    }
//    max = m;
//    min = a * b / max;
//    sum = max + min;
//    printf("%lld\n", sum);
//    return 0;
//}

//Ҫ��n��̨�ף���Ϊ���ȱȽϳ�������ÿ�ο���ѡ����һ�׻��������ף���ô��һ���ж������߷�
#include <stdio.h>

int way(int i)
{
    if (i <= 2)
        return i;
    else
        return way(i - 1) + way(i - 2);

}

int main()
{
    int n = 0;
    int s = 0;
    scanf("%d", &n);
    s = way(n);
    printf("%d", s);
    return 0;
}