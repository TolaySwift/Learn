#include <stdio.h>//std=��׼ i=input o=output
#include <string.h>
#include <windows.h>
#include <stdlib.h>
//int num1 = 20;//ȫ�ֱ��� ������Ϊ��������
//#define MAX 10 //#define����ı�ʶ������
//int main()//������-������ڣ�����ֻ��һ����int��ʾmain��������֮�󷵻�һ������ֵ
//{
//	int num1 = 1;
//	int num2 = 2;//����ֻ�ܶ����ڴ������ǰ��C���� num2Ϊ����
//	3;//���泣��
//	const int num = 4;//const ������ num�����޸� numΪconst���εĳ�����
//	enum Sex
//	{
//		Male,
//		Female,
//		Secret
//	};//ö�ٳ���
//	enum Sex sex = Male;
//	int arr[MAX] = {0};// �������#define����ı�ʶ�������Ϳ���
//	//const int n = 10; n��Ȼ��Ϊ�˳��� �����������Ǹ�����
//	//int arr[n] = {0}; �����������Ϊһ������ֵ ������n
//	char ch = 'A';
//	int age = 20;//�ֲ�������������Ϊ�������ڵľֲ���Χ�� �ֲ�������ȫ�ֱ�����ͬʱ���ڣ���ñ���ͬ���ֲ�����
//	//%d-��ӡ����
//	//%c-��ӡ�ַ�
//	//%f-��ӡ��������
//	//%p-�Ե�ַ����ʽ��ӡ
//	//%x-��ӡ16��������
//	printf("% d\n", age);//%d--��ӡʮ�������͵�����
//	printf("%c\n", ch);//%c--��ӡ�ַ���ʽ������
//	printf("hehe\n"); 
//	scanf_s("%d%d", &num1, &num2);//&ȡ��ַ��
//	int sum = num1 + num2;
//	printf("sum=%d", sum);
//	
//	/*
//	char arr1[] = "abc";//�ַ���ĩ���Դ��������� ����arr1����ʱ��\0��ռ����
//	char arr2[] = { 'a','b','c' };// char arr2[] = {'a','b','c','\0'} '\0'�ַ���������־
//	printf("%d\n",strlen(arr2));//��������������ֵ ��Ϊstrlen����\0��ֹ
//  printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	*/ -//��Ҳ��һ��ע�� ����c�� �����c++�� ��ݷ�ʽΪCtrl+k+c��u��
//	
//	printf("c:\test\32\test-1");// \t,\32����ת���ַ� �ټ�һ��\����ת�� \0��Ӧ0
//	// \xddʮ������ת��Ϊʮ���ƶ�Ӧ��ASCII  \ddd �˽���
//	
//	return 0;//��������
//}


//�򵥵�ѡ��
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1��0)>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//	{
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("����\n");
//	}
//	return 0;
//}


////ѭ�����(��������)
//int main()
//{
//	int input1 = 0;
//	int input2 = 0;
//	int length = 5;
//	int i = 0;
//	
//	while ( i < length)
//	{
//		i++;
//		printf("�������\n");
//		printf("���Ʊ�н����𣿣�1��ʾ���ˣ�0��ʾû�У�>:");
//		scanf_s("%d\n", &input1);
//		if (input1 == 0)
//		{
//			printf("��ʵѧϰ\n");
//			printf("ѧϰ��զ������1��ʾ��ţ��0��ʾ����>:");
//			scanf_s("%d\n", &input2);
//			if (input2 == 1)
//			{
//			printf("ӭȢ�׸���\n");
//			}
//			else
//			{
//				input1 = 0;
//				input2 = 0;
//			}
//		}
//		else 
//		{
//			printf("ӭȢ�׸���\n");
//			input1 = 0;
//			input2 = 0;
//		}
//	}
//	return 0;
//}



////�������Զ��������
//int Add(int x, int y)//�Զ��庯�����⺯����
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum1 = 0;
//	int sum2 = 0;
//	sum1 = a + b;
//	sum2 = Add(a, b);//Add ���� 
//	printf("%d\n%d\n", sum1, sum2);
//}



//// ����
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int i = 0;
//	int arr[] = { 1,2,3 };
//	printf("%d\n", arr[0]);//������±��0��ʼ
//	while (i<3)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}


