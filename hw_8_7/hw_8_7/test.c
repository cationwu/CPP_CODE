#define _CRT_SECURE_NO_WARNINGS 1

//����С������
//1. m��n����С��������ҲҪ >= m��n�Ľϴ�ֵ
//18 24
//���m��n�Ľϴ�ֵ��k
//���ϵ�++����һ��k��ͬʱ����m��n
//k������С������
//2. �����m��n�����Լ����շת�������k
//��С������ = m*n/k
//3.k/a=i
//	k/b=j
//	a*i%b==0
//��2
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
//��3
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

//��һ�仰�ĵ��ʽ��е��ã���㲻���á����� "I like beijing."������������Ϊ��"beijing. like I"
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