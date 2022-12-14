#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>



	/*
	* 字符串结束标志：\0
	* 文件结束标志：EOF
	*/
	
	//比较两个数较大值
/*法一：if语句
	if (num1 > num2) {
		printf("较大值是：%d\n", num1);
	}
	else {
		printf("较大值是：%d\n", num2);
	}*/

	
//法二：使用Max函数
//int MAX(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else {
//		return y;
//	}
//
//	
//}
//int main()
//{
//		int num1 = 10;
//		int num2 = 20;
//
//		int max = MAX(num1, num2);
//		printf("较大值是：%d\n", max);
//
//		return 0;
//}

//sizeof求一个变量或类型的大小
//int main()
//{
//	int a = 10;
//	int arr[] = { 1,2,3,4,5,6,7 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof a);
//
//	printf("%d\n", sizeof(arr));//计算数组大小，单位是字节
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//用数组大小/数组中第一个元素大小，
//												//即求出数组中的元素个数
//
//
//	return 0;
//
//}

//~波浪号操作符：按位（二进制位）取反
//			 0101
//按位取反后：1010
//int main()
//{
//	int a = 0;//0在a这个整型中，a占用4个字节（32个bit位）
//	int b = ~a;
//	/*
//	* a,b都是有符号的整型
//	* a为：		00000000000000000000000000000000
//	* a按位取反得11111111111111111111111111111111
//	* 第一个0代表正
//	* 第一个1代表负
//	* 
//	* 只要是整数，内存中存贮的都是二进制的补码
//	* 正数：原码 反码 补码都相同
//	*		原码即显示的代码，负数在内存中存储时是二进制的补码
//	*		使用、打印的都是原码
//	* 负数：
//	* 原码求补码：符号位不变，其余取反，得反码，反码+1得补码
//	* 补码求原码：补码-1得反码，按位取反得原码，符号位不变
//	* a:			00000000000000000000000000000000
//	* a按位取反得补码：11111111111111111111111111111111
//	* 补码-1得反码：   11111111111111111111111111111110
//	* 反码取反得原码： 10000000000000000000000000000001
//	* 符号位不变即-1
//	* 故b=-1
//	*/
//
//	printf("%d\n", b);
//	return 0;
//}

//++、--操作符
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++意思是：先赋值，再自增，即先令b=a=10,再令a=a++=11
//
//	//int b = ++a;//前置++：先自增，再赋值，即先令a=a++=11,再令b=a=11
//
//	//int b = a--;//后置--等同于后置++
//
//	int b = --a;//前置--等同于前置++
//
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}


//()括号内放个类型，表示强制类型转换
//int main()
//{
//	int a = (int)3.14;//3.14是double类型，加（int）后，可强制转换为int类型
//	return 0;
//}


/*
* 逻辑操作符
* && -- 逻辑与（并且）		全真则真，有假则假
* || -- 逻辑或（只要有一个为真，则为真；二者都为假时，才为假）	有真则真，全假则假
* 
* 真 - 非0
* 假 - 0
*/
//int main()
//{
//	int a = 3;
//	int b = 5;
//	//int c = a && b;//都为真则为真，一个为假则为假
//	int c = a || b;//一个为真，即结果为真
//
//	printf("c = %d\n", c);
//	return 0;
//}


/*
* 条件操作符(三目操作符）
* exp1?	 exp2:	exp3;
* 1语句为真，执行2语句
* 1语句为假，执行3语句
*/
//int main()
//{
//	int a = 20;
//	int b = 20;
//	int max = { a > b ? a : b };
//	printf("max = %d\n", max);
//	return 0;
//}


/*
* 计算机存储数据：
* 寄存器		CPU在处理数据时优先从寄存器中获取数据，速度最快
* 高速缓存
* 内存
* 硬盘
* 
* 常见关键字
* register：定义为寄存器变量
*			编译器会自动判断变量是否能存放在寄存器中
* sighed:	有符号的
* unsighed:	无符号的
* struct:	结构体关键字
* union:	联合体、共用体
* typedef:	类型定义（类型重命名）
* static：	1.修饰局部变量时，局部变量的生命周期变长
*			2.修饰全局变量时，改变了变量的作用域,让静态的全局变量只能在自己所在的源文件内部使用
*		    出了源文件就无法使用
*			3.修饰函数时，改变了函数的链接属性
*			外部链接属性 -变为-> 内部链接属性（所有定义的外部函数，通过extern声明都可正常调用，加static则不可用）
*		
*/


//1.static修饰局部变量时，局部变量的生命周期变长
//void test()//加void就无返回值
//{
//	static int a = 1;//无static，a的值：2 2 2 2 2
//	a++;				//加static后，a的值：2 3 4 5 6 
//						//加之后，a就是一个静态的局部变量，在循环中不会被初始化，
//						//当static修饰局部变量时，局部变量的生命周期变长
//	printf("a = %d\n", a);//每循环一次，a就初始化一次，故a总是1，再++
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


//2.static修饰全局变量时，改变了变量的作用域
//int main()
//{
//	extern int g_val;
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//
//}


//3.static修饰函数改变了函数的链接属性,致使外部函数不可用
//在其他源文件定义函数后，需要用extern声明该函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("sum = %d\n", sum);
//	return 0;
//}


//#define定义标识符常量
//#define MAX 100 即定义一个常量MAX，值为100
//#define可以定义宏（带参数的标识符）

//求最大值常用方法：
//int Max(int x, int y)
//{
//	if (x > y) {
//		return x;
//	}
//	else {
//		return y;
//	}
//	
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("max = %d\n", max);
//
//	return 0;
//
//}

//用宏的方法
//#define MAX(X,Y) (X>Y?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = MAX(a, b);//编译器编译为:max = (a>b?a:b);
//	printf("max = %d\n", max);
//
//	return 0;
//}


//指针
/*
* 计算机内存
*		32位								64位
* 32根地址线/数据线					64根地址线/数据线
* 使用时，内存划分为					
* 2^32次方个内存格空间
* 1个空间是1个字节byte
* 则共有4GB的内存
* 
* 指针变量的大小
* 指针大小是4个字节					指针大小是8个字节
*/

//int整型
//int main()
//{
//	int a = 10;//在内存中创建一个名为a的变量，并分配了4个字节大小的空间，空间内存放一个值10
//	//&：取地址	&&：按位与	&a:即取a所在空间的地址
//
//	int* p = &a;//int* 是p的类型，p是存放a的地址的变量，即指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//
//	//* :解引用操作符
//	*p = 20;//通过*p找到a,并将a内的值改为20
//
//	return 0;
//}

//char类型
int main()
{
	char ch = 'w';
	char* cp = &ch;
	/**cp = 'p';*/
	printf("%d\n", sizeof(ch));
	return 0;
}

