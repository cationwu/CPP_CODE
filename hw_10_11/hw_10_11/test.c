#define _CRT_SECURE_NO_WARNINGS 1

//计算偏移量
//#include <stdio.h>
//#include <stddef.h>
//struct S 
//{
//	char a;
//	int b;
//	char c;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S, a));
//	printf("%d\n", offsetof(struct S, b));
//	printf("%d\n", offsetof(struct S, c));
//
//	return 0;
//}

//写一个宏，计算结构体中某变量相对于首地址的偏移
//#include <stdio.h>
//
//struct S
//{
//	char a;
//	int b;
//	char c;
//};
//
//#define OFFSETOF(struct_type,name)  (int)&(((struct_type*)0)->name)
//
//int main()
//{
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, b));
//	printf("%d\n", OFFSETOF(struct S, c));
//	return 0;
//}

//写一个宏，可以将一个整数的二进制位的奇数位和偶数位交换
#include <stdio.h>

#define CHANGE(n) (((n&0xaaaaaaaa)>>1)+((n&0x55555555)<<1))

int main()
{
	int a = 10;
	int ret = CHANGE(a);
	printf("%d\n", ret);
	return 0;
}