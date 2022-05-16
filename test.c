#include <stdio.h>//std=标准 i=input o=output
#include <string.h>
#include <windows.h>
#include <stdlib.h>
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


//p6 c语言是一门结构化的程序设计语言--分支与循环语句 >-由一个分号（;）隔开的就是一个语句
//int main()
//{
//	;//这也是一个语句 空语句
//	return 0;
//}

// 分支语句 if switch
//if 语句 表达式为0表示假 不执行接下来的语句 表达式不为1为真 执行下一个语句
// 
//if(表达式)
//	语句；

//if（表达式）
//	语句1；
//else
//	语句2；

//if（表达式1）
//	语句1；
//else if(表达式2)
//	语句2；
//else
//	语句3；

//int main()
//{
//	int age = 28;
//	if (age < 18)//if(age<18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");//if 语句要控制多条语句 需要大括号{} 这个大括号叫代码块 
//	}
//	else if(age < 24)//if(age >= 18 && age < 24)
//		printf("青年\n");
//	else
//		printf("成年\n");
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
//		else//else和最近的未匹配的if匹配哦！！！！！！！！！！！！
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
//	else//else和最近的未匹配的if匹配哦！！！！！！！！！！！！
//		printf("haha\n");
//
//	return 0;
//}

////代码书写小规范
//int main()
//{
//	int a = 4;
//	if (a = 5)//这样写也能编译运行 但是确实是一个bug 为了不出现这种情况
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}
//int main()
//{
//	int a = 4;
//	if (5 == a)//这样写如果写成=就会报错
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

////练习1 判断一个数是是否为奇数
//int main()
//{
//	int a = 0;
//	printf("请输入一个整数：");
//	scanf_s("%d", &a);
//	if (0 != a)
//	{
//		int d = a % 2;
//		if (d)
//		{
//			printf("你输入的数是奇数哦！！！");
//		}
//		else
//		{
//			printf("你输入的数是偶数哦！！！");
//		}
//	}
//	else
//	{
//		printf("你丫输入的数是0哦！！！，既不是奇数也不是偶数");
//	}
//	return 0;
//}

////练习2 输出1-100之间的奇数
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

////switch语句 用于多分支的语句
//
////switch(整型表达式)
////{
////	case 常量1:语句1;break;
////	case 常量2:语句2;break;
////	case 常量3:语句3;break;
////	case 常量4:语句4;break;
////	...
////	default :语句;break;
////}
//int main()
//{
//	int day = 0;
//	scanf_s("%d", &day);
//	switch (day)//括号里必须是个整型
//	{
//	case 1://case后面必须为常量表达式  
//		printf("星期一"); break;//break用于跳出switch
//	case 2:
//		printf("星期二"); break;
//	case 3:
//		printf("星期三"); break;
//	case 4:
//		printf("星期四"); break;
//	case 5:
//		printf("星期五"); break;
//	case 6:
//		printf("星期六"); break;
//	case 7:
//		printf("星期七"); break;
//	default:
//		printf("傻逼"); break;
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
//		printf("工作日"); break;
//	case 6:
//	case 7:
//		printf("休息日"); break;
//	default:
//		printf("傻逼"); break;
//	}
//	return 0;
//}

////示例
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
//		case 2:m++; n++; break;//这个break跳出的是这个switch的分支
//		}
//	case 4:m++; break;
//	default:break;
//	}
//	printf("m=%d,n=%d", m, n);//结果是5,3
//	return 0;
//}




//循环语句while
// 
//while(表达式)
//	循环语句；
//
//在屏幕上打印1-10的数字
//int main()
//{
//	int i = 0;
//	while (i<=10)
//	{
//		i++;
//		printf("%d ", i);
//		if(i==5)
//		break;//直接跳出while循环
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1; //初始化
//	while (i <= 10) //判断
//	{	
//		if (i == 5)
//			continue;//本次循环continue后面的不执行了 直接回到while
//		printf("%d ", i);
//		i++;//把这放在if前试试   //调整
//	}
//	return 0;
//}

//代码1
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)//getchar 接受键盘输入的字符 ctrl+z就会获得一个EOF ——end of file
//	{
//		putchar(ch);//打印字符 与printf差不多
//	}
//	return 0;
//}

