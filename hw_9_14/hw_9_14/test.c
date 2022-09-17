#define _CRT_SECURE_NO_WARNINGS 1

//改数字，把每位的数变成0或1
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int ret = 0;
//    int i = 0;
//    while (n)
//    {
//        int a = 0;
//        a = n % 10;
//        if (n % 2 == 1)
//        {
//            a = 1;
//        }
//        else
//        {
//            a = 0;
//        }
//        n = n / 10;
//        ret = ret + a * pow(10, i++);
//    }
//    printf("%d\n", ret);
//    return 0;
//}

//争夺前五名
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
//    for (i = 0; i < n - 1; i++)
//    {
//        int tmp = 0;
//        int j = 0;
//        for (j = 0; j < n - 1 - i; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                tmp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//数字三角形
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int i = 0;
//    int j = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf("%d ", j + 1);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//正斜线形图案
#include <stdio.h>

int main() {
    int n = 0;
    int i = 0;
    int j = 0;
    while (scanf("%d", &n) == 1) 
    {
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n - i - 1; j++) 
            {
                printf(" ");
            }
            printf("*\n");
        }
    }

    return 0;
}