#define _CRT_SECURE_NO_WARNINGS 1


//1.дһ���������ز����������� 1 �ĸ���,���磺 15 0000 1111 4 �� 1

//#include<stdio.h>
//
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//
//	while (value)
//	{
//		value = value&(value - 1);
//		count++;
//	}
//
//	return count;
//}
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//	while (value)
//	{
//		if (value % 2 == 1)
//		{
//			count++;
//		}
//		value /= 2;
//	}
//	return count;
//}
////
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	scanf("%d", &input);
//  ret = count_one_bits(input);
//	printf("%d\n",ret);
//	return 0;
//}

//2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�

//#include<stdio.h>
//
//int main()
//{
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int n = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &n);
//
//	for (i = 0; i < 32; i += 2)
//	{
//		arr1[j] = ((n >> i) & 1);
//		j++;
//	}
//	for (i = 1, j = 0; i < 32; i += 2)
//	{
//		arr2[j] = ((n >> i) & 1);
//		j++;
//	}
//	printf("��������Ϊ:");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr1[i]);
//	}
//	printf("\n");
//	printf("ż������Ϊ:");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr2[i]);
//	}
//	printf("\n");
//
//	return 0;
//}
//

//3. ���һ��������ÿһλ��
//#include<stdio.h>

//void play(int x)
//{
//	if (x != 0)
//	{
//		printf("%d ", x % 10);
//		play(x / 10);
//	}
//
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("�Ӹ�λ��ʼ����Ϊ:>");
//	play(n);
//	return 0;
//}

//4.���ʵ�֣�����int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ(bit)��ͬ��
//#include<stdio.h>
//#include<math.h>
//
//int count_one_bits(unsigned int value)
//{
//	int count = 0;
//
//	while (value)
//	{
//		value = value&(value - 1);
//		count++;
//	}
//
//	return count;
//}
//
//
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	int m = 0;
//	int n = 0;
//	scanf("%d %d", &n,&m);
//	input = n ^ m;
//  ret = count_one_bits(input);
//	printf("%d\n",ret);
//	return 0;
//}