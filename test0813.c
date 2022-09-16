#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//指针变量及其大小(用sizeof来测量大小）
//32位平台上是4字节大小，64位平台上是8字节大小
//int main()
//{
//	double d = 3.14;
//	double* dp = &d;
//	//*dp = 2.17;
//	printf("%d\n", sizeof(dp));//打印double类型：%lf
//								//打印int类型：%d
//								//打印字符：%c
//								//打印字符串：%s
//	return 0;
//
//}

/*
*结构体
*人、书这些东西都比较复杂，不像字符、数字这些是单一变量
* 因此叫结构体
*/

//创建一个结构体：书
struct Book
{
	//先定义书的名字的大小，价格的类型等属性

	char name[20];//eg:C语言程序设计
	short price;//55
};

int main()
{
	//利用结构体类型，创建一个该类型的结构体变量
	struct Book b1 = { "c语言程序设计",55 };
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);

	b1.price = 46.9;//价格是变量，可以直接修改，书名是个数组，不能直接改

	strcpy(b1.name, "c++");//strcpy:string copy -- 字符串拷贝-库函数-string.h
		//目的地		参数

	printf("修改后的书名：%s\n", b1.name);//需要调用strcpy方法，将新的字符串拷贝覆盖在目的地
	printf("修改后的价格：%d元\n", b1.price);

	//利用pb打印出书名、价格，通过指针获取书名、价格
	//struct Book* pb = &b1;
	//printf("书名：%s\n", (*pb).name);
	//printf("价格：%d元\n", (*pb).price);

	//printf("书名：%s\n", pb->name);//这种方法更简洁: ->
	//printf("价格：%d元\n", pb->price);

	/*
	* . ： 结构体变量.成员
	* ->： 结构体指针->成员
	*/
	return 0;

}


