#define _CRT_SECURE_NO_WARNINGS 1

//��������Ϸ
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
//	printf("������(1��10)���㽫�����λ���,��Ϸ�ͻ����.\n");
//	while (i <= 3)
//	{
//		printf("������µ�����:>");
//		scanf("%d", &input);
//
//		if (input > random_num)
//		{
//			printf("�´���!\n");
//			i++;
//		}
//		else if (input < random_num)
//		{
//			printf("��С��!\n");
//			i++;
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!!!\n");
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
//	printf("������(1��100)�����᲻�ޣ�ֱ����ȷ.\n");
//
//	while (1)
//	{
//		printf("������µ�����:>");
//		scanf("%d", &input);
//		if (input > random_num)
//		{
//			printf("�´���!\n");
//		}
//		else if (input < random_num)
//		{
//			printf("��С��!\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���!!!\n");
//			break;
//		}
//	}
//}
//
//void games()
//{
//	int input = 0;
//	printf("*****************************************************\n");
//	printf("****1.������(1��10)���㽫�����λ���,��Ϸ�ͻ����.****\n");
//	printf("****2.������(1��100)�����᲻�ޣ�ֱ����ȷ.        ****\n");
//	printf("*****************************************************\n");
//	printf("�������Ӧ��Ŀ������:>");
//	scanf("%d", &input);
//	switch (input)
//	{
//	case 1:games1();
//		break;
//	case 2:games2();
//		break;
//	default:printf("��������˳���Ϸ\n");
//		break;
//	}
//}
//
////�汾1
//int main()
//{
//	int num = 0;
//  srand((unsigned int)time(NULL));
//flat:
//	printf("***********************\n");
//	printf("*****    1.play    ****\n");
//	printf("*****    0.exit    ****\n");
//	printf("***********************\n");
//	printf("�������Ӧ�����֣�>");
//	scanf("%d", &num);
//
//	switch (num)
//	{
//	case 1:games();
//	case 0:break;
//	default:printf("�����������������\n");
//		goto flat;
//	}
//
//	return 0;
//}

//�汾2
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
//		printf("�������Ӧ�����֣�>");
//		scanf("%d", &input);
//
//		switch (input)
//		{
//		case 1:games();
//			break;
//		case 0:
//			break;
//		default:printf("�����������������\n");
//		}
//	} while(input);
//
//	return 0;
//}