#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//ctrl+z,��������
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

	/*forѭ��*/
/*
* ʹ��Ƶ�ʣ�for > while > do while
* 
*/
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			//break;//break��forѭ����whileѭ����һ�£���������ѭ��
//			continue;//continue����while�г�����ѭ����continueִ�У���������ߵĴ��룩��
//					//��for������������������ѭ��
//					//for��while�е�++λ�ò�ͬ���͵���ѭ�������ͬ
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
*for����ѭ�����Ʊ�����ʹ�ý��飺
* 1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ����
* 
* 2.����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д��
*	����i = 0;i < 10;i++),������Ҫд�ɣ�i = 0;i <= 9;i++)
*		ǰ�պ�д��						ǰ�պ��д��
*	�����Ȼһ�£���ǰ�ߺ�ֱ�۵�֪��ѭ������
*/

//forѭ���ı���
int main()
{
		/*forѭ���ĳ�ʼ�����жϡ�����������ʡ��
		���ǣ�����жϲ��ֱ�ʡ�ԣ��ж��������ǣ���Ϊ��*/
	//����һ
	/*for (;;)
	{
		printf("���\n");
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

	//���ֶ�
	int x, y;
	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
	{
		printf("hehe\n");
	}
}