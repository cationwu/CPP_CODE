#define _CRT_SECURE_NO_WARNINGS 1

//有序序列合并
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arrn[1000] = { 0 };
//    int arrm[1000] = { 0 };
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arrn[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arrm[i]);
//    }
//    int arr[2000] = { 0 };
//    i = 0;
//    int j = 0;
//    while (i < n && j < m)
//    {
//        if (arrn[i] < arrm[j])
//        {
//            printf("%d ", arrn[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arrm[j]);
//            j++;
//        }
//    }
//    if (i == n & j < m)
//    {
//        for (j; j < m; j++)
//            printf("%d ", arrm[j]);
//    }
//    else
//    {
//        for (i; i < n; i++)
//            printf("%d ", arrn[i]);
//    }
//
//    return 0;
//}

//X形图案
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 1; i <= n; i++)
//        {
//            for (j = 1; j <= n; j++)
//            {
//                if (i == j)
//                    printf("*");
//                else if (j == n - i + 1)
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//箭形图案
#include <stdio.h>
int main()
{
    int n = 0;
    while (scanf("%d", &n) == 1)
    {
        int i = 0;
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < 2 * (n - i); j++)
                printf(" ");
            for (j = 0; j < i + 1; j++)
                printf("*");
        }
        for (i = 0; i < i + 1; i++)
            printf("*");
        for (i = 0; i < n; i++)
        {
            int j = 0;
            for (j = 0; j < 2 * (i + 1); j++)
                printf(" ");
            for (j = 0; j < n + 1 - i; j++)
                printf("*");
        }
    }
    return 0;
}