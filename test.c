#include <stdio.h>//std=标准 i=input o=output
#include <string.h>
//int num1 = 20;//全局变量 作用域为整个工程
//#define MAX 10 //#define定义的标识符常量
//int main()//主函数-程序入口（有且只有一个）int表示main函数调用之后返回一个整型值
//{
//	int num1 = 1;
//	int num2 = 2;//变量只能定义在代码块最前面C里面 num2为变量
//	3;//字面常量
//	const int num = 4;//const 常属性 num不能修改 num为const修饰的常变量
//	enum Sex
//	{
//		Male,
//		Female,
//		Secret
//	};//枚举常量
//	enum Sex sex = Male;
//	int arr[MAX] = {0};// 这里采用#define定义的标识符常量就可以
//	//const int n = 10; n虽然改为了常量 但本质依旧是个变量
//	//int arr[n] = {0}; 数组个数必须为一个常量值 不能用n
//	char ch = 'A';
//	int age = 20;//局部变量（作用域为变量所在的局部范围） 局部变量和全局变量可同时存在，最好别相同，局部优先
//	//%d-打印整型
//	//%c-打印字符
//	//%f-打印浮点数字
//	//%p-以地址的形式打印
//	//%x-打印16进制数字
//	printf("% d\n", age);//%d--打印十进制整型的数据
//	printf("%c\n", ch);//%c--打印字符格式的数据
//	printf("hehe\n"); 
//	scanf_s("%d%d", &num1, &num2);//&取地址符
//	int sum = num1 + num2;
//	printf("sum=%d", sum);
//	
//	/*
//	char arr1[] = "abc";//字符串末端自带结束表征 查找arr1长度时，\0不占长度
//	char arr2[] = { 'a','b','c' };// char arr2[] = {'a','b','c','\0'} '\0'字符串结束标志
//	printf("%d\n",strlen(arr2));//结果出来会是随机值 因为strlen读到\0截止
//  printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	*/ -//这也是一种注释 这是c的 最好用c++的 快捷方式为Ctrl+k+c（u）
//	
//	printf("c:\test\32\test-1");// \t,\32都是转义字符 再加一个\进行转义 \0对应0
//	// \xdd十六进制转化为十进制对应的ASCII  \ddd 八进制
//	
//	return 0;//返回整数
//}


//简单的选择
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1或0)>:");
//	scanf_s("%d", &input);
//	if (input == 1)
//	{
//		printf("好offer\n");
//	}
//	else
//	{
//		printf("卖猪\n");
//	}
//	return 0;
//}


////循环语句(这有问题)
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
//		printf("加入比特\n");
//		printf("买彩票中奖了吗？（1表示中了，0表示没中）>:");
//		scanf_s("%d\n", &input1);
//		if (input1 == 0)
//		{
//			printf("老实学习\n");
//			printf("学习得咋样？（1表示大牛，0表示菜鸟）>:");
//			scanf_s("%d\n", &input2);
//			if (input2 == 1)
//			{
//			printf("迎娶白富美\n");
//			}
//			else
//			{
//				input1 = 0;
//				input2 = 0;
//			}
//		}
//		else 
//		{
//			printf("迎娶白富美\n");
//			input1 = 0;
//			input2 = 0;
//		}
//	}
//	return 0;
//}



////函数的自定义与调用
//int Add(int x, int y)//自定义函数（库函数）
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
//	sum2 = Add(a, b);//Add 函数 
//	printf("%d\n%d\n", sum1, sum2);
//}



//// 数组
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = 3;
//	int i = 0;
//	int arr[] = { 1,2,3 };
//	printf("%d\n", arr[0]);//数组的下标从0开始
//	while (i<3)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	return 0;
//}


////操作符
////+ - * / %（算术操作符）<< >>(移位操作符：将存储时的2进制左右移动)
////& | ^ (二进制位操作符：按位与 按位或 按位异或：对应的位相同为0 相异为1)  
////= += -= *= /= &= ^= |= >>= <<=(赋值操作符:复合赋值符)
////!逻辑反操作 - + 正负 &取地址 sizeof操作数的类型长度（以字节为单位） ~对一个数的二进制按位取反 
////--前置、后置-- ++前置后置++ *间接访问操作符（解引用操作符） （类型）强制类型转换  都叫单目操作符
////
//int main()
//{
//	int a = 5 / 2;//取商
//	int b = 5 % 2;//取余数
//	int c = 2; // c占4个字节32个比特位00000000000000000000000000000010
//	int d = c << 1;// b:00000000000000000000000000000100
//	int e = c >> 1;// e:00000000000000000000000000000001
//	int f = 3 & 5;//011   011   011
//	int g = 3 | 5;//101 & 101 | 101^
//	int h = 3 ^ 5;//001   111   110
//	int num1 = -5;
//	int num2 = 3;
//	int pai = (int)3.14;//把3.14强制转换为整型
//	int num3 = num2++;//先把num2给num3 在给num2加一
//	int mun4 = ++num2;//先把num22加一 在num给num3    -- 一样
//	int arr1[] = { 1,6,9 };
//	int arr2[10] = { 1,6,9 };
//	arr[1];//下标引用操作符
//	int sum = num1 + num2;//+在这就是双目操作符，左右都一个
//	printf("%d\n", sizeof(num1));//计算的是变量\类型所占空间的大小，单位为字节
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(arr1)); 
//	printf("%d\n", sizeof(arr2));//这两个数组的大小不一样哦！！！
//	printf("%d\n", sizeof(arr1)/ sizeof(arr1[1]));//计算数组的元素个数
//	printf("%d\n", !num1);//0为假 1 为真 
//	printf("%d %d\n", ~num1, ~num2);//对num1存的是一个补码 转化为原码再进行~操作 
//	//得到一个正数为原码直接打印 num2为正数 原码反码补码一致
//	//直接进行~操作 得到一个负数 为补码转化为原码进行打印  0.011 1.100 1.011 1.100
//	//原码、反码、补码
//	//数在内存中存储的时候，存储的是二进制的补码 正数的原码反码补码一致
//	//int a 存储的是有符号的整型，二进制的第一位便是符号0为正1为负
//	//打印的都是原码 原码到反码符号位不变，其他取反 反码到补码二进制加二进制的1
//	printf("%d\n%d\n", a, b);
//	printf("%d\n%d\n%d\n", c, d, e);//c不会改变
//	printf("%d\n%d\n%d\n", f, g, h);
//	return 0;
//}  

