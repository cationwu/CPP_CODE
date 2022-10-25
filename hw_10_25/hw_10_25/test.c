#define _CRT_SECURE_NO_WARNINGS 1

//数组nums包含从0到n的所有整数，但其中缺了一个。找出那个缺失的整数。在O(n)时间复杂度内完成。
//#include <stdio.h>
//
//int missingNumber(int* nums, int numsSize) {
//
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i <= numsSize; i++)
//    {
//        sum += i;
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        sum -= nums[i];
//    }
//    return sum;
//}
//
//int main()
//{
//    int arr[] = { 0,3,2 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int ret=missingNumber(arr,sz);
//    printf("%d\n", ret);
//    return 0;
//}

//旋转数组
// 
// 解法一：时间复杂度高
//#include <stdio.h>
//
//void rotate(int* nums, int numsSize, int k) 
//{
//    int i = 0;
//    k = k % numsSize;
//    while (k)
//    {
//        int tmp = nums[numsSize - 1];
//        for (i = numsSize - 2; i >= 0; i--)
//        {
//            nums[i + 1] = nums[i];
//        }
//        nums[0] = tmp;
//        k--;
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        printf("%d ", nums[i]);
//    }
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int k = 3;
//    rotate(arr, sz, k);
//    return 0;
//}

//解法二：创建新的数组

//#include <stdio.h>
//
//void rotate(int* nums, int numsSize, int k) 
//{
//    int i = 0;
//    int j = 0;
//    k = k % numsSize;
//    int arr[1000] = { 0 };
//    //把数据后面内容复制给新数组
//    for (i = numsSize - k; i < numsSize; i++)
//    {
//        arr[j] = nums[i];
//        j++;
//    }
//    //把数据前面内容复制给新数组
//    for (i = 0; i < numsSize - k; i++)
//    {
//        arr[j] = nums[i];
//        j++;
//    }
//    //把新数组内容复制给原数组
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = arr[i];
//    }
//}
//
//int main()
//{
//    int arr[] = { 1,2,3,4,5,6,7 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    int k = 3;
//    rotate(arr, sz, k);
//    int i = 0;
//    for (i = 0; i < sz; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//解法三：前n-k个逆置，后k个逆置，整体逆置

#include <stdio.h>

void reverse(int* a, int begin, int end)
{
    while (begin < end)
    {
        int tmp = a[begin];
        a[begin] = a[end];
        a[end] = tmp;
        begin++;
        end--;
    }
}


void rotate(int* nums, int numsSize, int k) 
{
    k %= numsSize;
    reverse(nums, 0, numsSize - k - 1);
    reverse(nums, numsSize - k ,numsSize-1);
    reverse(nums, 0, numsSize-1);

}

int main()
{
    int arr[] = { 1,2,3,4,5,6,7 };
    int sz = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    rotate(arr, sz, k);
    int i = 0;
    for (i = 0; i < sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}