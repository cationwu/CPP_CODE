#define _CRT_SECURE_NO_WARNINGS 1


//删除排序数组中的重复项，空间复杂度为 O(1) 
// 第一次思路
//#include <stdio.h>
//
//int removeDuplicates(int* nums, int numsSize) {
//    int* ptr = nums;
//    int* end = nums;
//    int count = 1;
//    while (numsSize)
//    {
//        if (*end == *ptr)
//        {
//            ptr++;
//        }
//        else
//        {
//            end++;
//            *end = *ptr;
//            ptr++;
//            count++;
//        }
//        numsSize--;
//    }
//
//    return count;
//}
//
//int main()
//{
//    int arr[3] = { 1,1,2 };
//    int a=removeDuplicates(arr, 3);
//    printf("%d\n", a);
//}
//完善之后的思路

//#include <stdio.h>
//
//int removeDuplicates(int* nums, int numsSize) {
//    int src = 0;
//    int dst = 0;
//    while (src<numsSize)
//    {
//        if (nums[src] == nums[dst])
//        {
//            src++;
//        }
//        else
//        {
//            dst++;
//            nums[dst] = nums[src];
//            src++;
//        }
//    }
//
//    return (dst+1);
//}
//
//int main()
//{
//    int arr[3] = { 1,1,2 };
//    int a=removeDuplicates(arr, 3);
//    printf("%d\n", a);
//}



//合并两个有序数组
// 第一次思路
//#include <stdio.h>
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int* ptr1 = nums1;
//    int* ptr2 = nums2;
//    while (m > 0 && n > 0)
//    {
//        if (ptr2[n - 1] >= ptr1[m - 1])
//        {
//            ptr1[m + n - 1] = ptr2[n - 1];
//            n--;
//        }
//        else
//        {
//            ptr1[m + n - 1] = ptr1[m - 1];
//            m--;
//        }
//    }
//    while (n > 0)
//    {
//        ptr1[m + n - 1] = ptr2[n - 1];
//        n--;
//    }
//}
//
//int main()
//{
//    int arr1[6] = { 1,2,3,0,0,0 };
//    int arr2[3] = { 2,5,6 };
//    merge(arr1, 3,3,arr2, 3, 3);
//    int i = 0;
//    for (i = 0; i < 6; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}


//完善后的思路
//#include <stdio.h>
//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
//{
//    int i1 = m-1;
//    int i2 = n-1;
//    int j = m + n - 1;
//    while (i1 >= 0 && i2 >= 0)
//    {
//        if (nums1[i1] > nums2[i2])
//        {
//            nums1[j--] = nums1[i1--];
//        }
//        else
//        {
//            nums1[j--] = nums2[i2--];
//        }
//    }
//    while (i2 >= 0)
//    {
//        nums1[j--] = nums2[i2--];
//    }
//}
//
//int main()
//{
//    int arr1[6] = { 1,2,3,0,0,0 };
//    int arr2[3] = { 2,5,6 };
//    merge(arr1, 3,3,arr2, 3, 3);
//    int i = 0;
//    for (i = 0; i < 6; i++)
//    {
//        printf("%d ", arr1[i]);
//    }
//    return 0;
//}

