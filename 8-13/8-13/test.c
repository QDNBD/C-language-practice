#define _CRT_SECURE_NO_WARNINGS 1

//1.输出图案
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 1;
//	int k = 0;
//
//	for (i = 1; i < 8; i++)
//	{
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (k = 6; k>0; k--)
//	{
//		for (j = 2 * k - 1; j>0; j--)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//改进
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int line = 0;
//
//	scanf("%d", &line);
//	for (i = 1; i <= line; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= line - i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1; j <= 2 * i - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	for (i = 1; i <= line - 1; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 1;j <= 2*(line-i)-1;  j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}

//2.求出0～999之间的所有“水仙花数”并输出。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//
//	for (i = 100; i < 1000; i++)
//	{
//		num1 = i / 100;
//		num2 = i / 10 % 10;
//		num3 = i % 10;
//		if (i == num1*num1*num1 + num2*num2*num2 + num3*num3*num3)
//		{
//			printf("%d ", i);
//		}
//	}
//
//	return 0;
//}

//改进
//#include<stdio.h>
//#include <math.h>
//
//int main()
//{
//	long long i = 0;
//	long long lift = 0;
//	long long right = 0;
//
//	printf("请输入操作数区间的最小数及最大数(以空格分开):>");
//	scanf("%ld %ld", &lift, &right);
//
//	for(i=lift; i<=right; i++)
//	{
//		//判断i是否为水仙花数
//		//1. 求位数
//		long long sum = 0;
//		int count = 0;
//		long long tmp = i;
//		while(tmp)
//		{
//			tmp/=10;
//			count++;
//		}
//		//2. 求次方和
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		//3. 判断
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//3. 求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int a = 1;
//	int i = 0;
//	scanf("%d", &a);
//	int k = a;
//	int sum = k;
//
//	for (i = 1; i <= 4; i++)
//	{
//		a = a*pow(10, 1) + k;
//		sum += a;
//	}
//
//	printf("%d", sum);
//	return 0;
//}







