#define _CRT_SECURE_NO_WARNINGS 1

//求最小公倍数
//1. m和n的最小公倍数，也要 >= m和n的较大值
//18 24
//求出m和n的较大值，k
//不断的++，找一个k能同时整除m和n
//k就是最小公倍数
//2. 先求出m和n的最大公约数（辗转相除法）k
//最小公倍数 = m*n/k
//3.k/a=i
//	k/b=j
//	a*i%b==0
//法2
//#include <stdio.h>
//int main()
//{
//    long long a = 0;
//    long long b = 0;
//    scanf("%lld %lld", &a, &b);
//    long long A = a;
//    long long B = b;
//    long long tmp = 0;
//    while (b % a)
//    {
//        tmp = b;
//        b = a;
//        a = tmp % a;
//    }
//    printf("%lld\n", A * B / a);
//    return 0;
//}
//法3
//#include <stdio.h>
//int main()
//{
//    long long a = 0;
//    long long b = 0;
//    scanf("%lld %lld", &a, &b);
//    long long i = 1;
//    while ((a * i) % b)
//    {
//        i++;
//    }
//    printf("%lld\n", a * i);
//    return 0;
//}

//将一句话的单词进行倒置，标点不倒置。比如 "I like beijing."，经过处理后变为："beijing. like I"
#include <stdio.h>
#include <string.h>
void reverse(char* left, char* right)
{
    while (left < right)
    {
        char tmp = *right;
        *right = *left;
        *left = tmp;
        left++;
        right--;
    }
}
int main()
{
    char ch[101] = { 0 };
    gets(ch);
    char* cur = ch;
    while (*cur)
    {
        char* start = cur;
        char* end = cur;
        while (*end != ' ' && *end != '\0')
        {
            end++;
        }
        reverse(start, end - 1);
        if (end != '\0')
            cur = end + 1;
        else
            cur = end;
    }
    int len = strlen(ch);
    reverse(ch, ch + len - 1);
    printf("%s\n", ch);
    return 0;
}