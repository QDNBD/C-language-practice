#define _CRT_SECURE_NO_WARNINGS 1

//1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������
//#include<stdio.h>
//
//int Fib(input)
//{
//	if (input <= 2)
//	{
//		return 1;
//	}
//	else
//	{
//		return Fib(input - 1) + Fib(input - 2);
//	}
//}
//
//int main()
//{
//	int input = 0;
//	int fib_n = 0;
//	printf("��������Ҫ��ĵ�n��쳲�������:>");
//	scanf("%d", &input);
//	fib_n = Fib(input);
//	printf("%d\n", fib_n);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int input = 0;
//	int i = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	printf("��������Ҫ��ĵ�n��쳲�������:>");
//	scanf("%d", &input);
//	
//	for (i = 1; i < input-1; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//
//}



//2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
//#include<stdio.h>
//
//int funC(int n, int k)
//{
//	if (k <= 0)
//		return 0;
//	else if (n == 1)
//		return 1;
//	else if (k == 1)
//	{
//		return n;
//	}
//	else
//	{
//		return n * funC(n, k - 1);
//	}
//}
//int main()
//{
//	int k = 0;
//	int n = 0;
//  int ret = 0;
//	scanf("%d %d", &n, &k);
//  ret = funC(n, k);
//	printf("%d\n", ret);
//	return 0;
//}

//3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ����磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//#include<stdio.h>
//
//int DigitSum(int n)
//{
//	int sum = 0;
//	int tmp = n % 10;
//	if (n > 0)
//	{
//		tmp += DigitSum(n / 10);
//	}
//	return tmp;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	
//
//	ret = DigitSum(n);
//
//	printf("%d", ret);
//	return 0;
//}

//4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣� ʵ�֣��������ַ����е��ַ��������С�Ҫ�󣺲���ʹ��C�������е��ַ�������������
//#include<stdio.h>
//#include<stdlib.h>
//
// void reverse_string(char * string)
//{
//	 if (*(++string) != '\0')
//	 {
//		 reverse_string(string);
//	 }
//	 
//	 printf("%c", *(string - 1));
//}
//
//int main()
//{
//	char arr[20] = { 0 };
//	printf("��������Ҫ������ַ���:>");
//	scanf("%s", arr);
//	reverse_string(arr);
//	return 0;
//}


//5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
//#include<stdio.h>
//int mystrlen(char* string)
//{
//	if (*string != '\0')
//	{
//		return 1 + mystrlen(string + 1);
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	char string[30] = {0};
//	printf("��������Ҫ������ַ���:>");
//	scanf("%s", string);
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	return 0;
//}


//#include<stdio.h>
//int mystrlen(char* string)
//{
//	int count = 0;
//	while (*string != '\0')
//	{
//		count++;
//		string++;
//	}
//	return count;
//}
//int main()
//{
//	char string[30] = { 0 };
//	printf("��������Ҫ������ַ���:>");
//	scanf("%s", string);
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	return 0;
//}

//6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳� 
//#include<stdio.h>
//
//int Muti(int n)
//{
//	int sum = 1;
//	if (n == 0 || n == 1)
//	{
//		return sum;
//	}
//	else
//	{
//		sum = n*Muti(n-1);
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	printf("������n:>");
//	scanf("%d", &n);
//	ret = Muti(n);
//	printf("%d!=%d\n",n,ret );
//	
//}


//#include<stdio.h>
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int sum = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum *= i;
//	}
//	printf("%d!=%d\n", n,sum);
//	return 0;
//}



//7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ 
//#include<stdio.h>
//
//DigitSum(int n)
//{
//	int tmp = 0;
//	if (n > 0)
//	{
//		tmp = n % 10;
//		printf("%d ", tmp);
//		 DigitSum(n / 10);
//	}
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	DigitSum(n);
//	return 0;
//}