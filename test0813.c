#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>

//ָ����������С(��sizeof��������С��
//32λƽ̨����4�ֽڴ�С��64λƽ̨����8�ֽڴ�С
//int main()
//{
//	double d = 3.14;
//	double* dp = &d;
//	//*dp = 2.17;
//	printf("%d\n", sizeof(dp));//��ӡdouble���ͣ�%lf
//								//��ӡint���ͣ�%d
//								//��ӡ�ַ���%c
//								//��ӡ�ַ�����%s
//	return 0;
//
//}

/*
*�ṹ��
*�ˡ�����Щ�������Ƚϸ��ӣ������ַ���������Щ�ǵ�һ����
* ��˽нṹ��
*/

//����һ���ṹ�壺��
struct Book
{
	//�ȶ���������ֵĴ�С���۸�����͵�����

	char name[20];//eg:C���Գ������
	short price;//55
};

int main()
{
	//���ýṹ�����ͣ�����һ�������͵Ľṹ�����
	struct Book b1 = { "c���Գ������",55 };
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);

	b1.price = 46.9;//�۸��Ǳ���������ֱ���޸ģ������Ǹ����飬����ֱ�Ӹ�

	strcpy(b1.name, "c++");//strcpy:string copy -- �ַ�������-�⺯��-string.h
		//Ŀ�ĵ�		����

	printf("�޸ĺ��������%s\n", b1.name);//��Ҫ����strcpy���������µ��ַ�������������Ŀ�ĵ�
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);

	//����pb��ӡ���������۸�ͨ��ָ���ȡ�������۸�
	//struct Book* pb = &b1;
	//printf("������%s\n", (*pb).name);
	//printf("�۸�%dԪ\n", (*pb).price);

	//printf("������%s\n", pb->name);//���ַ��������: ->
	//printf("�۸�%dԪ\n", pb->price);

	/*
	* . �� �ṹ�����.��Ա
	* ->�� �ṹ��ָ��->��Ա
	*/
	return 0;

}


