#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>

//struct Stu
//{
//	char name[20];
//	char tele[12];
//	int age;
//}s4,s5,s6;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}x;
//
//struct
//{
//	int a;
//	char b;
//	float c;
//}* px;
//
//struct Stu3;//ȫ�ֱ���
//
//int main()
//{
//	//�����ṹ�����
//	struct Stu s1;
//	struct Stu s2;
//	struct x;
//	px = &x;
//}

////���ݽṹ��
////�������ڴ��д洢�Ľṹ
//
////���� 1-2-3-4-5
//
//struct Node
//{
//	int data;//4
//	struct Node* next;//4
//	//struct Node n;//err
//};
////������  �ṹ��
//int main()
//{
//	sizeof(struct Node);
//	return 0;
//}

//typedef struct Node
//{
//	int data;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//}


//struct S
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//
//int main()
//{
//	struct S s = { 'c',100,3.14,"hello bit" };
//	printf("%c %d %lf %s \n", s.c, s.a, s.d, s.arr);
//	return 0;
//}

//struct S1
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//struct S2
//{
//	char c1;
//	char c2;
//	char c3;
//	char c4;
//	char c5;
//	int a;
//};
//struct S3
//{
//	double b;
//	char c;
//	int i;
//};
//struct S4
//{
//	
//	char c1;
//	struct S3 s3;
//	double b;	
//};
//int main()
//{
//
//	struct S4 s4 = { 0 };
//	printf("%d\n", sizeof(s4));//8
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
////��ֵ
//void Init(const struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	printf("%d %c %lf",s.a,s.c,s.d);
//	return 0;
//}

//struct S
//{
//	//λ��-2����λ
//	//47-bit
//	int _a : 2;
//	int _b : 5;
//	int _c : 10;
//	int _d : 30;
//};
//struct A
//{
//	char a : 3;
//	char b : 4;
//	char c : 5;
//	char d : 4;
//};
//int main()
//{
//	struct S s;
//	struct A a = {0};
//
//	a.a = 10;
//	a.b = 20;
//	a.c = 3;
//	a.d = 4;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

////ö������
//enum Sex
//{
//	//ö�ٿ���ȡֵ-����
//	male,
//	female,
//	secret
//};
//enum Color
//{
//	red=2,
//	green=4,
//	blue=8
//};
//
//
//int main()
//{
//	enum Sex s = male;
//	s = female;
//	enum Color c = blue;
//	printf("%d %d %d \n", red, green, blue);
//	return 0;
//}
//
//union UN
//{
//	//ֻ����һ��
//	char c;
//	int i;
//};
//
//int main()
//{
//	union UN u;
//	printf("%d\n", sizeof(u));
//	printf("%p\n", &(u));
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//int main()
//{
//	int a = 0x11223344;
//	�͵�ַ---------------�ߵ�ַ
//	------11  22  33  44-------���
//	------44  33  22  11-------С��
//	return 0;
//}

//struct S
//{
//	char name[20];
//	int age;
//
//};
//int main()
//{
//	return 0;
//}

//c�����ǿ��Դ����䳤���� -c99������
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//���ڴ�����10�����͵Ŀռ�
//	int* p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;//
//	return 0;
//}