#define _CRT_SECURE_NO_WARNINGS 1


//1.��ѡ������ṹ--��С����

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
    //��ѡ���㷨
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





//2.ð������

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
//	//ð���㷨
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


//3.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1���۰���ң�
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
//	printf("������1-10֮����Ҫ���ҵ�����\n");
//	scanf("%d", &input);
//	int ret = binary(arr, input, len);
//
//	if (ret >= 0)
//	{
//		printf("�ҵ��ˣ��±�Ϊ��%d\n", ret);
//	}
//	else
//	{
//		printf("û�ҵ�.\n");
//	}
//
//	return 0;
//}
