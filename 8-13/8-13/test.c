#define _CRT_SECURE_NO_WARNINGS 1

//1.���ͼ��
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

//�Ľ�
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

//2.���0��999֮������С�ˮ�ɻ������������
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

//�Ľ�
//#include<stdio.h>
//#include <math.h>
//
//int main()
//{
//	long long i = 0;
//	long long lift = 0;
//	long long right = 0;
//
//	printf("������������������С���������(�Կո�ֿ�):>");
//	scanf("%ld %ld", &lift, &right);
//
//	for(i=lift; i<=right; i++)
//	{
//		//�ж�i�Ƿ�Ϊˮ�ɻ���
//		//1. ��λ��
//		long long sum = 0;
//		int count = 0;
//		long long tmp = i;
//		while(tmp)
//		{
//			tmp/=10;
//			count++;
//		}
//		//2. ��η���
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp%10, count);
//			tmp /= 10;
//		}
//		//3. �ж�
//		if(sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//3. ��Sn = a + aa + aaa + aaaa + aaaaa��ǰ5��֮�ͣ�����a��һ������
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







