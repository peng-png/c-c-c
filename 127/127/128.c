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
//struct Stu3;//全局变量
//
//int main()
//{
//	//创建结构体变量
//	struct Stu s1;
//	struct Stu s2;
//	struct x;
//	px = &x;
//}

////数据结构：
////数据在内存中存储的结构
//
////链表 1-2-3-4-5
//
//struct Node
//{
//	int data;//4
//	struct Node* next;//4
//	//struct Node n;//err
//};
////数据域  结构域
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
////传值
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
//	//位段-2进制位
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

////枚举类型
//enum Sex
//{
//	//枚举可能取值-常量
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
//	//只能用一个
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
//	低地址---------------高地址
//	------11  22  33  44-------大端
//	------44  33  22  11-------小端
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

//c语言是可以创建变长数组 -c99增加了
//#include <stdlib.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	//向内存申请10个整型的空间
//	int* p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
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
//	//当动态申请的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	p = NULL;//
//	return 0;
//}