////������
////+ - * / %��������������<< >>(��λ�����������洢ʱ��2���������ƶ�)
////& | ^ (������λ����������λ�� ��λ�� ��λ��򣺶�Ӧ��λ��ͬΪ0 ����Ϊ1)  
////= += -= *= /= &= ^= |= >>= <<=(��ֵ������:���ϸ�ֵ��)
////!�߼������� - + ���� &ȡ��ַ sizeof�����������ͳ��ȣ����ֽ�Ϊ��λ�� ~��һ�����Ķ����ư�λȡ�� 
////--ǰ�á�����-- ++ǰ�ú���++ *��ӷ��ʲ������������ò������� �����ͣ�ǿ������ת��  ���е�Ŀ������
////
//int main()
//{
//	int a = 5 / 2;//ȡ��
//	int b = 5 % 2;//ȡ����
//	int c = 2; // cռ4���ֽ�32������λ00000000000000000000000000000010
//	int d = c << 1;// b:00000000000000000000000000000100
//	int e = c >> 1;// e:00000000000000000000000000000001
//	int f = 3 & 5;//011   011   011
//	int g = 3 | 5;//101 & 101 | 101^
//	int h = 3 ^ 5;//001   111   110
//	int num1 = -5;
//	int num2 = 3;
//	int pai = (int)3.14;//��3.14ǿ��ת��Ϊ����
//	int num3 = num2++;//�Ȱ�num2��num3 �ڸ�num2��һ
//	int mun4 = ++num2;//�Ȱ�num22��һ ��num��num3    -- һ��
//	int arr1[] = { 1,6,9 };
//	int arr2[10] = { 1,6,9 };
//	arr[1];//�±����ò�����
//	int sum = num1 + num2;//+�������˫Ŀ�����������Ҷ�һ��
//	printf("%d\n", sizeof(num1));//������Ǳ���\������ռ�ռ�Ĵ�С����λΪ�ֽ�
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr1)); 
//	printf("%d\n", sizeof(arr2));//����������Ĵ�С��һ��Ŷ������
//	printf("%d\n", sizeof(arr1)/ sizeof(arr1[1]));//���������Ԫ�ظ���
//	printf("%d\n", !num1);//0Ϊ�� 1 Ϊ�� 
//	printf("%d %d\n", ~num1, ~num2);//��num1�����һ������ ת��Ϊԭ���ٽ���~���� 
//	//�õ�һ������Ϊԭ��ֱ�Ӵ�ӡ num2Ϊ���� ԭ�뷴�벹��һ��
//	//ֱ�ӽ���~���� �õ�һ������ Ϊ����ת��Ϊԭ����д�ӡ  0.011 1.100 1.011 1.100
//	//ԭ�롢���롢����
//	//�����ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ��� ������ԭ�뷴�벹��һ��
//	//int a �洢�����з��ŵ����ͣ������Ƶĵ�һλ���Ƿ���0Ϊ��1Ϊ��
//	//��ӡ�Ķ���ԭ�� ԭ�뵽�������λ���䣬����ȡ�� ���뵽��������ƼӶ����Ƶ�1
//	printf("%d\n%d\n", a, b);
//	printf("%d\n%d\n%d\n", c, d, e);//c����ı�
//	printf("%d\n%d\n%d\n", f, g, h);
//	return 0;
//}  

////�߼������� 
////&&�߼��� ||�߼���
//int main()
//{
//	int a = 3;
//	int b = 4;
//	int c = 0;
//	int d = a && c;
//	int e = c || b;
//	printf("%d\n%d\n", d,e);
//	return 0;
//}



//�������������ֵ
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%s", "������������ȵ�����>:");
//	scanf_s("%d%d", &a, &b);
//	max = (a > b ? a : b);//��������������Ŀ��������a����b�𣿴��� ��a��ֵ��max �����ڴ�b��ֵ��max
//	if (a>b)
//	{
//		printf("%d", a);
//	}
//	else
//	{
//		printf("%d", b);
//	}
//	return 0;
//}
//�ú���ʵ��
//Max(a,b)
//{
//	if (a > b)
//	{
//		return a;
//	}
//	else
//	{
//		return b;
//	}
//}
//int main() 
//{
//	int a = 0;
//	int b = 0;
//	printf("%s", "������������ȵ�����>:");
//	scanf_s("%d%d", &a, &b);
//	printf("�ϴ�ֵ�ǣ�%d", Max(a, b));//�����Max����Բ���Žк������ò�����
//}