////逻辑操作符 
////&&逻辑与 ||逻辑或
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



//求两个数的最大值
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("%s", "输入两个不相等的整数>:");
//	scanf_s("%d%d", &a, &b);
//	max = (a > b ? a : b);//条件操作符（三目操作符）a大于b吗？大于 把a赋值给max 不大于大b赋值给max
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
//用函数实现
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
//	printf("%s", "输入两个不相等的整数>:");
//	scanf_s("%d%d", &a, &b);
//	printf("较大值是：%d", Max(a, b));//这里的Max（）圆括号叫函数调用操作符
//}

////常见关键字--不能和变量重名
////char double float int long short signed（有符号数，一般不写） unsinged（无符号数） void
////auto break case const continue default do else enum(枚举变量) extern for goto if register(寄存器关键字)
////return sizeof static struct（结构体关键字） switch typedef union（联合体关键字） volatile while
//int main()
//{
//	register int a = 10;//建议把a直接放入寄存器中
//	return 0;
//}

////typedef 类型定义（类型重定义）
//int main()
//{
//	typedef unsigned int u_int;//将unsigned int重新定义为u_int
//	unsigned int a = 10;
//	u_int a = 10;
//	return 0;
//}

////static修饰局部变量 局部变量的生命周期变长 出了局部变量作用的局部范围依旧存在
////修饰全局变量时 就会改变其作用域 不能引用过来
////普通函数具有外部链接属性 static修饰函数时 会改变函数的链接属性 只能内部使用
//void test()
//{
//	static int a = 1;//a为静态的局部变量（有没有static情况不同哦）不会被赋值了
//	a++;
//	printf("a=%d\n", a);
//}
//extern int Add(a,b);
//int main()
//{
//	int i = 0;
//	int x = 4; 
//	int y = 6;
//	printf("和为=%d\n", Add(x,y));
//	extern int g_val; //extern 声明外部变量
//	printf("g_val%d\n", g_val);
//	
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


////#define 定义标识符常量  定义宏-带参数 
//#define MAX 100//不能加等号
//#define Max(x,y) (x>y?x:y)//定义宏-带参数 
//int main()
//{
//	int a = MAX;
//	int b = 10;
//	int c = 20;
//	int max = Max(b, c);
//	printf("%d\n%d\n", a, max);
//	return 0;
//}

////指针 32位长度位四个字节 64位长度位八个字节
//int main()
//{
//	int a = 9;
//	char b = 'b';
//	char* c = &b;
//	int* p = &a;//取出a的地址
//	printf("这里的a还是：%d\n", a);
//	//有一种变量用来存储地址-指针变量 格式见上一行
//	*p = 20;//*--解引用操作符 将20赋值给*p就是将20赋值给*p所指向地址中的a
//	printf("打印a的地址为：%p %p 这里的a变为：%d\n", &a, p, a);
//	printf("指针大小：%d\n", sizeof(char*));
//	return 0;
//}
////个人理解：指针是存储的变量的地址码 在32位中地址码为32个比特 四个字节 在64位中为64个比特 8个字节
////与变量无关


//结构体（类比对象）-描述复杂对象
//struct Book
//{
//	char name[20];//c语言程序设计
//	short price;//定价55
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计",55 };
//	printf("书名是：%s\n价格是：%d\n", b1.name, b1.price);
//	b1.price = 60;
//	/*strcpy(b1.name, "C++");*///有问题！！！！
//	struct Book *pb = &b1;
//	printf("%s\n", (*pb).name);//结构体变量.成员 加了*为解引用 将指针pb地址与b1对等
//	printf("%d\n", (*pb).price);
//	printf("%s\n", pb -> name);//结构体指针->成员 pb只是个地址
//	printf("%d\n", pb->price);
//	printf("修改后的价格：%d\n", b1.price);
//	return 0;
//}


//p6


