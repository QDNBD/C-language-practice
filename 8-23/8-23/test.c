#define _CRT_SECURE_NO_WARNINGS 1

1.实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<Assert.h>

void levo(char *pstr, int SZ, int key)
{
	assert(pstr != NULL);
	int i = 0;
	int j = 0;
	for (i = 0; i < key; i++)
	{
		char tmp = pstr[0];
		for (j = 0; j < SZ - 1; j++)
		{
			pstr[j] = pstr[j + 1];
		}
		pstr[SZ - 1] = tmp;
	}
}

int main()
{
	char str[] = "ABCD";
	int key = 0;
	int se = sizeof(str) / sizeof(str[0]) - 1;
	printf("请输入你要旋转字符的个数:>");
	scanf("%d", &key);
	levo(str, se, key);
	printf("%s", str);
	return 0;
}

2.判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 = AABCD和s2 = BCDAA，返回1，给定s1 = abcd和s2 = ACBD，返回0.

#include <stdio.h>
#include<stdlib.h>
#include <string.h>

int find(char* a, char* b)
{
	char*tmp = (char*)calloc(strlen(a) * 2 + 1, sizeof(char));
	if (tmp == NULL) 
	{
		return 1;
	}
	strcpy(tmp, a);
	strcat(tmp, a);
	if (strstr(tmp, b))
	{
		return 1;
	}
	free(tmp);
	return 0;
}

int main()
{
	char a[] = "AABCD";
	char b[] = "BCDAA";
	if (find(a, b)) {
		printf("found!\n");
	}
	else {
		printf("no found!\n");
	}

	return 0;
}