////�����ؼ���--���ܺͱ�������
////char double float int long short signed���з�������һ�㲻д�� unsinged���޷������� void
////auto break case const continue default do else enum(ö�ٱ���) extern for goto if register(�Ĵ����ؼ���)
////return sizeof static struct���ṹ��ؼ��֣� switch typedef union��������ؼ��֣� volatile while
//int main()
//{
//	register int a = 10;//�����aֱ�ӷ���Ĵ�����
//	return 0;
//}

////typedef ���Ͷ��壨�����ض��壩
//int main()
//{
//	typedef unsigned int u_int;//��unsigned int���¶���Ϊu_int
//	unsigned int a = 10;
//	u_int a = 10;
//	return 0;
//}

////static���ξֲ����� �ֲ��������������ڱ䳤 ���˾ֲ��������õľֲ���Χ���ɴ���
////����ȫ�ֱ���ʱ �ͻ�ı��������� �������ù���
////��ͨ���������ⲿ�������� static���κ���ʱ ��ı亯������������ ֻ���ڲ�ʹ��
//void test()
//{
//	static int a = 1;//aΪ��̬�ľֲ���������û��static�����ͬŶ�����ᱻ��ֵ��
//	a++;
//	printf("a=%d\n", a);
//}
//extern int Add(a,b);
//int main()
//{
//	int i = 0;
//	int x = 4; 
//	int y = 6;
//	printf("��Ϊ=%d\n", Add(x,y));
//	extern int g_val; //extern �����ⲿ����
//	printf("g_val%d\n", g_val);
//	
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


////#define �����ʶ������  �����-������ 
//#define MAX 100//���ܼӵȺ�
//#define Max(x,y) (x>y?x:y)//�����-������ 
//int main()
//{
//	int a = MAX;
//	int b = 10;
//	int c = 20;
//	int max = Max(b, c);
//	printf("%d\n%d\n", a, max);
//	return 0;
//}

////ָ�� 32λ����λ�ĸ��ֽ� 64λ����λ�˸��ֽ�
//int main()
//{
//	int a = 9;
//	char b = 'b';
//	char* c = &b;
//	int* p = &a;//ȡ��a�ĵ�ַ
//	printf("�����a���ǣ�%d\n", a);
//	//��һ�ֱ��������洢��ַ-ָ����� ��ʽ����һ��
//	*p = 20;//*--�����ò����� ��20��ֵ��*p���ǽ�20��ֵ��*p��ָ���ַ�е�a
//	printf("��ӡa�ĵ�ַΪ��%p %p �����a��Ϊ��%d\n", &a, p, a);
//	printf("ָ���С��%d\n", sizeof(char*));
//	return 0;
//}
////������⣺ָ���Ǵ洢�ı����ĵ�ַ�� ��32λ�е�ַ��Ϊ32������ �ĸ��ֽ� ��64λ��Ϊ64������ 8���ֽ�
////������޹�


//�ṹ�壨��ȶ���-�������Ӷ���
//struct Book
//{
//	char name[20];//c���Գ������
//	short price;//����55
//};
//int main()
//{
//	struct Book b1 = { "c���Գ������",55 };
//	printf("�����ǣ�%s\n�۸��ǣ�%d\n", b1.name, b1.price);
//	b1.price = 60;
//	/*strcpy(b1.name, "C++");*///�����⣡������
//	struct Book *pb = &b1;
//	printf("%s\n", (*pb).name);//�ṹ�����.��Ա ����*Ϊ������ ��ָ��pb��ַ��b1�Ե�
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb -> name);//�ṹ��ָ��->��Ա pbֻ�Ǹ���ַ
//	printf("%d\n", pb->price);
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	return 0;
//}


//p6 c������һ�Žṹ���ĳ����������--��֧��ѭ����� >-��һ���ֺţ�;�������ľ���һ�����
//int main()
//{
//	;//��Ҳ��һ����� �����
//	return 0;
//}

// ��֧��� if switch
//if ��� ���ʽΪ0��ʾ�� ��ִ�н���������� ���ʽ��Ϊ1Ϊ�� ִ����һ�����
// 
//if(���ʽ)
//	��䣻

//if�����ʽ��
//	���1��
//else
//	���2��

//if�����ʽ1��
//	���1��
//else if(���ʽ2)
//	���2��
//else
//	���3��

//int main()
//{
//	int age = 28;
//	if (age < 18)//if(age<18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");//if ���Ҫ���ƶ������ ��Ҫ������{} ��������Žд���� 
//	}
//	else if(age < 24)//if(age >= 18 && age < 24)
//		printf("����\n");
//	else
//		printf("����\n");
//
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else//else�������δƥ���ifƥ��Ŷ������������������������
//		printf("haha\n");
//
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//	else//else�������δƥ���ifƥ��Ŷ������������������������
//		printf("haha\n");
//
//	return 0;
//}

