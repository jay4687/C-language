#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

/*
* scanf 是C语言提供的
* scanf_s 不是标准C语言提供的，是由vs编译器提供的，在其他平台不能通用
*/
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//
//	return 0;
//}


 //常量：
	 /*	1·字面常量
	 
			int num = 4;
* 
*		2·const修饰的常变量 -- 常属性（加const后，值不可改变）
*			const int num = 4;//num此时是具有常属性的变量，即常变量
*			num = 8;
*			printf("%d\n", num);
* 
		3·#define定义的标识符常量
*			#define MAX 10

			int main()
			{
	
				int arr[MAX] = {0};
				printf("%d\n", MAX);

				return 0;
			}
* 
*/

//4·枚举常量(又默认值，且不可被改变）
//枚举：一一列举
//性别：男，女，保密
//三原色：红，黄，蓝

//枚举关键字 -- enum
//
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
////MALE,FEMALE,SECRET -- 枚举常量
//int main()
//{
//	//enum Sex s = FEMALE;
//	printf("%d\n", MALE);//默认值0
//	printf("%d\n", FEMALE);//1
//	printf("%d\n", SECRET);//2
//
//	return 0;
//}

//enum Color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//
//int main()
//{
//	enum Color color = BLUE;
//	return 0;
//}


//字符串类型
/*
* ASCII 编码：数据在计算机上存储时，是使用的2进制
*			 故用数字来指代字母和特殊字符
* 字符=ASCII码值
* a=97
* A=65
* \0=0
*/
//int main()
//{
//	char arr1[] = "abc";//字符串一般存放在数组中,"abc"中不仅包括'a','b','c',还有'\0'(字符串的结束标志，不是字符串内容)
//	char arr2[] = {'a','b','c',0};//''内部是单个字符，""内部是字符串,加个0或\0，就与上边结果一致
//	
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}
/*
int main()
{
	char arr1[] = "abc";//数组内容：a b c \0
	char arr2[] = { 'a','b','c'};//a b c * * * * ,无法遇到\0，故返回长度为随机值
									//arr2中，结尾位置放"\0"或0，就和arr1一样了
	printf("%d\n", strlen(arr1));//strlen:计算字符串长度
	printf("%d\n", strlen(arr2));
	return 0;

}
*/
//转义字符,\+字母，转变原来的意思
/*
* \n:换行
* \t:水平制表符，即一个tab键的长空格
* \?:在书写连续多个问号时，防止被解析成三字母词
* \\:反斜杠，防止被转义，只是使用原来意思
* \r:回车
* \ddd:ddd表示1~3个八进制的数字，如：\130X
* \xdd:dd表示2个十六进制的数字，如：\x300
* 
*/

//int main()
//{
//	printf("\"");//当打印字符或符号时，前边加\即可
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//printf("%d\n", strlen("d:\workspace\32\test.c"));
//	 
//	printf("%c\n", '\132');
//	// \32是一个字符，\t是一个字符，
//	// 8进制换为10进制（3*8^1次方+2*8^0次方），得到的数字，对应的ASCII码值
//	// \32--32是2个8进制数字
//	// 32--> 十进制 26 -> 作为ASCII码值代表的字符
//	return 0;
//}

//注释风格
//C语言注释：/*xxxx*/ （缺陷：不能嵌套注释）
//C++语言注释：//xxxx  （ctrl+k+c,整段注释，ctrl+k+u,取消注释)


//选择语句	if语句

//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）>:");
//	scanf("%d", &input);// 1 or 0
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//
//	return 0;
//}
//

//while语句

//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//
//	if(line >= 20000)
//		printf("给个好offer\n");
//
//	return 0;
//}

//函数
//Add是函数名，括号内是参数
//int Add(int x, int y)	
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	int a = 100;
//	int b = 200;
//
//	sum = Add(num1,num2);//sum = num1 + num2
//
//	sum = Add(a, b);//sum = a + b
//
//	sum = Add(0, 2);//每个sum都是独立的运行，封装Add方法后，每当用求和时，就可调用方法
//
//	printf("sum = %d\n", sum);
//
//	return 0;
//}
//
//int main()
//{
//	/*int a = 1;
//	int b = 2;	单独声明很麻烦，使用数组存放定义数
//	int c = 3;
//	int d = 4;*/
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//定义一个最多能够存放10个整数数字的数组
//
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//
//	}
//	//printf("%d\n", arr[4]);//用下标的形式访问元素，下标从0开始
//	//arr[下标]
//	return 0;
//}

/*
* 操作符
* 移（2进制）位操作符
* << 左移
* >> 右移
* int a = 1;
* 整形1占4个字节--32bit位
* 
*/
//int main()
//{
//	int a = 1;
//	//整形1占4个字节--32bit位
//	//00000000000000000000000000000001
//	int b = a << 2;//a左移2，即最后的那个1往左移2位，或1右边多了2个0
//	//b = a + 1
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;
//	
//}


/*
* 二进制转换：	1		1		1		1		1
*			  1*2^4	  1*2^3   1*2^2   1*2^1   1*2^0
*			    16		8		4		2		1			（根据下边相加凑出来）
*	故	二进制		十进制
*		1111	=	  15
*		0011	=	  3
*		1110	=	  14
*		10001   =     17
*		11111	=	  41
*		00101	=	  5
*		
*/

int main()

{
	/*
	* （2进制）位操作
	* &按位与	与：全一则一
	* |按位或	或：有一则一
	* ^按位异或  异或：有一则一，全一则0
	*/

	/*& 与	全一则一，有0则0
	int a = 9;		//1001	0为非真，1为真，&为并
	int b = 7;		//0111	竖着相加，得出一个二进制数
	int c = a & b;  //0001	化为十进制=1
	*/

	/*| 或 有一则一，无一则0
	  int a = 6;	  //110		
	  int b = 5;	  //101
	  int c = a | b;  //111	
	*/

	/*^ 异或 有一则一，全一则0
	int a = 6;	    //110		对应的二进制位相同，则为0
	int b = 5;	    //101		对应的二进制位不同，则为1
	int c = a ^ b;  //011	
	*/

	/*复合赋值符
	* +=，-=，&=，*=，/=，>>=，<<=
	int a = 10;
	a = 20;//=赋值，==判断相等

	a = a + 10;//等价于 a += 10;
	
	a = a - 20;//等价于 a -= 20;

	a = a & 2;//等价于 a &= 2;
	*/

	//单目操作符
	//双目操作符
	//三目操作符

	/*
	* int a = 10;
	* int b = 20;
	* a + b; +即为双目操作符
	* 在C语言中，0表示假，1表示真
	*/

	//int a = 0;
	//printf("%d\n", a);
	//printf("%d\n", !a);//!意思就是：真变为假，假变为真

	/*int a = -2;
	int b = -a;
	int c = 3;
	printf("%d\n", a);
	printf("%d\n", !a);*/

	//sizeof(操作数的类型长度，以字节为单位）
	//int a = 10;
	////sizeof 计算的是变量/类型所占空间的大小，单位是字节
	//printf("%d\n", sizeof(a));//4个字节
	//printf("%d\n", sizeof(int));//括号不能省略
	//printf("%d\n", sizeof a);//括号可以省略
	//

	int arr[10] = { 0 };//10个整型元素的数组
	int sz = 0;

	//10*sizeof(int) = 40
	printf("%d\n", sizeof(arr));

	//计算数组的元素个数：
	//个数 = 数组总大小/每个元素大小
	sz = sizeof(arr) / sizeof(arr[0]);
	printf("%d\n", sz);




	return 0;
	
}
