#define _CRT_SECURE_NO_WARNINGS 1


//1.��д������unsigned int reverse_bit(unsigned int value);��������ķ���ֵvalue�Ķ�����λģʽ�����ҷ�ת���ֵ��
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
//2.��ʹ�ã�a + b�� / 2���ַ�ʽ������������ƽ��ֵ��
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
//3.���ʵ�֣�һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ����ҳ�������֡���ʹ��λ���㣩
//
//#include<stdio.h>
//
//int main()
//{
//	int i = 0;
//	int arr[20] = { 0 };
//	int n = 0;
//	printf("һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ��������������ݵ���������:>");
//	scanf("%d", &n);
//	printf("\n");
//	printf("�밴Ҫ����������������:>");
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


//4.��һ���ַ����������Ϊ:"student a am i",���㽫��������ݸ�Ϊ"i am a student".
//Ҫ�󣺲���ʹ�ÿ⺯����ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
//	int right = my_strlen(a) - 1;//���������ַ���
//	reverse(a, left, right);
//	//�����������
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