//代码2
//int main()
//{
//	char ret = 0;
//	int clear = 0;
//	char password[20] = {0};
//	printf("请输入密码：");
//	scanf_s("%s", &password, 20);//输入的密码12345\n（回车） 
//	//只有回车前和空格前的会放在password中--12334   abcf   \n保留
//	while ((clear = getchar()) != '\n')
//	{
//		;//把\n之前的所有输入读取走 清空缓冲区
//	}
//	printf("请确认（Y/N）");
//	ret = getchar();
//	if (ret=='Y')
//	{
//		printf("确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//	}
//	return 0;
//}

//代码2
//int main()
//{
//	int ch; //初始化
//	while ((ch=getchar())!=EOF) //判断
//	{
//		if (ch < '0' || ch>'9')//数字都会打印 其他都不打印
//		{
//			continue;
//		}
//		putchar(ch);
//	}
//	return 0;
//}


//for 循环 不可在for循环内修改循环变量 for循环语句的循环控制变量的取值采用“前闭后开”的写法
//for(表达式1；表达式2；表达式3) 表达式1：初始化循环变量 表达式2：条件判断 表达式3：循环条件调整部分
//	循环语句；

//int main()
//{
//	//          初始化  判断    调整
//	for (size_t i = 1; i < 11; i++)
//	{
//		if (i == 5)
//			continue;//这和while循环有不同 continue后的不执行 但是判断调整i++在for里面时会继续执行
//						//这里输出结果就是 1 2 3 4 6 7 8 9 10  break也是跳出循环
//		printf("%d ", i);//结果为1 2 3 4 5 6 7 8 9 10
//	}
//	return 0;
//}

//int main()
//{
//	for (size_t i = 0; i < 10; i++)//size_t在32位架构上是4字节，在64位架构上是8字节，
//		//在不同架构上进行编译时需要注意这个问题。
//		//而int在不同架构下都是4字节，与size_t不同；且int为带符号数，size_t为无符号数。
//	{
//		if (i = 5)//这里每次循环都对循环变量i赋值5 导致进入死循环
//			printf("hahaha\n");
//		printf("wowowow\n");
//	}
//	return 0;
//}


////for循环的变种
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (/*i=0*/; i<10 ;i++)//for循环的初始化 判断 调整都省略 只要判断省略 那判断横为真 全部去掉就是个死循环
//	{
//		for(/*j=0*/;j<10;j++)//这里随意省略初始化 会有问题 有初始化答应的是0到9各打印10次 没有初始化只打印0十次
//		printf("%d %d\n",i,j);
//	}
//	return 0;
//}

//int main()
//{
//	for (size_t a = 0, b=0; a < 4 && b<5; ++a, b++)//a++先参加程序的运行再+1，
//													//而++a则是先+1再参加程序的运行 但在这结果一样哦！！！
//	{
//		printf("%d %d\n", a, b);
//	}
//	return 0;
//}

//一个笔试题
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++,k++)//k=0这个“判断语句”的结果就是0 
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
//	for (i = 1, k = 1; k = 1; i++, k++)//k=1这个“判断语句”的结果就是1 
//	{
//		k++;
//		printf("%d\n", k);
//	}
//	return 0;
//}



//do while 循环  

////do
////	循环语句；
////while(表达式)；
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		//if (i == 5)
//		//	continue;//他的continue和break与while一样
//		printf("%d\n", i);//do while 循环由于其循环体 循环参数调整 循环条件判定位置特殊 一定要注意
//		i++;
//	} 
//	while (i<=10);
//	return 0;
//}


//练习1 n的阶乘
//int main()//n*(n-1)*(n-2)  1*2*3*...n
//{
//	int n;
//	int a = 1;
//	printf("请输入一个大于零的正整数：");
//	scanf_s("%d", &n);
//	for ( int i = 1; i <= n; i++)
//	{
//		a = a * i;
//		if(i==n)
//			printf("这个数的的阶乘为：%d",a);
//	}
//	return 0;
//}

