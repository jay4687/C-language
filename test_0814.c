#define _CRT_SECURE_NO_WARNINGS 1
/*
* C������һ�Žṹ���ĳ����������
* ������ֻ�����ֽṹ��
* 1.˳��ṹ
* 2.ѡ��ṹ����C�����м���֧���
* 3.ѭ���ṹ����C�����м�ѭ�����
* 
* C�����У���;�ֺŸ����ľ���һ�����
* 
*/


		/*��֧���*/

	/*if���*/
#include<stdio.h>

//int main()
//{
//	int age = 5;
//	if (age < 18) {
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if(age >= 18 && age < 40) {
//		printf("����\n");
//	}
//	else if (age >= 40 && age < 60) {
//		printf("׳��\n");
//	}
//	else if (age >= 60 && age < 90) {
//		printf("����\n");
//	}
//	else {
//		printf("�ϲ�����\n");
//	}
//
//	return 0;
//}

/*c�����У�0��ʾ�٣���0��ʾ��*/
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
//	//����else��else�Զ��������������δƥ��else��if��ƥ��
//}

//��ϰ1���ж�һ�����Ƿ�Ϊ����
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	if ((num%2) == 1) {
//		printf("a������\n");
//	}
//	else {
//		printf("a��������\n");
//	}
//	return 0;
//}

//��ϰ2�����1-100֮�������
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


	/*switch���,��Ҫʵ�ֶ��֧���*/

//int main()
//{
//	int day = 0;
//	scanf("%d", & day);
//	switch (day)//switch��������ֻ�������ͱ��ʽ����day��������float�Ͳ���
//	{
//	case 1://case���Ҳֻ�ܸ����ͳ���
//		printf("����һ");
//		break;
//	case 2:
//		printf("���ڶ�");
//		break;
//	case 3:
//		printf("������");
//		break;
//	case 4:
//		printf("������");
//		break;
//	case 5:
//		printf("������");
//		break;
//	case 6:
//		printf("������");
//		break;
//	case 7:
//		printf("������");
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
//		printf("������");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��");
//		break;
//
//		//��default������������������defaultλ�ÿ�����ţ����������
//	default:
//		printf("�����������������");
//		break;
//	}
//}


//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)//��nΪ��ڣ�n=1��ִ��case1
//	{
//	case 1: 
//		m++;//m=3
//	case 2: 
//		n++;//n=2
//	case 3: 
//		switch (n)//��nΪ��ڣ�n=2��ִ��case2
//		{//switch����Ƕ��ʹ��
//		case 1:
//			n++;
//		case 2:
//			m++;//m=4
//			n++;//n=3
//			break;//������ִ��case4
//		}
//	case 4:
//		m++;//m=5
//		break;//������m=5,n=3
//	default:
//		break;
//
//	}
//	printf("m = %d,n = %d\n", m, n);
//
//}


		/*ѭ�����*/
	/*whileѭ��*/
//whileΪ�棬��һֱѭ����1Ϊ�棬0Ϊ��

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
break����ֹ
continue�Ǳ��β�ִ��
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
//	//EOF -- end of file ֵΪ-1
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	
//	return 0;
//
//}

