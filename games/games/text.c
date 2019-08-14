#define _CRT_SECURE_NO_WARNINGS 1

//猜数字游戏
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//
//
//void games1()
//{
//	int random_num = rand(time) % 10 + 1;
//	int input = 0;
//	int i = 1;
//	printf("猜数字(1到10)，你将有三次机会,游戏就会结束.\n");
//	while (i <= 3)
//	{
//		printf("请输入猜的数字:>");
//		scanf("%d", &input);
//
//		if (input > random_num)
//		{
//			printf("猜大了!\n");
//			i++;
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了!\n");
//			i++;
//		}
//		else
//		{
//			printf("恭喜你，猜对了!!!\n");
//			break;
//		}
//
//	}
//}
//	
//
//
//
//void games2()
//{
//	int random_num = rand(time) % 100 + 1;
//	int input = 0;
//	printf("猜数字(1到100)，机会不限，直到正确.\n");
//
//	while (1)
//	{
//		printf("请输入猜的数字:>");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("猜大了!\n");
//		}
//		else if (input < random_num)
//		{
//			printf("猜小了!\n");
//		}
//		else
//		{
//			printf("恭喜你，猜对了!!!\n");
//			break;
//		}
//	}
//}
//
//void games()
//{
//	int input = 0;
//	printf("*****************************************************\n");
//	printf("****1.猜数字(1到10)，你将有三次机会,游戏就会结束.****\n");
//	printf("****2.猜数字(1到100)，机会不限，直到正确.        ****\n");
//	printf("*****************************************************\n");
//	printf("请输入对应项目的数字:>");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:games1();
//		break;
//	case 2:games2();
//		break;
//	default:printf("输入错误，退出游戏\n");
//		break;
//	}
//}
//
////版本1
//int main()
//{
//	int num = 0;
//  srand((unsigned int)time(NULL));
//flat:
//	printf("***********************\n");
//	printf("*****    1.play    ****\n");
//	printf("*****    0.exit    ****\n");
//	printf("***********************\n");
//	printf("请输入对应的数字：>");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:games();
//	case 0:break;
//	default:printf("输入错误，请重新输入\n");
//		goto flat;
//	}
//
//	return 0;
//}

//版本2
//void  menu()
//{
//	printf("***********************\n");
//	printf("*****    1.play    ****\n");
//	printf("*****    0.exit    ****\n");
//	printf("***********************\n");
//}
//
//int main()
//{
//	int input = 0;
//  srand((unsigned int)time(NULL));
//
//	do
//	{
//		menu();
//		printf("请输入对应的数字：>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:games();
//			break;
//		case 0:
//			break;
//		default:printf("输入错误，请重新输入\n");
//		}
//	} while(input);
//
//	return 0;
//}