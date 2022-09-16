#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //包含一个叫stdio.h的文件
					//std-标准 standard input output


//int main()//主函数-程序的入口，main函数有且仅有一个
//{
//	//这里完成任务
//	//在屏幕上输出
//	//函数print function - printf - 打印函数
//	//print是库函数-C语言本身提供给我们使用的函数
//	//相当于使用别人的东西-需要打招呼 即#include<stdio.h>
//	printf("hello world\n");
//	return 0;
// }

//int是整形的意思
//main前面的int表示main函数调用返回一个整型值
//void main（）是过时的写法
//int main()
//{									//同一类型有符号/无符号所占内存大小的字节数一样
//	printf("%d\n", sizeof(char));	//1个bit,8个二进制位
//	printf("%d\n", sizeof(short));	//2个bit,16个二进制位  0~2^16次方-1（65535）
//	printf("%d\n", sizeof(int));	//4个bit,32个二进制位
//	printf("%d\n", sizeof(long));	//4个bit,32个二进制位  0~2^32次方-1（1294967295）
//	printf("%d\n", sizeof(long long));//8个bit,64个二进制位
//	printf("%d\n", sizeof(float));	//4个bit,32个二进制位
//	printf("%d\n", sizeof(double));	//8个bit,64个二进制位
//	return 0;
//
//}
//int num = 20;	//全局变量（定义在代码块{}之外的变量）
//				//全局变量和局部变量名称尽量不要相同，容易产生bug
//				//当二者名字相同时，局部变量优先
//
// 
//int main()
//{
//	//年龄
//	//20
//	int num = 10;	//局部变量 （定义在代码块{}内部的变量）
//
//	short age = 20;		//向内存申请2个字节=16bit位，用来存放20
//	float weight = 95.6f;	//向内存申请4个字节=32bit位，用来存放95.6
//
//	printf("%d\n", num);
//	return 0;
//}
// 
//int main()
//{
//	//计算2个数的和
//	//int num1 = 0;
//	//int num2 = 0;
//	////输入数据--使用输入函数
//	//scanf("%d%d",&num1,&num2);//&是取地址符号
//	//int sum = 0;
//	//sum = num1 + num2;
//
//	//printf("sum=%d\n", sum);
//
//	extern int g_val;		//使用不同源文件的变量，需要用到声明外部符号：extern
//	printf("g_val = %d\n", g_val);
//
//	return 0;
//
//}

int main()
{
	{
		int a = 10;
		printf("a = %d\n", a);
	}
	return 0;
}