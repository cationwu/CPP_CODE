#define _CRT_SECURE_NO_WARNINGS 1

//����һ��N�����������Ϊһ��Fibonacci����ÿһ������԰ѵ�ǰ����X��ΪX-1����X+1�����ڸ���һ����N��������Ҫ���ٲ����Ա�ΪFibonacci����

//#include <stdio.h>
//#include <math.h>
//
//int Fib(int N)
//{
//    int a = 0;
//    int b = 1;
//    int c = 1;
//    if (N == b)
//    {
//        return 0;
//    }
//    while (N > b)
//    {
//        a = b;
//        b = c;
//        c = a + b;
//    }
//    if ((N - a) < (b - N))
//    {
//        return (N - a);
//    }
//    else
//    {
//        return (b - N);
//    }
//}
//
//
//int main()
//{
//    int N = 0;
//    scanf("%d", &N);
//    int ret = Fib(N);
//    printf("%d\n", ret);
//}

//��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20�������磬���ַ���ΪWe Are Happy.�򾭹��滻֮����ַ���ΪWe%20Are%20Happy��

#include <stdio.h>
#include <string.h>

void replaceSpace(char* str, int length) 
{
    int i = 0;
    int count = 0;
    for (i = 0; i < length; i++)
    {
        if (str[i] == ' ')
            count++;
    }
    for (i = length - 1; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str[i + count * 2] = '0';
            str[i + count * 2 - 1] = '2';
            str[i + count * 2 - 2] = '%';
            count--;
        }
        else
        {
            str[i + count * 2] = str[i];
        }
    }
}

int main()
{
    char ch[20] = "We Are Happy";
    int len = strlen(ch);
    replaceSpace(ch, len);
    printf("%s", ch);
    return 0;
}