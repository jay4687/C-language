#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//ctrl+z,结束运行
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch > '9')
//			continue;
//		putchar(ch);
//	}
//
//	return 0;
//}

	/*for循环*/
/*
* 使用频率：for > while > do while
* 
*/
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//break：for循环和while循环中一致，都是跳出循环
//			continue;//continue：在while中出现死循环（continue执行，即跳过后边的代码），
//					//在for中跳过后边条件句继续循环
//					//for和while中的++位置不同，就导致循环结果不同
//		
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		i++;
//		
//	}
//
//	return 0;
//
//}

/*
*for语句的循环控制变量，使用建议：
* 1.不可在for循环体内修改循环变量，防止for循环失去控制
* 
* 2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法
*	即（i = 0;i < 10;i++),尽量不要写成（i = 0;i <= 9;i++)
*		前闭后开写法						前闭后闭写法
*	结果虽然一致，但前者很直观的知道循环几次
*/

//for循环的变种
int main()
{
		/*for循环的初始化、判断、调整都可以省略
		但是：如果判断部分被省略，判断条件就是：恒为正*/
	//变种一
	/*for (;;)
	{
		printf("哈喽\n");
	}*/

	/*int i = 0;
	int j = 0;

	for (; i < 10; i++)
	{
		for (; j < 10; j++)
		{
			printf("hehe ");
		}
	}*/

	//变种二
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}
}