#define _CRT_SECURE_NO_WARNINGS 1

//三角形判断
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while (scanf("%d %d %d", &a, &b, &c) == 3)
//    {
//        if (a < b + c && b < a + c && c < a + b)
//        {
//            if (a == b && b == c)
//                printf("Equilateral triangle!\n");
//            else if (a != b && b != c && a != c)
//                printf("Ordinary triangle!\n");
//            else
//                printf("Isosceles triangle!\n");
//        }
//        else
//            printf("Not a triangle!\n");
//    }
//
//    return 0;
//}

//竞选社长
//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 0;
//    char ch = 0;
//    while (scanf("%c", &ch) != EOF)
//    {
//        if (ch == 'A')
//            a++;
//        if (ch == 'B')
//            b++;
//        if (ch == '0')
//            break;
//    }
//    if (a > b)
//        printf("A");
//    else if (a < b)
//        printf("B");
//    else
//        printf("E");
//    return 0;
//}


//公务员面试
//#include <stdio.h>
//int main()
//{
//    int a[7] = { 0 };
//    float b = 0.0;
//    int i = 0;
//
//    while (scanf("%d%d%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]) != EOF)
//    {
//        int max = 0;
//        int min = 100;
//        int sum = 0;
//        for (i = 0; i < 7; i++)
//        {
//            if (a[i] > max)
//                max = a[i];
//            if (a[i] < min)
//                min = a[i];
//            sum = sum + a[i];
//        }
//        b = (sum - max - min) / 5.0;
//        printf("%.2f\n", b);
//    }
//
//
//    return 0;
//}

//HTTP状态码
#include <stdio.h>
int main()
{
    int a = 0;
    while (scanf("%d", &a) != EOF)
    {
        if (a == 200)
            printf("OK\n");
        if (a == 202)
            printf("Accepted\n");
        if (a == 400)
            printf("Bad Request\n");
        if (a == 403)
            printf("Forbidden\n");
        if (a == 404)
            printf("Not Found\n");
        if (a == 500)
            printf("Internal Server Error\n");
        if (a == 502)
            printf("Bad Gateway\n");
    }
    return 0;
}