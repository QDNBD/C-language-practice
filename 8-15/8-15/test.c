#define _CRT_SECURE_NO_WARNINGS 1
//
//
//1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��������9�����9 * 9�ھ�������12�����12 * 12�ĳ˷��ھ���
//
//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int j = 0;
//
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d = %-3d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
//
//
//2.ʹ�ú���ʵ���������Ľ�����
//
//#include<stdio.h>
//
//void change(int x, int y)
//{
//	int t = 0;
//	t = x;
//  x = y;
//	y = t;
//	printf("%d %d", x, y);
//}
//
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//
//	scanf("%d %d", &input1, &input2);
//	printf("%d %d\n", input1, input2);
//	change(input1, input2);
//	return 0;
//}
//
//3.ʵ��һ�������ж�year�ǲ������ꡣ
//#include<stdio.h>
//
//int years(int num)
//{
//	if ((num % 4 == 0 && num % 100 != 0) || num % 400 == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = 0;
//
//	if (ret = years(num))
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//	
//	return 0;
//}
//
//4.����һ�����飬ʵ�ֺ���init������ʼ�����顢ʵ��empty����������顢ʵ��reverse���������������Ԫ�ص����á�Ҫ���Լ���ƺ����Ĳ���������ֵ��
//#include<stdio.h>
//#include <stdlib.h>
//
//void menu()
//{
//	printf("*******************************************\n");
//	printf("**************1����ʼ������****************\n");
//	printf("**************2���������******************\n");
//	printf("**************3������Ԫ�ص�����************\n");
//	printf("**************4���˳�����******************\n");
//	printf("*******************************************\n");
//}
//
//int init(int *arr)
//{
//	int i = 0;
//	int n = 0;
//	printf("�����������С:>");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return n;
//}
//
//void empty(int *arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		arr[i] = 0;
//	}
//	printf("�������\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("%d", arr[i]);
//	}
//
//}
//
//void reverse(int *arr, int n)
//{
//	int i = 0;
//	for (i = n-1; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int  main()
//{
//	int input = 0;
//	int k = 1;
//	int n = 0;
//	int arr[30] = { 0 };
//	menu();
//
//
//	while (k)
//	{
//		printf("�������Ӧ����:>\n");
//	    scanf("%d", &input);
//
//		switch (input)
//	    {
//		  case 1:n = init (arr);
//		          break;
//	      case 2:empty(arr,n);
//		          break;
//	      case 3:reverse(arr,n);
//		          break;
//		  case 4:k = 0;
//		          break;
//		  default:printf("����������������룺\n");
//	     }
//	}
//	
//
//	return 0;
//}
//
//
//
//5.ʵ��һ���������ж�һ�����ǲ�������
//#include<stdio.h>
//#include<math.h>
//
//int prime(int num)
//{
//	int  i = 0;
//	
//	if (2 > num)
//	{
//		return 0;
//	}
//
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num%i == 0)
//		{
//			return 0;
//		}
//	}
//
//	return 1;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = 0;
//	ret = prime(num);
//
//	if (ret)
//	{
//		printf("������\n");
//	}
//	else
//	{
//		printf("��������\n");
//	}
//
//	return 0;
//}

