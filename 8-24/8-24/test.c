//#define _CRT_SECURE_NO_WARNINGS 1
//
////1.һ��������ֻ�����������ǳ���һ�Σ�
////�����������ֶ����������Ρ�
////�ҳ����������֣����ʵ�֡�
//
//
//#include<stdio.h>
//
//void Seach(int arr[20], int se)
//{
//	int i = 0;
//	int j = 0;
//	int k = 0;
//	for (i = 0; i < se; i++)
//	{
//		k = 0;
//		for (j = 0; j < se; j++)
//		{
//			if (arr[j] == arr[i])
//			{
//				k++;
//			}
//		}
//		if (k == 1)
//		{
//			printf("%d  ", arr[i]);
//		}
//	}
//}
//
//int main()
//{
//	int arr[20] = { 3, 3, 2, 4, 5, 5, 6, 7, 6, 7 };
//	int se = sizeof(arr) / sizeof(arr[0]);
//    Seach(arr, se);
//	return 0;
//}
//
//
//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
//���ʵ�֡�
//
//
//#include<stdio.h>
//
//void Num(int n)
//{
//	int i = 1;
//	int s = 0;
//	int sum = n;
//	while (i != 0)
//	{
//		i = n / 2;
//		s = n % 2;
//		n = i + s;
//		sum =sum + i;
//	}
//	printf("%d", sum);
//}
//
//int main()
//{
//    Num(20);
//	return 0;
//}
//
//
//3.ģ��ʵ��strcpy
//
//#include<stdio.h>
//#include<assert.h>
//
//char * my_strcpy(char *dest, const char *src)
//{
//	assert(dest != NULL);
//	assert(src != NULL);
//	char *ret = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char a[10] = { 0 };
//	char *q = "bcd";
//	printf("%s\n", my_strcpy(a, q));
//	return 0;
//}
//
//
//
//
//4.ģ��ʵ��strcat
//
//#include <stdio.h>  
//#include<assert.h>  
//
//char* my_strcat(char* dest, char* src)
//{
//	char *cp = dest;
//	assert(src && dest);
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return cp;
//}
//
//int main()
//{
//	char str[32] = "abcd";
//	char buf[32] = "efgh";
//	printf("%s\n", my_strcat(str, buf));
//	return 0;
//}