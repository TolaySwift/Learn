
int g_val = 2020;//全局变量 前面加static就会改变其作用域 在275行引用就会出错
int Add(a, b)//函数 前面加static就会改变其链接属性 只能在这里使用 外部无法调用
{
	return a + b;
}