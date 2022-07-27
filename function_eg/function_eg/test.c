#define _CRT_SECURE_NO_WARNINGS 1

//Hanoi汉诺塔问题

//#include <stdio.h>
//
//void move(char x, char y)
//{
//	printf("从%c移到%c\n", x, y);
//}
//
//void hanoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//		move(a, c);
//	else
//	{
//		hanoi(n - 1, a, c, b);
//		move(a, c);
//		hanoi(n - 1, b, a, c);
//	}
//}
//
//int main()
//{
//	int m=0;
//	char a = 'A';
//	char b = 'B';
//	char c = 'C';
//	printf("请输入总数:");
//	scanf("%d", &m);
//	printf("移动步骤为:\n");
//	hanoi(m, a, b, c);
//	return 0;
//}

//青蛙跳台阶问题

#include <stdio.h>

int Fn(int n) 
{
    if (n <= 2) 
    {
        return n;
    }
    else if (n > 2) 
    {
        return Fn(n - 1) + Fn(n - 2);
    }
}
int main() 
{
    int n = 0;
    printf("请输入台阶数：");
    scanf("%d", &n);
    printf("共有%d种跳法\n", Fn(n));
    return 0;
}






