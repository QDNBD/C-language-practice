#define _CRT_SECURE_NO_WARNINGS 1


//1.简单选择排序结构--从小到大

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
    //简单选择算法
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





//2.冒泡排序

//#include<stdio.h>
//int main()
//{
//	int i, j, k, n, a[50], t;
//	int flag = 0;
//	scanf("%d", &n);
//
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//
//	//冒泡算法
//	for (i = 0; i < n - 1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (a[j] > a[j + 1])
//			{
//				t = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = t;
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		printf("%d ", a[i]);
//	}
//
//	return 0;
//}


//3.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1（折半查找）
//#include<stdio.h>
//
//
//int binary(int arr[], int k, int len)
//{
//	int left = 0;
//	int right = len;
//
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid]< k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//
//	return -1;
//}
//
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int len = sizeof(arr) / sizeof(arr[0]) - 1;
//	int input = 0;
//
//	printf("请输入1-10之间需要查找的整数\n");
//	scanf("%d", &input);
//	int ret = binary(arr, input, len);
//
//	if (ret >= 0)
//	{
//		printf("找到了，下标为：%d\n", ret);
//	}
//	else
//	{
//		printf("没找到.\n");
//	}
//
//	return 0;
//}
