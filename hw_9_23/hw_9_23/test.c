#define _CRT_SECURE_NO_WARNINGS 1

//找单一的数字
//#include<stdio.h>
//
//int find_1(int a[9])
//{
//    int arr[9] = { 0 };
//    int i = 0;
//    for (i = 0; i < 9; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 9; j++)
//        {
//            if (a[i] == a[j])
//            {
//                arr[i]++;
//            }
//        }
//    }
//    for (i = 0; i < 9; i++)
//    {
//        if (arr[i] == 1)
//            return a[i];
//    }
//}
//
//int main()
//{
//    int a[9] = { 0,1,0,2,1,2,3,4,3 };
//    int ret =find_1(a);
//    printf("%d\n", ret);
//    return 0;
//}

//模拟实现strncpy

//#include <stdio.h>
//#include <assert.h>
//char* my_strncpy(char* dest, const char* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	char* p = dest;
//	while (num--)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*(dest + 1) = '\0';
//	return p;
//}
//
//int main()
//{
//	char ch1[10] = "abcedf";
//	char ch2[10] = { 0 };
//	my_strncpy(ch2, ch1, 4);
//	printf("%s\n", ch2);
//	return 0;
//}


//模拟实现strncat

//#include <stdio.h>
//#include <assert.h>
//
//char* my_strncat(char* dest, const char* src, size_t num)
//{
//	assert(dest);
//	assert(src);
//	char* ret = dest;
//	while (*dest)
//	{
//		dest++;
//	}
//	while (num--)
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*(dest + 1) = '\0';
//	return ret;
//}
//
//int main()
//{
//	char ch1[20] = "abcdef";
//	char ch2[20] = "ghijkl";
//	my_strncat(ch2, ch1, 3);
//	printf("%s\n", ch2);
//	return 0;
//}

//模拟实现atoi

#include <stdio.h>

int my_atoi(const char* str)
{
	int n = 0;
	while (*str)
	{
		n = n * 10 + (*str - '0');
		str++;
	}
	return n;
}

int main()
{
	char ch[100] = "12345";
	int ret = my_atoi(ch);
	printf("%d\n", ret);
	return 0;
}