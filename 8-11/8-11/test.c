#define _CRT_SECURE_NO_WARNINGS 1
//1. �����������α�����ֵ��������ֵ�����ݽ��н�����
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
//2. ����������ʱ���������������������ݣ������⣩
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
//3.��10 �����������ֵ��
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
//	printf("���ֵ�ǣ�%d\n", k);
//	system("pause");
//	return 0;
//}

//4.�����������Ӵ�С�����
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
//5.�������������Լ����
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
//	printf("���Լ��Ϊ��%d\n", a);
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
//		printf("���Լ��Ϊ��%d\n", b);
//	}
//  reyurn 0;
//}
