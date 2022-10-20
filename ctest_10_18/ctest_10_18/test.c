#define _CRT_SECURE_NO_WARNINGS 1

//给你一个N，你想让其变为一个Fibonacci数，每一步你可以把当前数字X变为X-1或者X+1，现在给你一个数N求最少需要多少步可以变为Fibonacci数。

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

//请实现一个函数，将一个字符串中的每个空格替换成“%20”。例如，当字符串为We Are Happy.则经过替换之后的字符串为We%20Are%20Happy。

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