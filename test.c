#include <stdio.h>//std=��׼ i=input o=output
#include <string.h>
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


//p6