////������дС�淶
//int main()
//{
//	int a = 4;
//	if (a = 5)//����дҲ�ܱ������� ����ȷʵ��һ��bug Ϊ�˲������������
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	if (5 == a)//����д���д��=�ͻᱨ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////��ϰ1 �ж�һ�������Ƿ�Ϊ����
//int main()
//{
//	int a = 0;
//	printf("������һ��������");
//	scanf_s("%d", &a);
//	if (0 != a)
//	{
//		int d = a % 2;
//		if (d)
//		{
//			printf("���������������Ŷ������");
//		}
//		else
//		{
//			printf("�����������ż��Ŷ������");
//		}
//	}
//	else
//	{
//		printf("��Ѿ���������0Ŷ���������Ȳ�������Ҳ����ż��");
//	}
//	return 0;
//}

////��ϰ2 ���1-100֮�������
//int main()
//{
//	int i = 1;
//	while (100 >= i)
//	{
//		int d = i % 2;
//		if (d)
//		{
//			printf("%d ", i);
//		}
//		else
//		{
//			;
//		}
//		i++;
//	}
//	return 0;
//}

////switch��� ���ڶ��֧�����
//
////switch(���ͱ��ʽ)
////{
////	case ����1:���1;break;
////	case ����2:���2;break;
////	case ����3:���3;break;
////	case ����4:���4;break;
////	...
////	default :���;break;
////}
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//����������Ǹ�����
//	{
//	case 1://case�������Ϊ�������ʽ  
//		printf("����һ"); break;//break��������switch
//	case 2:
//		printf("���ڶ�"); break;
//	case 3:
//		printf("������"); break;
//	case 4:
//		printf("������"); break;
//	case 5:
//		printf("������"); break;
//	case 6:
//		printf("������"); break;
//	case 7:
//		printf("������"); break;
//	default:
//		printf("ɵ��"); break;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)
//	{
//	case 1:  
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������"); break;
//	case 6:
//	case 7:
//		printf("��Ϣ��"); break;
//	default:
//		printf("ɵ��"); break;
//	}
//	return 0;
//}

////ʾ��
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;//���break�����������switch�ķ�֧
//		}
//	case 4:m++; break;
//	default:break;
//	}
//	printf("m=%d,n=%d", m, n);//�����5,3
//	return 0;
//}




//ѭ�����while
// 
//while(���ʽ)
//	ѭ����䣻
//
//����Ļ�ϴ�ӡ1-10������
//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		i++;
//		printf("%d ", i);
//		if(i==5)
//		break;//ֱ������whileѭ��
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1; //��ʼ��
//	while (i <= 10) //�ж�
//	{	
//		if (i == 5)
//			continue;//����ѭ��continue����Ĳ�ִ���� ֱ�ӻص�while
//		printf("%d ", i);
//		i++;//�������ifǰ����   //����
//	}
//	return 0;
//}

//����1
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)//getchar ���ܼ���������ַ� ctrl+z�ͻ���һ��EOF ����end of file
//	{
//		putchar(ch);//��ӡ�ַ� ��printf���
//	}
//	return 0;
//}

//����2
//int main()
//{
//	char ret = 0;
//	int clear = 0;
//	char password[20] = {0};
//	printf("���������룺");
//	scanf_s("%s", &password, 20);//���������12345\n���س��� 
//	//ֻ�лس�ǰ�Ϳո�ǰ�Ļ����password��--12334   abcf   \n����
//	while ((clear = getchar()) != '\n')
//	{
//		;//��\n֮ǰ�����������ȡ�� ��ջ�����
//	}
//	printf("��ȷ�ϣ�Y/N��");
//	ret = getchar();
//	if (ret=='Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
//	}
//	return 0;
//}

//����2
//int main()
//{
//	int ch; //��ʼ��
//	while ((ch=getchar())!=EOF) //�ж�
//	{
//		if (ch < '0' || ch>'9')//���ֶ����ӡ ����������ӡ
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//for ѭ�� ������forѭ�����޸�ѭ������ forѭ������ѭ�����Ʊ�����ȡֵ���á�ǰ�պ󿪡���д��
//for(���ʽ1�����ʽ2�����ʽ3) ���ʽ1����ʼ��ѭ������ ���ʽ2�������ж� ���ʽ3��ѭ��������������
//	ѭ����䣻

