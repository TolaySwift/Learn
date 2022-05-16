#include <stdio.h>//std=标准 i=input o=output
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//1、将三个数从大到小输出
//int main()
//{
//	int a, b, c;
//	int max, min;
//	printf("请输入三个数：");
//	scanf_s("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		max = b;
//		b = a;a = max; 
//
//	}
//	if (a < c)
//	{
//		max = c;
//		c = a;
//		a = max; 
//		
//	}
//	if (c > b)
//	{
//		min = b;
//		b = c;
//		c = min;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//2、写一个代码输出1-100中所有3的倍数的数字
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//%求余数/求除数

//输出两个数的最大公约数
//int main()
//{
//	int a, b, max;
//	int x=0;
//	printf("请输入两个正整数：");
//	scanf_s("%d %d", &a, &b);
//	if (a < b)
//	{
//		max = b;
//		b = a;
//		a = max;
//	}
//	for (int i = 1; i <= b; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//			x = i;
//	}
//	printf("两个数的最大公约数为：%d", x);
//	return 0;
//}

//辗转相除法计算最大公约数
//int main()
//{
//	int a, b, max;
//	int r = 0;
//	printf("请输入两个正整数：");
//	scanf_s("%d %d", &a, &b);
//	//if (a < b)
//	//{
//	//	max = b;
//	//	b = a;
//	//	a = max;
//	//}
//	while (a % b)
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("两个数的最大公约数为：%d", b);
//	return 0;
//}

//打印1000-2000年的闰年
// 1.能被4整除但不能被100整除是闰年
// 2.能被400整除是闰年
//int main()
//{
//	int count = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	
//	}
//	printf("总共是：%d", count);
//	return 0;
//}



//int main()
//{
//	int count = 0;
//	for (int i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("总共是：%d", count);
//	return 0;
//}

//打印100-200之间的素数
int main()
{
	for (int i = 100; i <= 200; i++)
	{
		for (int x = 2; x < 1; x++)
			if (i % x == 0)
				;
	}
	return 0;
}