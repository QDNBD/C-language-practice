#define _CRT_SECURE_NO_WARNINGS 1


//1.编写函数：unsigned int reverse_bit(unsigned int value);这个函数的返回值value的二进制位模式从左到右翻转后的值。
//#include<stdio.h>
//
//unsigned int reverse_bit(unsigned int value)
//{
//	int i = 0;
//	int sum = 0;
//	int bit = 1;
//
//	for (i = 0; i < 32; i++)
//	{
//		sum = sum << 1;
//		bit = value & 1;
//		sum = sum | bit;
//		value = value >> 1;
//	}
//	return sum;
//}
//
//int main()
//{
//	int input = 0;
//	scanf("%d", &input);
//	printf("%u", reverse_bit(input));
//	return 0;
//}
//
//
//2.不使用（a + b） / 2这种方式，求两个数的平均值。
//
//#include<stdio.h>
//
//void Sum_half(int a, int b)
//{
//	printf("%d", b + ((a - b) >> 1));
//}
//
//int main()
//{
//	int inpua = 0;
//	int inpub = 0;
//	scanf("%d %d", &inpua, &inpub);
//	Sum_half(inpua, inpub);
//	return 0;
//}
//
//3.编程实现：一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。请找出这个数字。（使用位运算）
//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[20] = { 0 };
//	int n = 0;
//	printf("一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。请输入这样数据的奇数个数:>");
//	scanf("%d", &n);
//	printf("\n");
//	printf("请按要求输入这样的数据:>");
//	printf("\n");
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < n; i++)
//	{
//		arr[0] = arr[0] ^ arr[i];
//	}
//	printf("%d", arr[0]);
//	return 0;
//}


//4.有一个字符数组的内容为:"student a am i",请你将数组的内容改为"i am a student".
//要求：不能使用库函数。只能开辟有限个空间（空间个数和字符串的长度无关）。
//#include<stdio.h>
//#include<assert.h>
//
//int My_strlen(const char* len)
//{
//	int count = 0;
//	assert(len);
//	while (len != '\0')
//	{
//		len++;
//		count++;
//	}
//	return count;
//}
//
//void reverse(char arr[], int left, int right)
//{
//	while (left < right)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right++;
//	}
//}
//
//char reverse_string(char* arr[])
//{
//	int i = 0;
//	int left = 0;
//	int right = My_strlen(arr) - 1;
//	reverse(arr, left, right);
//	while (*arr[i])
//	{
//		left = i;
//		while ((arr[i] != '\0' && (arr[i] != ' ')))
//		{
//			i++;
//		}
//		right = i - 1;
//		reverse(arr, left, right);
//		if (arr[i] != '\0')
//		{
//			i++;
//		}
//	}
//	return arr;
//}
//
//int main()
//{
//	char arr[] = "student a am i";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}



//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char *str)
//{
//	int count = 0;
//	assert(str);
//	while (*str != '\0')
//	{
//
//		count++;
//		str++;
//	}
//	return count;
//
//
//}
//void reverse(char a[], int left, int right)
//{
//	while (left<right)
//	{
//		char tmp = a[left];
//		a[left] = a[right];
//		a[right] = tmp;
//		left++;
//		right--;
//	}
//
//}
//char* reverse_string(char a[])
//{
//	int i = 0;
//	int left = 0;
//	int right = my_strlen(a) - 1;//逆序整个字符串
//	reverse(a, left, right);
//	//逆序逐个单词
//	while (a[i] != '\0')
//	{
//		left = i;
//		while ((a[i] != '\0') && (a[i] != ' '))
//		{
//			i++;
//
//		}
//		right = i - 1;
//		reverse(a, left, right);
//		if (a[i] != '\0')
//			i++;
//	}
//	return a;
//}
//
//int main()
//{
//	char a[] = "student a am i";
//	reverse_string(a);
//	printf("%s\n", a);
//	return 0;
//}