//int main()
//{
//	//          ��ʼ��  �ж�    ����
//	for (size_t i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			continue;//���whileѭ���в�ͬ continue��Ĳ�ִ�� �����жϵ���i++��for����ʱ�����ִ��
//						//�������������� 1 2 3 4 6 7 8 9 10  breakҲ������ѭ��
//		printf("%d ", i);//���Ϊ1 2 3 4 5 6 7 8 9 10
//	}
//	return 0;
//}

//int main()
//{
//	for (size_t i = 0; i < 10; i++)//size_t��32λ�ܹ�����4�ֽڣ���64λ�ܹ�����8�ֽڣ�
//		//�ڲ�ͬ�ܹ��Ͻ��б���ʱ��Ҫע��������⡣
//		//��int�ڲ�ͬ�ܹ��¶���4�ֽڣ���size_t��ͬ����intΪ����������size_tΪ�޷�������
//	{
//		if (i = 5)//����ÿ��ѭ������ѭ������i��ֵ5 ���½�����ѭ��
//			printf("hahaha\n");
//		printf("wowowow\n");
//	}
//	return 0;
//}


////forѭ���ı���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (/*i=0*/; i<10 ;i++)//forѭ���ĳ�ʼ�� �ж� ������ʡ�� ֻҪ�ж�ʡ�� ���жϺ�Ϊ�� ȫ��ȥ�����Ǹ���ѭ��
//	{
//		for(/*j=0*/;j<10;j++)//��������ʡ�Գ�ʼ�� �������� �г�ʼ����Ӧ����0��9����ӡ10�� û�г�ʼ��ֻ��ӡ0ʮ��
//		printf("%d %d\n",i,j);
//	}
//	return 0;
//}

//int main()
//{
//	for (size_t a = 0, b=0; a < 4 && b<5; ++a, b++)//a++�Ȳμӳ����������+1��
//													//��++a������+1�ٲμӳ�������� ��������һ��Ŷ������
//	{
//		printf("%d %d\n", a, b);
//	}
//	return 0;
//}

//һ��������
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++,k++)//k=0������ж���䡱�Ľ������0 
//	{
//		k++;
//		printf("%d\n", k);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int k = 1;
//	for (i = 1, k = 1; k = 1; i++, k++)//k=1������ж���䡱�Ľ������1 
//	{
//		k++;
//		printf("%d\n", k);
//	}
//	return 0;
//}



//do while ѭ��  

////do
////	ѭ����䣻
////while(���ʽ)��
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//		//	continue;//����continue��break��whileһ��
//		printf("%d\n", i);//do while ѭ��������ѭ���� ѭ���������� ѭ�������ж�λ������ һ��Ҫע��
//		i++;
//	} 
//	while (i<=10);
//	return 0;
//}


//��ϰ1 n�Ľ׳�
//int main()//n*(n-1)*(n-2)  1*2*3*...n
//{
//	int n;
//	int a = 1;
//	printf("������һ�����������������");
//	scanf_s("%d", &n);
//	for ( int i = 1; i <= n; i++)
//	{
//		a = a * i;
//		if(i==n)
//			printf("������ĵĽ׳�Ϊ��%d",a);
//	}
//	return 0;
//}

// ����1��+2��....10!+n!
//int main()
//{
//	int ret = 1;
//	int a = 1;
//	int b = 0;
//	int n;
//	int i = 1;
//	printf("������һ�����������������");
//	scanf_s("%d", &n);
//	for ( a = 1; a <= n; a++)
//	{
//		for (; i <= a; i++)
//		{
//			ret = ret * i;
//		}
//		b = b + ret;
//	}
//	printf("%d", b);
//	return 0;
//}
//
//������������һ�����Ǽ��㷽����һ��
//
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int n;
//	int i = 1;
//	printf("������һ�����������������");
//	scanf_s("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		int ret = 1;//����ʼ�� ret��һֱ������һ�����Ľ׳� 
//		for (i=1 ; i <= a; i++)
//		{
//			ret = ret * i;
//		}
//		b = b + ret;
//	}
//	printf("%d", b);
//	return 0;
//}

//�������˼·�͵�һ������˼·һ�� ����ʱ�临�Ӷȵ�
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int n;
//	int ret = 1;
//	printf("������һ�����������������");
//	scanf_s("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		ret = ret * a;
//		b = b + ret;
//	}
//	printf("%d", b);
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ�����֡���дint binsearch(int x,intv[],int n);
//���ܣ���v[0]<=v[1]<=v[2]<=....v[n-1]<=v[n]

