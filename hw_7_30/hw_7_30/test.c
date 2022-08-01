#define _CRT_SECURE_NO_WARNINGS 1

//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
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

//上三角矩阵判定
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

//进制转换

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

//序列中删除指定数字
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

//正整数的最大公约数与最小公倍数
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int max = 0;
//    int min = 0;
//    int sum = 0;
//    //算法复杂度大
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
////辗转相除法，算法复杂度小
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

//要走n阶台阶，因为他腿比较长，所以每次可以选择走一阶或者走两阶，那么他一共有多少种走法
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