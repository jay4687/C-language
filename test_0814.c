#define _CRT_SECURE_NO_WARNINGS 1
/*
* C语言是一门结构化的程序设计语言
* 生活中只有三种结构：
* 1.顺序结构
* 2.选择结构：在C语言中即分支语句
* 3.循环结构：在C语言中即循环语句
* 
* C语言中，由;分号隔开的就是一个语句
* 
*/


		/*分支语句*/

	/*if语句*/
#include<stdio.h>

//int main()
//{
//	int age = 5;
//	if (age < 18) {
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if(age >= 18 && age < 40) {
//		printf("青年\n");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("壮年\n");
//	}
//	else if (age >= 60 && age < 90) {
//		printf("老年\n");
//	}
//	else {
//		printf("老不死的\n");
//	}
//
//	return 0;
//}

/*c语言中，0表示假，非0表示真*/
//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1) 
//
//		if (b == 2)
//			printf("hehe\n");
//	
//		else
//			printf("haha\n");
//	return 0;
//	//悬空else，else自动和离他最近的且未匹配else的if相匹配
//}

//练习1：判断一个数是否为奇数
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if ((num%2) == 1) {
//		printf("a是奇数\n");
//	}
//	else {
//		printf("a不是奇数\n");
//	}
//	return 0;
//}

//练习2：输出1-100之间的奇数
//int main()
//{
//	int i = 0;
//	for ( i = 0; i <= 100; i++)
//	{
//		if((i%2)==1)
//		printf("%d\n", i);
//	}
//	return 0; 
//}


	/*switch语句,主要实现多分支语句*/

//int main()
//{
//	int day = 0;
//	scanf("%d", & day);
//	switch (day)//switch后的括号里、只能是整型表达式，若day的类型是float就不行
//	{
//	case 1://case后边也只能跟整型常量
//		printf("星期一");
//		break;
//	case 2:
//		printf("星期二");
//		break;
//	case 3:
//		printf("星期三");
//		break;
//	case 4:
//		printf("星期四");
//		break;
//	case 5:
//		printf("星期五");
//		break;
//	case 6:
//		printf("星期六");
//		break;
//	case 7:
//		printf("星期天");
//		break;
//	}
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日");
//		break;
//	case 6:
//	case 7:
//		printf("休息日");
//		break;
//
//		//用default语句来处理其他情况，default位置可随意放，尽量放最后
//	default:
//		printf("输入错误，请重新输入");
//		break;
//	}
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//以n为入口，n=1，执行case1
//	{
//	case 1: 
//		m++;//m=3
//	case 2: 
//		n++;//n=2
//	case 3: 
//		switch (n)//以n为入口，n=2，执行case2
//		{//switch允许嵌套使用
//		case 1:
//			n++;
//		case 2:
//			m++;//m=4
//			n++;//n=3
//			break;//结束，执行case4
//		}
//	case 4:
//		m++;//m=5
//		break;//结束，m=5,n=3
//	default:
//		break;
//
//	}
//	printf("m = %d,n = %d\n", m, n);
//
//}


		/*循环语句*/
	/*while循环*/
//while为真，则一直循环，1为真，0为假

//int main()
//{
//	int i = 0;
//	while (i <= 10)
//	{
//		printf("%d ", i);
//		i++;
//
//	}
//}
/*
break是终止
continue是本次不执行
*/
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			
//			continue;
//		i++;
//		printf("%d", i);
//	}
//}
//
//int main()
//{
//	int ch = 0;
//	//ctrl + z
//	//EOF -- end of file 值为-1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	
//	return 0;
//
//}

