#define _CRT_SECURE_NO_WARNINGS 1

1.ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB

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
	printf("��������Ҫ��ת�ַ��ĸ���:>");
	scanf("%d", &key);
	levo(str, se, key);
	printf("%s", str);
	return 0;
}

2.�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 = AABCD��s2 = BCDAA������1������s1 = abcd��s2 = ACBD������0.

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