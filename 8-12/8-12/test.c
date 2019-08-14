#define _CRT_SECURE_NO_WARNINGS 1


//简单选择排序结构--从小到大

//#include<stdio.h>
//#define N 10
//
//int main()
//{
//	int t, i, j, k, n, m;
//	int a[N];
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	scanf("%d", &a[i]);
//	
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (a[j] < a[k])
//				k = j;
//		}
//		if (k != i)
//		{
//			t = a[i];
//			a[i] = a[k];
//			a[k] = t;
//		}
//	}
//
//	for (m = 0; m < n; m++)
//	{
//		printf("%d ", a[m]);
//	}
//
//	return 0;
//}

//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//#include<stdio.h>
//int main()
//{
//	int i = 0, j = 0, arr1[5], arr2[5], arr3[5] = { 0 };
//	printf("请输入5个整数\n");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &arr1[i]);
//	printf("请输入5个整数\n");
//	for (i = 0; i < 5; i++)
//		scanf("%d", &arr2[i]);
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr1[%d] = %d ", i,arr1[i]);
//		
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr2[%d] = %d ", i, arr2[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		arr3[i] = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = arr3[i];
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr1[%d] = %d ", i,arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("arr2[%d] = %d ", i, arr2[i]);
//	}
//	printf("\n");
//	return 0;
//}

//2. 计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值。
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double sum = 0, j = 1.0;
//	for (i = 1; i < 101; i++)
//	{
//		sum = sum + (j / i);
//		j = -j;
//	}
//	printf("sum = %f\n", sum);
//	return 0;
//}

//3. 编写程序数一下 1到 100 的所有整数中出现多少次数字9。
//#include<stdio.h>
//int main()
//{
//	int i = 0, sum = 0, k = 0;
//	for (i = 9; i < 100; i++)
//	{
//		if ((i % 10) == 9)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//	    if(i/ 10 == 9)
//		{
//			printf("%d ", i);
//			sum++;
//		}
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}