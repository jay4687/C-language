#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>  //����һ����stdio.h���ļ�
					//std-��׼ standard input output


//int main()//������-�������ڣ�main�������ҽ���һ��
//{
//	//�����������
//	//����Ļ�����
//	//����print function - printf - ��ӡ����
//	//print�ǿ⺯��-C���Ա����ṩ������ʹ�õĺ���
//	//�൱��ʹ�ñ��˵Ķ���-��Ҫ���к� ��#include<stdio.h>
//	printf("hello world\n");
//	return 0;
// }

//int�����ε���˼
//mainǰ���int��ʾmain�������÷���һ������ֵ
//void main�����ǹ�ʱ��д��
//int main()
//{									//ͬһ�����з���/�޷�����ռ�ڴ��С���ֽ���һ��
//	printf("%d\n", sizeof(char));	//1��bit,8��������λ
//	printf("%d\n", sizeof(short));	//2��bit,16��������λ  0~2^16�η�-1��65535��
//	printf("%d\n", sizeof(int));	//4��bit,32��������λ
//	printf("%d\n", sizeof(long));	//4��bit,32��������λ  0~2^32�η�-1��1294967295��
//	printf("%d\n", sizeof(long long));//8��bit,64��������λ
//	printf("%d\n", sizeof(float));	//4��bit,32��������λ
//	printf("%d\n", sizeof(double));	//8��bit,64��������λ
//	return 0;
//
//}
//int num = 20;	//ȫ�ֱ����������ڴ����{}֮��ı�����
//				//ȫ�ֱ����;ֲ��������ƾ�����Ҫ��ͬ�����ײ���bug
//				//������������ͬʱ���ֲ���������
//
// 
//int main()
//{
//	//����
//	//20
//	int num = 10;	//�ֲ����� �������ڴ����{}�ڲ��ı�����
//
//	short age = 20;		//���ڴ�����2���ֽ�=16bitλ���������20
//	float weight = 95.6f;	//���ڴ�����4���ֽ�=32bitλ���������95.6
//
//	printf("%d\n", num);
//	return 0;
//}
// 
//int main()
//{
//	//����2�����ĺ�
//	//int num1 = 0;
//	//int num2 = 0;
//	////��������--ʹ�����뺯��
//	//scanf("%d%d",&num1,&num2);//&��ȡ��ַ����
//	//int sum = 0;
//	//sum = num1 + num2;
//
//	//printf("sum=%d\n", sum);
//
//	extern int g_val;		//ʹ�ò�ͬԴ�ļ��ı�������Ҫ�õ������ⲿ���ţ�extern
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