#define _CRT_SECURE_NO_WARNINGS 1

//5��6\8D
//������A�е����ݺ�����B�е����ݽ��н�����
//#include <stdio.h>
//
//void swap(int A[], int B[])
//{
//	int C[3] = { 0 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		C[i] = A[i];
//		A[i] = B[i];
//		B[i] = C[i];
//	}
//}
//
//int main()
//{
//	int a = 0;
//	int A[3] = { 1,2,3 };
//	int B[3] = { 4,5,6 };
//	swap(A, B);
//	for (a = 0; a < 3; a++)
//	{
//		printf("%d ", A[a]);
//	}
//	printf("\n");
//	for (a = 0; a < 3; a++)
//	{
//		printf("%d ", B[a]);
//	}
//	return 0;
//}

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�

//#include <stdio.h>
//
//void init(int arr[])
//{
//	int a[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = a[i];
//	}
//}
//
//void print(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//void reverse(int arr[],int sz)
//{
//	int left = 0;
//	int right = sz-1;
//	int b = 0;
//	while (left < right)
//	{
//		b = arr[left];
//		arr[left] = arr[right];
//		arr[right] = b;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//init(arr);
//	//for (i = 0; i < 10; i++)
//	//{
//	//	printf("%d ", arr[i]);
//	//}
//	//print(arr);
//	reverse(arr,sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
// }

//ʵ��һ�������������ð������

//#include <stdio.h>
//
//void bubble(int arr[],int sz)
//{
//	int i = 0;
//	while (sz >= 2)
//	{
//		for (i = 0; i < sz - 1; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i + 1];
//				arr[i + 1] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//		sz--;
//	}
//}
//
//int main()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	bubble(arr,sz);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//����NxM���󣬾���Ԫ�ؾ�Ϊ�������������д������Ԫ��֮�͡�
//#include <stdio.h>
//
//int main()
//{
//    int arr[10][10] = { 0 };
//    int N = 0;
//    int M = 0;
//    int i = 0;
//    int j = 0;
//    int sum = 0;
//    scanf("%d %d", &N, &M);
//    for (i = 0; i < N; i++)
//    {
//        for (j = 0; j < M; j++)
//        {
//            scanf("%d", &arr[i][j]);   //������%d��ӿո�дscanf("%d ")ʱϵͳ��Ĭ��δ������
//            if (arr[i][j] > 0)
//            {
//                sum = sum + arr[i][j];
//            }
//        }
//    }
//    printf("%d", sum);
//
//    return 0;
//}

//����ת��
#include <stdio.h>

int main()
{
    int arr[10][10] = { 0 };
    int arr_reverse[10][10] = { 0 };
    int n = 0;
    int m = 0;
    int i = 0;
    int j = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            arr_reverse[i][j] = arr[j][i];
            printf("%d ", arr_reverse[i][j]);
        }
        printf("\n");
    }
    return 0;
}