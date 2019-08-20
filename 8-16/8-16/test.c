#define _CRT_SECURE_NO_WARNINGS 1

//1.递归和非递归分别实现求第n个斐波那契数。
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
//	printf("请输入需要求的第n个斐波那契数:>");
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
//	printf("请输入需要求的第n个斐波那契数:>");
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



//2.编写一个函数实现n^k，使用递归实现
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

//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
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

//4. 编写一个函数 reverse_string(char * string)（递归实现） 实现：将参数字符串中的字符反向排列。要求：不能使用C函数库中的字符串操作函数。
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
//	printf("请输入需要逆序的字符串:>");
//	scanf("%s", arr);
//	reverse_string(arr);
//	return 0;
//}


//5.递归和非递归分别实现strlen
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
//	printf("请输入需要计算的字符串:>");
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
//	printf("请输入需要计算的字符串:>");
//	scanf("%s", string);
//	int ret = mystrlen(string);
//	printf("%d\n", ret);
//	return 0;
//}

//6.递归和非递归分别实现求n的阶乘 
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
//	printf("请输入n:>");
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



//7.递归方式实现打印一个整数的每一位 
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