// 计算1！+2！....10!+n!
//int main()
//{
//	int ret = 1;
//	int a = 1;
//	int b = 0;
//	int n;
//	int i = 1;
//	printf("请输入一个大于零的正整数：");
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
//这两个程序功能一样但是计算方法不一样
//
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int n;
//	int i = 1;
//	printf("请输入一个大于零的正整数：");
//	scanf_s("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		int ret = 1;//不初始化 ret会一直保留上一个数的阶乘 
//		for (i=1 ; i <= a; i++)
//		{
//			ret = ret * i;
//		}
//		b = b + ret;
//	}
//	printf("%d", b);
//	return 0;
//}

//下面这个思路和第一个程序思路一样 但是时间复杂度低
//int main()
//{
//	int a = 1;
//	int b = 0;
//	int n;
//	int ret = 1;
//	printf("请输入一个大于零的正整数：");
//	scanf_s("%d", &n);
//	for (a = 1; a <= n; a++)
//	{
//		ret = ret * a;
//		b = b + ret;
//	}
//	printf("%d", b);
//	return 0;
//}

//在一个有序数组中查找具体的某个数字。编写int binsearch(int x,intv[],int n);
//功能：在v[0]<=v[1]<=v[2]<=....v[n-1]<=v[n]

//时间复杂度为n
//int main()
//{
//	int v[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 17;
//	int sz = sizeof(v) / sizeof(v[1]);
//	for ( int i = 0; i <= sz; i++)
//	{
//		if (k == v[i])
//			printf("找到了，下标是：%d\n", i);
//		if (i==sz)
//			printf("找不到了");
//	}
//	return 0;
//}

//二分法查找 时间复杂度为log 2为底N
//int main()
//{
//	int v[] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 17;
//	int left = 0;//左下标
//	int sz = sizeof(v) / sizeof(v[1]);//计算元素个数
//	int right = sz - 1;//右下标
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
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到哦！");
//	}
//	return 0;
//}


//编写代码，演示多个字符从两端移动，向中间汇聚
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
//			printf("下标是：%d", mid);
//			break; 
//		}
//	
//	}
//	if (left > right)
//	{
//		printf("找不到");
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
//	int right1 = sz1 - 2;//为什么要－2 sz计算的是字符个数加上\0 而每个字符下标是个数减一
//	int left2 = 0;
//	int right2 = sz2 - 2;
//	/*printf("%s\n", arr2);*/
//	while (left2<=right2&& left1 <= right1)
//	{
//		arr2[left2] = arr1[left1];
//		arr2[right2] = arr1[right1];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left1++;
//		right1--;
//		left2++;
//		right2--;
//	}
//	return 0;
//}


//编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，
//如果密码正确则提示登录完成，如果三次错误则退出程序
//int main()
//{
//	char ret[20] = "";
//	int i;
//	printf("请输入密码：");
//	scanf_s("%s", ret, 20);
//	for (i = 1; i <= 2; i++)
//	{
//		char secret[] = "big_heat";
//		if (strcmp(secret,ret)== 0 )//==不能比较两个字符串是否相等 要用库函数strcmp 相等返回0 第一个大于第二个返回一个大于0的数 第一个小于第二个返回一个小于0的数
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("请输入密码(还有%d次机会)：",3-i);
//			scanf_s("%s", ret, 20);
//		}
//
//	}
//	if(i==3)
//		printf("密码忘记咯");
//	return 0;
//}

//int main()
//{
//	char ret[9] = {0};
//	int i;
//	printf("请输入密码：");
//	scanf_s("%s", ret, 9);
//	for (i = 0; i <= 2; i++)
//	{
//		if ( strcmp(ret,"1234")==0)
//		{
//			printf("登录成功");
//			break;
//		}
//		else
//		{
//			printf("请输入密码(还有%d次机会)：", 2 - i);
//			scanf_s("%s", ret, 9);
//		}
//	}
//	if(i==2)
//		printf("密码忘记咯");
//	return 0;
//}





//int main()
//{
//	int weight = 170;
//	for (weight = 170; weight >= 145; weight--)
//		printf("骑车\n");
//	return 0;
//}


// 群里讨论的代码
//int main()
//{
//	int a, b;
//	printf("请输入两个值：");
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

