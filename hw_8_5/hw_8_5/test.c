#define _CRT_SECURE_NO_WARNINGS 1

//��������ʹ����ȫ����λ��ż��ǰ�档
//#include <stdio.h>
//
//void reverse(int arr[10])
//{
//	int arr2[10] = { 0 };
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr2[i] = arr[i];
//		if (arr[i] % 2 == 1)
//		{
//			count++;
//		}
//	}
//	int count2 = count;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr2[i] % 2 == 1)
//		{
//			arr[count - 1] = arr2[i];
//			count--;
//		}
//		else
//		{
//			arr[count2] = arr2[i];
//			count2++;
//		}
//	}
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	reverse(arr);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strcpy
//#include <stdio.h>
//
//char* my_strcpy(char* dest,const char* src)
//{
//	//dest�����治��++���Լ�һ��ret����dest��ʼ��ַ����
//	char* ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char ch1[20] = { 0 };
//	char ch2[] = "hello";
//	my_strcpy(ch1, ch2);
//	printf("%s\n", ch1);
//	return 0;
//}

//ģ��ʵ�ֿ⺯��strlen
//#include <stdio.h>
//
//int my_strlen(char *arr)
//{
//	int len = 0;
//	while (*arr)
//	{
//		len++;
//		arr++;
//	}
//	return len;
//}
//
//int main()
//{
//	char arr[10] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//���������ж�
//#include <stdio.h>
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int arr[50] = { 0 };
//    int i = 0;
//    int count = 1;
//    int count2 = 1;
//    for (i = 0; i < N; i++)
//    {
//        scanf("%d", &arr[i]);
//        if (i >= 1 && (arr[i] >= arr[i - 1]))
//        {
//            count++;
//        }
//        else if (i >= 1 && (arr[i] <= arr[i - 1]))
//        {
//            count2++;
//        }
//    }
//    if (count == N || count2 == N)
//    {
//        printf("sorted\n");
//    }
//    else
//    {
//        printf("unsorted\n");
//    }
//
//    return 0;
//}

//��߷ֺ���ͷ�֮��

#include <stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int arr[10000] = { 0 };
    int i = 0;
    int low = 100;
    int high = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] > high)
            high = arr[i];
        if (arr[i] < low)
            low = arr[i];
    }
    printf("%d\n", high - low);
    return 0;
}