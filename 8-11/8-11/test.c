#define _CRT_SECURE_NO_WARNINGS 1
//1. 给定两个整形变量的值，将两个值的内容进行交换。
//#include<stdio.h>
//int main()
//{
//	int num1 = 6, num2 = 10;
//	int t;
//	t = num1;
//	num1 = num2;
//	num2 = t;
//	printf("%d %d ", num1, num2);
//	system("pause");
//	return 0;
//}
//
//
//2. 不允许创建临时变量，交换两个数的内容（附加题）
//#include<stdio.h>
//int main()
//{
//	int a,b;
//	scanf("%d %d", &a, &b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 15, b = 25;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	system("pause");
//	return 0;
//}
//
//3.求10 个整数中最大值。
//#include<stdio.h>
//int main()
//{
//	int arr[10];
//	int i, k, t;
//	for (i = 0; i <= 9; i++)
//	{
//		scanf("%d ", &arr[i]);
//	}
//    k = arr[0];
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[i] >= k) k = arr[i];
//	}
//	printf("最大值是：%d\n", k);
//	system("pause");
//	return 0;
//}

//4.将三个数按从大到小输出。
//#include<stdio.h>
//int main()
//{
//	int arr[3];
//	int i, k, t, j;
//	for (i = 0; i < 3; i++)
//		scanf("%d", &arr[i]);
//	for (i = 0; i < 3; i++)
//	{
//		k = i;
//		for (j = i + 1; j < 3; j++)
//		{
//			if (arr[j] > arr[k]) k = j;
//		}
//		if (k != i)
//		{
//			t = arr[i];
//			arr[i] = arr[k];
//			arr[k] = t;
//		}
//	}
//	for (i = 0; i < 3;i++)
//	printf("%d ", arr[i]);
//	system("pause");
//	return 0;
//}
//
//
//5.求两个数的最大公约数。
//#include <stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	while (a != b)
//	{
//		if (a > b)
//			a = a - b;
//		else
//			b = b - a;
//	}
//	printf("最大公约数为：%d\n", a);
//	system("pause");
//	return 0;
//}


//# include <stdio.h>
//int main()
//{
//	int a, b, c;
//	while (1)
//	{
//		scanf("%d%d", &a, &b);
//		c = a%b;
//		while (c != 0)
//		{
//			a = b;
//			b = c;
//			c = a%b;
//		}
//		printf("最大公约数为：%d\n", b);
//	}
//  reyurn 0;
//}
