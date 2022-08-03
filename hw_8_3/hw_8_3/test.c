#define _CRT_SECURE_NO_WARNINGS 1

//喝汽水问题
//#include <stdio.h>
//
//int main()
//{
//	int m = 20;
//	int buy = 0;
//	buy = m / 1;
//	int i = buy;
//	int sum = 0;
//	int flag = 0;
//	while(i >= 2)
//	{
//		sum = sum + i / 2;
//		i = i / 2+i%2;
//	}
//	sum = sum + buy;
//	printf("%d\n", sum);
//	return 0;
//}

//变种水仙花数
//#include <stdio.h>
//
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 100000; i++)
//    {
//        int sum = 0;
//        if (i / 10)
//        {
//            sum = sum + (i / 10) * (i % 10);
//        }
//        if (i / 100)
//        {
//            sum = sum + (i / 100) * (i % 100);
//        }
//        if (i / 1000)
//        {
//            sum = sum + (i / 1000) * (i % 1000);
//        }
//        if (i / 10000)
//        {
//            sum = sum + (i / 10000) * (i % 10000);
//        }
//        if (sum == i)
//            printf("%d ", i);
//    }
//    return 0;
//}
