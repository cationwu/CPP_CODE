#define _CRT_SECURE_NO_WARNINGS 1

//qsort使用练习
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
// 
//
//int cmp(const void* e1, const void* e2)
//{
//	return ((*(int*)e1) - (*(int*)e2));
//}
//
//void print(int a[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int cmp_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
//}
//
//int main()
//{
//	int a[10] = { 2,3,4,1,5,7,8,9,0,6 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	struct stu s[] = { {"zhangsan",20},{"lisi",30},{"wangwu",25} };
//	int sz2 = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz2, sizeof(s[0]), cmp_name);
//	int i = 0;
//	for (i = 0; i < sz2; i++)
//	{
//		printf("%s %d\n", s[i].name, s[i].age);
//	}
//	qsort(a, sz, sizeof(a[0]), cmp);
//	print(a, sz);
//	return 0;
//}

//模仿qsort的功能实现一个通用的冒泡排序

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int a[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void swap(char* buf1,char* buf2,int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		int tmp = 0;
		tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}

void bubble_sort(void* base, int num, int size,int (*cmp)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < num - 1; i++)
	{
		int j = 0;
		for (j = 0; j < num - 1 - i; j++)
		{
			if (cmp((char*)base + j * size, (char*)base + (j + 1) * size)>0)
			{
				swap((char*)base + j * size, (char*)base + (j + 1) * size, size);
			}
		}
	}
}

int cmp(const void* e1,const void* e2)
{
	return (*(int*)e1 - *(int*)e2);
}

int main()
{
	int arr[10] = { 2,3,4,1,5,7,8,9,0,6 };
	int sz=sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp);
	print(arr, sz);
	return 0;
}