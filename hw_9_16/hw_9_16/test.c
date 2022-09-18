#define _CRT_SECURE_NO_WARNINGS 1

//序列去重后按从小到大排序
//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[100000] = { 0 };
//    int i = 0;
//    int tmp = 0;
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i])
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}

//
#include <stdio.h>

int main() 
{
    int n = 0;
    while (scanf("%d", &n) == 1) 
    {
        int i = 0;
        int j = 0;
        int k = 0;
        for (i = 0; i < n; i++) 
        {
            for (j = 0; j < n - i - 1; j++) 
            {
                printf("  ");
            }
            for (k = 0; k <= i; k++) 
            {
                printf("* ");
            }
            printf("\n");
        }
    }

    return 0;
}