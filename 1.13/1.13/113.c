#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

//~---����2���ƣ�λȡ��
//int main()
//{
//	int a = 0;
//	//0000 0000 0000 0000 0000 0000 0000 0000 
//	int b = ~a;//b���з��ŵ�����
//	//1111 1111 1111 1111 1111 1111 1111 1111----  -1
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	printf("%d\n", b);//ʹ�õģ���ӡ�����������ԭ��
//	//��ӡ��1
//    //ԭ�롢���롢����
//	//�������ڴ��д洢��ʱ�򣬴洢���Ƕ����ƵĲ���
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//����++����ʹ�ã���++
//	//int b = ++a;//ǰ��++����++����ʹ��
//	//int b = a--;
//	int b = --a;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//
//int main()
//{
//	//0-------��
//	//��0-----��
//	//&&�߼���
//	//||�߼���
//	int a = 0;
//	int b = 0;
//	int c=a  && b;
//	int d= a || b;
//	printf("c=%d\n", c);
//	printf("d=%d\n", d);
//	return 0;
//}

//int main()
//{
//	//exp1?exp2:exp3;
//	int a = 10;
//	int b = 20;
//	//int max = 0;
//	
//	/*if (a > b)
//		max = a;
//	else
//		max = b;*/
//	max(a > b ? a : b);
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	auto int a = 10;//�ֲ�����--�Զ�����a ʡ�Ե�
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//�����a����ɼĴ�������
//	int a = 10;
//	a = -2;
//	//int ����ı������з��ŵ�
//	signed int a = 3;//һ��ʡ��
//	return 0;
//}

//int main()
//{
//	//typedef//���Ͷ���--�����ض���
//	typedef   unsigned int    u_int;
//	u_int num = 20;
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a��̬�ľֲ�����
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	//��ӡ 2 2 2 2 2 2
//	return 0;
//}

//�����ⲿ����
//extern  int Add(int, int);
// 
//int main()
//{
//	//extern---�����ⲿ���ŵ�
//	//extern int val;
//	int a = 10;
//	int b = 20;
//	int sum =Add(a, b);
//	printf("sum=%d", sum);
//
//	return 0;
//}

//��Ķ���


//#define   Max(X,Y)  (X>Y?X:Y)
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}
//
//int main()
//{
//	int a = 10;//����4���ֽ�
//    int* p=&a;//&ȡ��ַ
//	//��һ�ֱ�����������ŵ�ַ��--ָ�����
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p=20;//*--�����ò�����
//	printf("%d\n", a);
//	return 0;
//}

//int main()
//{
//	char ch = 'w';
//	char* pc = &ch;
//	*pc = 'a';
//	printf("%c", ch);
//	return 0;
//}
//
//int main()
//{
//	//int a = 10;
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	//printf("%p\n", &a);
//	//int*p = &a;
//	//*p = 20;
//	//printf("%d\n", a);
//	printf("%lf\n", d);
//	printf("%d\n", sizeof(pd));
//	return 0;
//}
//
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(double*));
//	return 0;
//}


#include <string.h>

struct people
{
	char name[20];//c���Գ������
	short price;//55


};

int main()
{
	//���ýṹ������--����һ���ýṹ�����͵Ľṹ�����
	struct people b1 = { "c���Գ������",55 };
	struct people *pb=&b1;
	printf("%p\n",&b1);
	//����pb��ӡ���ҵ������ͼ۸�
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//->
	printf("111   %s\n", pb->name);
	printf("222   %d\n", pb->price);
	//��-���֡����䡢��ߡ��ȵ�
	printf("������%s\n", b1.name);
	printf("�۸�%dԪ\n", b1.price);
	strcpy(b1.name,"C++");//strcpy-string copy---�ַ�������
	b1.price = 15;
	printf("�޸�������%s\n", b1.name);
	printf("�޸ĺ�ļ۸�%dԪ\n", b1.price);

	return 0;
}