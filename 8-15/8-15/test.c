#define _CRT_SECURE_NO_WARNINGS 1
//
//
//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，输入9，输出9 * 9口诀表，输入12，输出12 * 12的乘法口诀表。
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
//2.使用函数实现两个数的交换。
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
//3.实现一个函数判断year是不是润年。
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
//		printf("是闰年\n");
//	}
//	else
//	{
//		printf("不是闰年\n");
//	}
//	
//	return 0;
//}
//
//4.创建一个数组，实现函数init（）初始化数组、实现empty（）清空数组、实现reverse（）函数完成数组元素的逆置。要求：自己设计函数的参数，返回值。
//#include<stdio.h>
//#include <stdlib.h>
//
//void menu()
//{
//	printf("*******************************************\n");
//	printf("**************1、初始化数组****************\n");
//	printf("**************2、清空数组******************\n");
//	printf("**************3、数组元素的逆置************\n");
//	printf("**************4、退出程序******************\n");
//	printf("*******************************************\n");
//}
//
//int init(int *arr)
//{
//	int i = 0;
//	int n = 0;
//	printf("请输入数组大小:>");
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
//	printf("清空数组\n");
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
//		printf("请输入对应数字:>\n");
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
//		  default:printf("输入错误，请重新输入：\n");
//	     }
//	}
//	
//
//	return 0;
//}
//
//
//
//5.实现一个函数，判断一个数是不是素数
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
//		printf("是素数\n");
//	}
//	else
//	{
//		printf("不是素数\n");
//	}
//
//	return 0;
//}

