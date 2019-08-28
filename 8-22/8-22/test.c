#define _CRT_SECURE_NO_WARNINGS 1


//1.调整数组使奇数全部都位于偶数前面。
//
//#include<stdio.h>
//#include<string.h>
//
//void Sort(int a[20], int len)
//{
//	int i = 0;
//	int left = 0;
//	int arr[20] = { 0 };
//	int right = len - 1;
//	while (left < len)
//	{
//		int temp = 0;
//		if (a[left] % 2 == 1)
//		{
//			arr[i] = a[left];
//			i++;
//		}
//		else if (a[left] % 2 == 0)
//		{
//			arr[right] = a[left];
//			right--;
//		}
//		left++;
//	}
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//
//int main()
//{
//  int a[20] = { 0 };
//	int i = 0;
//	int len = 0;
//	printf("请输入数组长度:>");
//	scanf("%d", &len);
//	printf("\n");
//	printf("请输入数字:>");
//	for (i = 0; i < len; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	Sort(a, len);
//	return 0;
//}


//2.杨氏矩阵 有一个二维数组.数组的每行从左到右是递增的，每列从上到下是递增的.在这样的数组中查找一个数字是否存在。时间复杂度小于O(N);


////#include <stdio.h>
////#include <stdlib.h>
////计算时间太长了
////int Search(int arr[3][3], int row, int col, int key)
////{
////	int left = 0;
////	int right = col - 1;
////	while ((left >= 0) && (right < col))
////	{
////		if (arr[left][right] < key)
////		{
////			left++;
////		}
////		else if (arr[left][right] > key)
////		{
////			right--;
////		}
////		else if (arr[left][right] == key)
////		{
////			return 1;
////		}
////	}
////	return 0;
////}
//
//int Search(int arr[3][3], int row, int col, int key)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			if (key == arr[i][j])
//			{
//				return 1;
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int key = 0;
//	printf("输入需要查找的数:>");
//	scanf("%d", &key);
//	int ret = Search(arr, 3, 3, key);
//	if (1 == ret)
//	{
//		printf("找到了！\n");
//	}
//	if (0 == ret)
//	{
//		printf("找不到!\n");
//	}
//
//	return 0;
//}
