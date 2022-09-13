#define _CRT_SECURE_NO_WARNINGS 1

//模拟实现memcpy
//#include <stdio.h>
//
//void* my_memcpy(void* str1,const void* str2,size_t num)
//{
//	void* ret = str1;
//	while (num--)
//	{
//		*(char*)str1 = *(char*)str2;
//		str1 = (char*)str1 + 1;
//		str2 = (char*)str2 + 1;
//	}
//	return ret;
//}
//
//int main()
//{
//	int arr1[10] = {0};
//	int arr2[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	my_memcpy(arr1, arr2, 20);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

//模拟实现memmove

#include <stdio.h>

void* my_memmove(void* str1, const void* str2, size_t num)
{
	if (str1 > str2)
	{
		while (num--)
		{
			*((char*)str1 + num) = *((char*)str2 + num);
		}
	}
	else
	{
		while (num--)
		{
			*(char*)str1 = *(char*)str2;
			str1 = (char*)str1 + 1;
			str2 = (char*)str2 + 1;
		}
	}
}

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	my_memmove(arr+3, arr, 20);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}