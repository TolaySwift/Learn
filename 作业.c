#include <stdio.h>//std=��׼ i=input o=output
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>
//1�����������Ӵ�С���
//int main()
//{
//	int a, b, c;
//	int max, min;
//	printf("��������������");
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

//2��дһ���������1-100������3�ı���������
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}

//%������/�����

//��������������Լ��
//int main()
//{
//	int a, b, max;
//	int x=0;
//	printf("������������������");
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
//	printf("�����������Լ��Ϊ��%d", x);
//	return 0;
//}

//շת������������Լ��
//int main()
//{
//	int a, b, max;
//	int r = 0;
//	printf("������������������");
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
//	printf("�����������Լ��Ϊ��%d", b);
//	return 0;
//}

//��ӡ1000-2000�������
// 1.�ܱ�4���������ܱ�100����������
// 2.�ܱ�400����������
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
//	printf("�ܹ��ǣ�%d", count);
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
//	printf("�ܹ��ǣ�%d", count);
//	return 0;
//}

////��ӡ100-200֮�������
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


////��������Ϸ
////��������һ�������
////������
//void menu()
//{
//	printf("**************************************\n");
//	printf("*********1.play 0.over***************\n");
//	printf("**************************************\n");
//}
//
//void game()
//{
//	int ret = rand();//��0-RAND_MAX(32767)֮����������� ����rand���ɵ��������α����� ÿ��ִ�к�����������һ���� �����ô��Ҫ��һ��seed��Ϊ��������ɵ�����
//	                 //�����Ҫ�õ�srand(seed)�������������Ӳ���Ļ� ÿ��ִ�еĽ������һ���� �����Ҫ�������Ҳ������� 
//	int a = 0;
//	while (1)
//	{
//		printf("��������Ҫ�µ�����");
//		scanf_s("%d", &a);
//		if (a < ret)
//		{
//			printf("���С��\n");
//		}
//		else if(a>ret)
//		{
//			printf("��´���\n");
//		}
//		else
//		{
//			printf("��¶���\n");
//			break;
//		}
//	}
//	
//}
////Ҫȡ�� [a,b) �����������ʹ�� (rand() % (b-a))+ a;
//
////Ҫȡ��[a, b] �����������ʹ��(rand() % (b - a + 1)) + a;
//
////Ҫȡ��(a, b] �����������ʹ��(rand() % (b - a)) + a + 1;
//
////ͨ�ù�ʽ: a + rand() % n�����е� a ����ʼֵ��n �������ķ�Χ��
//
////Ҫȡ�� a �� b ֮��������������һ�ֱ�ʾ��a + (int)b * rand() / (RAND_MAX + 1)��
//
////Ҫȡ�� 0��1 ֮��ĸ�����������ʹ�� rand() / double(RAND_MAX)��
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//ʱ�������ǰʱ��-���������ʼʱ�䣨1970.1.1.0:0:0��time_t time(time_t*timer)����
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf_s("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			break;
//			printf("�˳���Ϸ\n");
//		default:
//			printf("ѡ�����\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}