//ʱ�临�Ӷ�Ϊn
//int main()
//{
//	int v[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(v) / sizeof(v[1]);
//	for ( int i = 0; i <= sz; i++)
//	{
//		if (k == v[i])
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//		if (i==sz)
//			printf("�Ҳ�����");
//	}
//	return 0;
//}

//���ַ����� ʱ�临�Ӷ�Ϊlog 2Ϊ��N
//int main()
//{
//	int v[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 17;
//	int left = 0;//���±�
//	int sz = sizeof(v) / sizeof(v[1]);//����Ԫ�ظ���
//	int right = sz - 1;//���±�
//	while (left<=right)
//	{
//
//		int mid = (left + right) / 2;
//		if (v[mid] > k)
//			right = mid - 1;
//		else if (v[mid] < k)
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���Ŷ��");
//	}
//	return 0;
//}


//��д���룬��ʾ����ַ��������ƶ������м���
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 19;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	while(left<=right)
//	{
//		int mid = (right + left) / 2;
//		if (k < arr[mid])
//			right = mid - 1;
//		else if (k > arr[mid])
//			left = mid + 1;
//		else
//		{
//			printf("�±��ǣ�%d", mid);
//			break; 
//		}
//	
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit";
//	char arr2[] = "##############";
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int left1 = 0;
//	int right1 = sz1-2; 
//	int left2 = 0; 
//	int right2 = sz2-2;
//	printf("%s\n", arr2);
//	for (int i = 0; i <= (sz1/2-1); i++)
//	{
//		arr2[left2] = arr1[left1];
//		arr2[right2] = arr1[right1];
//		printf("%s\n", arr2);
//		left1++;
//		right1--;
//		left2++;
//		right2--;
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "welcome to bit";//[wwlcome to bit\n]
//	char arr2[] = "##############";
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
//	int left1 = 0;
//	//int left1=strlen(arr1)-1
//	int right1 = sz1 - 2;//ΪʲôҪ��2 sz��������ַ���������\0 ��ÿ���ַ��±��Ǹ�����һ
//	int left2 = 0;
//	int right2 = sz2 - 2;
//	/*printf("%s\n", arr2);*/
//	while (left2<=right2&& left1 <= right1)
//	{
//		arr2[left2] = arr1[left1];
//		arr2[right2] = arr1[right1];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
//		left1++;
//		right1--;
//		left2++;
//		right2--;
//	}
//	return 0;
//}


//��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬
//���������ȷ����ʾ��¼��ɣ�������δ������˳�����
//int main()
//{
//	char ret[20] = "";
//	int i;
//	printf("���������룺");
//	scanf_s("%s", ret, 20);
//	for (i = 1; i <= 2; i++)
//	{
//		char secret[] = "big_heat";
//		if (strcmp(secret,ret)== 0 )//==���ܱȽ������ַ����Ƿ���� Ҫ�ÿ⺯��strcmp ��ȷ���0 ��һ�����ڵڶ�������һ������0���� ��һ��С�ڵڶ�������һ��С��0����
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("����������(����%d�λ���)��",3-i);
//			scanf_s("%s", ret, 20);
//		}
//
//	}
//	if(i==3)
//		printf("�������ǿ�");
//	return 0;
//}

//int main()
//{
//	char ret[9] = {0};
//	int i;
//	printf("���������룺");
//	scanf_s("%s", ret, 9);
//	for (i = 0; i <= 2; i++)
//	{
//		if ( strcmp(ret,"1234")==0)
//		{
//			printf("��¼�ɹ�");
//			break;
//		}
//		else
//		{
//			printf("����������(����%d�λ���)��", 2 - i);
//			scanf_s("%s", ret, 9);
//		}
//	}
//	if(i==2)
//		printf("�������ǿ�");
//	return 0;
//}





//int main()
//{
//	int weight = 170;
//	for (weight = 170; weight >= 145; weight--)
//		printf("�ﳵ\n");
//	return 0;
//}


// Ⱥ�����۵Ĵ���
//int main()
//{
//	int a, b;
//	printf("����������ֵ��");
//	scanf_s("%d,%d", &a, &b);
//	//int* c = &b;
//	//printf("%p\n", c);
//	if (a > b)
//	{
//		printf("%d>%d", a, b);
//	}
//	else if (a < b)
//	{
//		printf("%d<%d", a, b);
//	}
//	else 
//	{
//		printf("%d=%d", a, b);
//	}
//	return 0;
//}

