#define _CRT_SECURE_NO_WARNINGS 1

//ģ��ʵ��strlen
//#include <stdio.h>
//
//size_t my_strlen(const char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	char ch[10] = "abcdef";
//	int ret =my_strlen(ch);
//	printf("%d\n", ret);
//	return 0;
//}

//ģ��ʵ��strcpy
//#include <stdio.h>
//
//char* my_strcpy(char* str1, const char* str2)
//{
//	char* ret = str1;
//	while (*str1++=*str2++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char ch1[10] = { 0 };
//	char ch2[10] = "abcdef";
//	my_strcpy(ch1, ch2);
//	printf("%s\n", ch1);
//	return 0;
//}

//ģ��ʵ��strcmp
//#include <stdio.h>
//int my_strcmp(const char* str1, const char* str2)
//{
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;
//		}
//		str1++;
//		str2++;
//	}
//	return *str1 - *str2;
//}
//
//int main()
//{
//	char ch1[10] = "abcdef";
//	char ch2[10] = "aba";
//	int ret = my_strcmp(ch1, ch2);
//	printf("%d\n", ret);
//	return 0;
//}

//ģ��ʵ��strcat
//#include <stdio.h>
//
//char* my_strcat(char* str1,const char* str2)
//{
//	char* ret = str1;
//	while (*str1)
//	{
//		str1++;
//	}
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	*(str1 + 1) = '\0';
//	return ret;
//}
//
//int main()
//{
//	char ch1[20] = "abc";
//	char ch2[10] = "defg";
//	my_strcat(ch1, ch2);
//	printf("%s\n", ch1);
//	return 0;
//}

//ģ��ʵ��strstr

#include <stdio.h>

char* my_strstr(const char* str1, const char* str2)
{
	const char* s1 = str1;
	const char* s2 = str2;
	const char* p = str1;
	while (*p)
	{
		s1 = p;
		s2 = str2;
		while ((*s1 == *s2)&&(*s2)!='\0'&&(*s1)!='\0')
		{
			s1++;
			s2++;
		}
		if (*s2 == '\0')
		{
			return (char *)p;
		}
		p++;
	}
	return NULL;
}

int main()
{
	char ch1[10] = "abcdefg";
	char ch2[10] = "bcd";
	char* p = my_strstr(ch1, ch2);
	if (p == NULL)
	{
		printf("������\n");
	}
	else
	{
		printf("%s\n", p);
	}
	return 0;
}