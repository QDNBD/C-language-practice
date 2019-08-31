//#define _CRT_SECURE_NO_WARNINGS 1
//
//1.实现strcpy
//
//#include<stdio.h>
//#include<assert.h>
//
//void My_strcpy(char* a, char* b)
//{
//	assert(a != NULL);
//	while (*a != '\0')
//	{
//		*b++ = *a++;
//	}
//}
//
//int main()
//{
//	char a[20] = { 0 };
//	char b[20] = { 0 };
//	scanf("%s", a);
//	My_strcpy(a, b);
//	printf("b:%s\n", b);
//	return 0;
//}
//
//
//2.实现strcat
//
///*#include<stdio.h>
//#include<assert.h>
//
//void My_strcat(char* a, const char* b)
//{
//	assert(a != NULL&&b != NULL);
//	char *ret = a;
//	while (*ret)
//	{
//		ret++;
//	}
//	while ((*ret++ = *b++))
//	{
//		;
//	}
//	printf("%s\n", a);
//}
//
//int main()
//{
//	char arr1[10] = "abc";
//	char arr2[10] = "def";
//    My_strcat(arr1, arr2)*/;
//	return 0;
//}
//
//
//3.实现strstr
//#include<stdio.h>
//#include<assert.h>
//
//int My_strstr(const char* str1, const char* str2)
//{
//	assert(str1 != '\0');
//	assert(str2 != '\0');
//	char *start1 = str1;
//	char *start2 = str2;
//
//	while (*str1)
//	{
//		str1 = start1;
//
//		while ((*str1 == *str2) && *str1&&*str2)    
//		{
//			str1++;
//			str2++;
//		}
//		if (*(str2) == '\0')
//			return 1;
//		start1++;  
//		str2 = start2;
//	}
//	return 0;
//}
//
// int main()
//{
//	char arr1[] = "sddfs";
//	char arr2[] = "sddf";
//	int ret = My_strstr(arr1, arr2);
//	if (ret == 1)
//		printf("找到了\n");
//	else if (ret == 0)
//		printf("没找到\n");
//
//	return 0;
//}
//
//4.实现strchr
//#include<stdio.h>
//#include<assert.h>
//#include<stdlib.h> 
//
//void My_strchr( char* str, char in)
//{
//	assert(str != NULL&&in != NULL);
//	while (*str != '\0')
//	{
//		if (*str == in)
//		{
//			printf("找到了，%c\n", in);
//			break;
//		}
//		str++;
//	}
//	if (*str == '\0')
//	{
//		printf("找不到\n");
//	}
//}
//
//int main()
//{
//	char str[] = "qwertuyiopabcKJJFDHH";
//	char input = { 0 };
//	printf("请输入需要查找的字母:>");
//	scanf("%c", &input);
//	My_strchr(str, input);
//	return 0;
//}
//
//
//5.实现strcmp
//#include<stdio.h>
//#include<assert.h>
//
//void My_strcmp(const char* a, const char* b)
//{
//	assert(a != NULL&&b != NULL);
//	int num = 0;
//	while (!(num = *(unsigned char*)a - *(unsigned char*)b) && *b)
//	{
//		a++;
//		b++;
//	}
//	if (num > 0)
//	{
//		printf("1");
//	}
//	else if (num == 0)
//	{
//		printf("0");
//	}
//	else
//	{
//		printf("-1");
//	}
//}
//
//int main()
//{
//	char *arr1 = "sdds";
//	char *arr2 = "sddf";
//	My_strcmp(arr1, arr2);
//	return 0;
//}
//
//
//6.实现memcpy
//
//#include<stdio.h>
//#include<assert.h>
//#include<string.h>
//
//void * My_memcpy(void *dest, void *str, unsigned count)
//{
//	assert(dest != '\0' || str != '\0');
//	char* pdest = (char*)dest;
//	char* pstr = (char*)str;
//	while (count--)
//	{
//		*pdest++ = *pstr++;
//	}
//	return dest;
//}
//int main()
//{
//	char str[] = "hello";
//	char dest[] = "world";
//	My_memcpy(dest, str, strlen(str));
//	printf("%s", dest);
//	return 0;
//}
//
//
//7.实现memmove
//#include <stdio.h>
//
//void* memmove(void* dest, const void* str, size_t n)
//{
//	char* pdest = (char*)dest;
//	const char*  pstr = (const char*)str;
//
//	if (pstr>pdest)
//	{
//		while (n--)
//			*pdest++ = *pstr++;
//	}
//	else if (pstr<pdest)
//	{
//		pdest = pdest + n - 1;
//		pstr = pstr + n - 1;
//
//		while (n--)
//			*pdest-- = *pstr--;
//	}
//	return dest;
//}
//
//int main()
//{
//	char* str = "hello,world";
//	char dest[10] = { 0 };
//	char *q = (char*)memmove(dest, str, 5);
//	printf("%s\n", dest);
//	printf("%s\n", q);
//	return 0;
//}