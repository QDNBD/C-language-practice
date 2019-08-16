#define _CRT_SECURE_NO_WARNINGS 1



//1.猜数字游戏
//#include<stdio.h>
//#include<time.h>
//
//void menu()
//{
//	printf("******************\n");
//	printf("****  1.play  ****\n");
//	printf("****  2.exit  ****\n");
//	printf("******************\n");
//}
//
//void games()
//{
//	int input = 0;
//	int num = 0;
//	num = rand(time) % 100 + 1;
//	while (1)
//	{
//		printf("请输入猜的数字:>");
//		scanf("%d", &input);
//		if (num > input)
//		{
//			printf("猜小了\n");
//		}
//		else if (num < input)
//		{
//			printf("猜大了\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请输入对应的数字：>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:games();
//			break;
//		case 0: 
//			break;
//		default:printf("输入错误，请重新输入\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//2.写代码可以在整型有序数组中查找想要的数字，找到了返回下标，找不到返回 - 1（折半查找）
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

//3.编写代码模拟三次密码输入的场景。最多能输入三次密码，密码正确，提示“登录成功”, 密码错误，可以重新输入，最多输入三次。三次均错，则提示退出程序。
//#include<stdio.h>
//#include<string.h>
//
//
//int main()
//{
//	char arr[20] = { "123456" };
//	char input[20] = { 0 };
//	int i = 0;
//
//	for (i = 1; i < 4; i++)
//	{
//		printf("请输入密码:>");
//		scanf("%s", input);
//		if (strcmp(arr,input) == 0)
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码输入错误，请重新输入\n");
//		}
//	}
//
//	if (i == 4)
//	{
//		printf("三次密码错误，退出程序");
//	}
//	
//}

//4.编写一个程序，可以一直接收键盘字符，如果是小写字符就输出对应的大写字符，如果接收的是大写字符，就输出对应的小写字符，如果是数字不输出。
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr = { 0 };
//	printf("请输入一个字符\n");
//	while ((arr = getchar()) != EOF)
//	{
//		if (arr >= 'a'&&arr <= 'z')
//		{
//			printf("%c\n", arr - 32);
//		}
//		else if (arr >= 'A'&&arr <= 'Z')
//		{
//			printf("%c\n", arr + 32);
//		}
//		else
//		{
//			;
//		}
//	}
//
//	printf("\n");
//	return 0;
//}
