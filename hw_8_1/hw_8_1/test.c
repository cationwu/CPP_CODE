#define _CRT_SECURE_NO_WARNINGS 1

//输入年份和月份，计算这一年这个月有多少天
//#include <stdio.h>
//int main()
//{
//    int year = 0;
//    int month = 0;
//    while (scanf("%d %d", &year, &month) != EOF)
//    {
//        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//        {
//            printf("31\n");
//        }
//        if (month == 4 || month == 6 || month == 9 || month == 11)
//        {
//            printf("30\n");
//        }
//        if (month == 2)
//        {
//            if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//            {
//                printf("29\n");
//            }
//            else
//            {
//                printf("28\n");
//            }
//        }
//    }
//    return 0;
//}

//判断是不是字母
//#include <stdio.h>
//int main()
//{
//    char a = '0';
//    while (scanf("%c", &a) != EOF)
//    {
//        getchar();
//        if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z'))
//        {
//            printf("%c is an alphabet.\n", a);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", a);
//        }
//    }
//    return 0;
//}

//字母大小写转换
//#include <stdio.h>
//int main()
//{
//    char a = '0';
//    while (scanf("%c", &a) != EOF)
//    {
//        getchar();
//        if (a >= 'a' && a <= 'z')
//            printf("%c\n", a - 32);
//        else if (a >= 'A' && a <= 'Z')
//            printf("%c\n", a + 32);
//    }
//
//    return 0;
//}

//网购
#include <stdio.h>
int main()
{
    float a = 0.0;
    int m = 0;
    int d = 0;
    int y = 0;
    float price = 0;
    scanf("%f %d %d %d", &a, &m, &d, &y);
    if (m == 11 && d == 11)
    {
        if (y == 0)
        {
            price = 0.7 * a;
            printf("%.2f\n", price);
        }
        else if (y = 1 && (a * 0.7) >= 50)
        {
            price = 0.7 * a - 50;
            printf("%.2f\n", price);
        }
        else if (y = 1 && (a * 0.7) < 50)
        {
            price = 0;
            printf("%.2f\n", price);
        }
    }
    else if (m == 12 && d == 12)
    {
        if (y == 0)
        {
            price = 0.8 * a;
            printf("%.2f\n", price);
        }
        else if (y = 1 && (a * 0.8) >= 50)
        {
            price = 0.8 * a - 50;
            printf("%.2f\n", price);
        }
        else if (y = 1 && (a * 0.8) < 50)
        {
            price = 0;
            printf("%.2f\n", price);
        }
    }
    return 0;
}