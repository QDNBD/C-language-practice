//1. 打印100~200之间的素数并计数 
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int m = 100, n = 200,k=0 ,i, j,a;
//  int count=0;
//	for (i = m; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			
//			if (i%j!=0 ) k++;
//		}
//		if (k==i-2) {printf("%d\n", i); count++;}
//		k = 0;
//	}
//  printf("%d\n",count);
//	system("pause");
//	return 0;
//}



//2. 输出乘法口诀表
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//3. 判断1000年-- - 2000年之间的闰年
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int m = 1000, n = 2000, i;
//	for (i = m; i <= n; i++)
//	{
//		if ((i % 4) == 0 && (i % 100) != 0)  printf("%d ", i); 
//		if ((i % 400) == 0)  printf("%d ", i); 
//	}
//	
//	return 0;
//}
