#define _CRT_SECURE_NO_WARNINGS 1

//空心正方形图案
//#include <stdio.h>
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) == 1)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//有序序列插入一个数
#include <stdio.h>
int main()
{
    int n = 0;
    int arr[51] = { 0 };
    int k = 0;
    scanf("%d", &n);
    int i = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    int j = 0;
    j = n - 1;
    for (; arr[j] > k; j--)
    {
        arr[j + 1] = arr[j];
    }
    arr[j + 1] = k;
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}