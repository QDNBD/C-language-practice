#define _CRT_SECURE_NO_WARNINGS 1



//1.��������Ϸ
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
//		printf("������µ�����:>");
//		scanf("%d", &input);
//		if (num > input)
//		{
//			printf("��С��\n");
//		}
//		else if (num < input)
//		{
//			printf("�´���\n");
//		}
//		else
//		{
//			printf("��ϲ�㣬�¶���\n");
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
//		printf("�������Ӧ�����֣�>");
//		scanf("%d",&input);
//		switch (input)
//		{
//		case 1:games();
//			break;
//		case 0: 
//			break;
//		default:printf("�����������������\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//2.д����������������������в�����Ҫ�����֣��ҵ��˷����±꣬�Ҳ������� - 1���۰���ң�
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

//3.��д����ģ��������������ĳ���������������������룬������ȷ����ʾ����¼�ɹ���, ������󣬿����������룬����������Ρ����ξ�������ʾ�˳�����
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
//		printf("����������:>");
//		scanf("%s", input);
//		if (strcmp(arr,input) == 0)
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("���������������������\n");
//		}
//	}
//
//	if (i == 4)
//	{
//		printf("������������˳�����");
//	}
//	
//}

//4.��дһ�����򣬿���һֱ���ռ����ַ��������Сд�ַ��������Ӧ�Ĵ�д�ַ���������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ�����������ֲ������
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	char arr = { 0 };
//	printf("������һ���ַ�\n");
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
