#define _CRT_SECURE_NO_WARNINGS 1

//原地移除数组中所有的元素val，要求时间复杂度为O(N)，空间复杂度为O(1)
// 最初思路
//#include <stdio.h>
//
//int removeElement(int* nums, int numsSize, int val)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (nums[i] != val)
//        {
//            nums[j] = nums[i];
//            j++;
//        }
//    }
//    return j;
//}
//
//int main()
//{
//    int arr[] = { 0,1,2,2,3,0,4,2 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int n = 2;
//    int i = 0;
//    int j=removeElement(arr, sz, n);
//    for (i = 0; i < j; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    printf("\n%d\n", j);
//	return 0;
//}


//优化后的思路
#include <stdio.h>

int removeElement(int* nums, int numsSize, int val)
{
    int dst = 0;
    int src = 0;
    while(src<numsSize)
    {
        if (nums[src] == val)
        {
            src++;
        }
        else
        {
            nums[dst] = nums[src];
            src++;
            dst++;
        }
    }
    return dst;
}

int main()
{
    int arr[] = { 0,1,2,2,3,0,4,2 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int n = 2;
    int i = 0;
    int j = removeElement(arr, sz, n);
    for (i = 0; i < j; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n%d\n", j);
    return 0;
}