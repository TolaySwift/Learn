#include <stdio.h>//std=标准 i=input o=output
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
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

////打印100-200之间的素数
//int main()
//{
//	for (int i = 100; i <= 200; i++)
//	{
//		for (int x = 2; x < 1; x++)
//			if (i % x == 0)
//				;
//	}
//	return 0;
//}


////猜数字游戏
////电脑生产一个随机数
////猜数字
//void menu()
//{
//	printf("**************************************\n");
//	printf("*********1.play 0.over***************\n");
//	printf("**************************************\n");
//}
//
//void game()
//{
//	int ret = rand();//在0-RAND_MAX(32767)之间生成随机数 但是rand生成的随机数是伪随机数 每次执行后的随机数都是一样的 因此我么需要找一个seed作为随机数生成的种子
//	                 //这里就要用到srand(seed)但是这个如果种子不变的话 每次执行的结果还是一样的 因此需要这个种子也是随机数 
//	int a = 0;
//	while (1)
//	{
//		printf("请输入你要猜的数：");
//		scanf_s("%d", &a);
//		if (a < ret)
//		{
//			printf("你猜小了\n");
//		}
//		else if(a>ret)
//		{
//			printf("你猜大了\n");
//		}
//		else
//		{
//			printf("你猜对了\n");
//			break;
//		}
//	}
//	
//}
////要取得 [a,b) 的随机整数，使用 (rand() % (b-a))+ a;
//
////要取得[a, b] 的随机整数，使用(rand() % (b - a + 1)) + a;
//
////要取得(a, b] 的随机整数，使用(rand() % (b - a)) + a + 1;
//
////通用公式: a + rand() % n；其中的 a 是起始值，n 是整数的范围。
//
////要取得 a 到 b 之间的随机整数，另一种表示：a + (int)b * rand() / (RAND_MAX + 1)。
//
////要取得 0～1 之间的浮点数，可以使用 rand() / double(RAND_MAX)。
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//时间戳：当前时间-计算机的起始时间（1970.1.1.0:0:0）time_t time(time_t*timer)函数
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//			printf("退出游戏\n");
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
