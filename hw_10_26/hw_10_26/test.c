#define _CRT_SECURE_NO_WARNINGS 1

//ԭ���Ƴ����������е�Ԫ��val��Ҫ��ʱ�临�Ӷ�ΪO(N)���ռ临�Ӷ�ΪO(1)
// ���˼·
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


//�Ż����˼·
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