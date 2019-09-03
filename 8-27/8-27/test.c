//#define _CRT_SECURE_NO_WARNINGS 1
//
//1.模拟实现strncpy
//#include<stdio.h>
//#include<assert.h>
//
//
//void My_strncpy(char* dest, const char* src, int se)
//{
//	assert(dest);
//	assert(src);
//	char* scy = dest;
//	while (se--)
//	{
//		*dest++ = *src++;
//	}
//	printf("%s\n", scy);
//}
//
//int main()
//{
//	char dest[] = "wyudgyudg";
//	char src[] = "23231232";
//	My_strncpy(dest, src, sizeof(src)+1);
//	return 0;
//}
//

//2.模拟实现strncat
//#include<stdio.h>
//#include<assert.h>
//
//void My_strncat(char* dest,const char* src, int size_t)
//{
//	assert(dest);
//	assert(src);
//	char* scy = dest;
//	int i = 0;
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	for (; i < size_t; i++)
//	{
//		*dest = *src++;
//		dest++;
//	}
//	printf("%s\n", scy);
//}
//
//int main()
//{
//	char dest[20] = "haha,";
//	char src[] = "bite!";
//	My_strncat(dest, src, sizeof(src));
//	return 0;
//}

//
//3.模拟实现strncmp
//
//#include<stdio.h>
//#include<assert.h>
//
//int  My_strncmp(const char* dest, const char* src, int size_t)
//{
//	assert(dest);
//	assert(src);
//	char *pdest = dest;
//	char *psrc = src;
//	while (*pdest != '\0'&& *psrc != '\0' && size_t--)
//	{
//		if (*pdest == *psrc)
//		{
//			pdest++;
//			psrc++;
//		}
//		else if (*pdest > *psrc)
//		{
//			return 1;
//		}
//		else
//		{
//			return -1;
//		}
//	}
//	
//	if (*pdest != '\0')
//	{
//		return 1;
//	}
//	if (*psrc != '\0')
//	{
//		return -1;
//	}
//
//}
//
//int main()
//{
//	char dest[] = "bitee";
//	char src[] = "bitec";
//	printf("%d\n", My_strncmp(dest, src, sizeof(src)));
//	return 0;
//}
//
