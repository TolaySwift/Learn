#include <stdio.h>//std=��׼ i=input o=output
#include <string.h>
#include <windows.h>
#include <stdlib.h>
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

//��ӡ100-200֮�������
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