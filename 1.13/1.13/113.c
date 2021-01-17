#define _CRT_SECURE_NO_WARNINGS  1

#include <stdio.h>

//~---按（2进制）位取反
//int main()
//{
//	int a = 0;
//	//0000 0000 0000 0000 0000 0000 0000 0000 
//	int b = ~a;//b是有符号的整型
//	//1111 1111 1111 1111 1111 1111 1111 1111----  -1
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	printf("%d\n", b);//使用的，打印的是这个数的原码
//	//打印—1
//    //原码、反码、补码
//	//负数在内存中存储的时候，存储的是二级制的补码
//
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	//int b = a++;//后置++，先使用，再++
//	//int b = ++a;//前置++，先++，后使用
//	//int b = a--;
//	int b = --a;
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//
//int main()
//{
//	//0-------假
//	//非0-----真
//	//&&逻辑与
//	//||逻辑或
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
//	auto int a = 10;//局部变量--自动变量a 省略掉
//	return 0;
//}

//int main()
//{
//	//register int a = 10;//建议把a定义成寄存器变量
//	int a = 10;
//	a = -2;
//	//int 定义的变量是有符号的
//	signed int a = 3;//一般省略
//	return 0;
//}

//int main()
//{
//	//typedef//类型定义--类型重定义
//	typedef   unsigned int    u_int;
//	u_int num = 20;
//
//	return 0;
//}

//void test()
//{
//	static int a = 1;//a静态的局部变量
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
//	//打印 2 2 2 2 2 2
//	return 0;
//}

//声明外部函数
//extern  int Add(int, int);
// 
//int main()
//{
//	//extern---声明外部符号的
//	//extern int val;
//	int a = 10;
//	int b = 20;
//	int sum =Add(a, b);
//	printf("sum=%d", sum);
//
//	return 0;
//}

//宏的定义


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
//	int a = 10;//申请4个字节
//    int* p=&a;//&取地址
//	//有一种变量是用来存放地址的--指针变量
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	*p=20;//*--解引用操作符
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
	char name[20];//c语言程序设计
	short price;//55


};

int main()
{
	//利用结构体类型--创建一个该结构体类型的结构提变量
	struct people b1 = { "c语言程序设计",55 };
	struct people *pb=&b1;
	printf("%p\n",&b1);
	//利用pb打印出我的书名和价格
	printf("%s\n", (*pb).name);
	printf("%d\n", (*pb).price);
	//->
	printf("111   %s\n", pb->name);
	printf("222   %d\n", pb->price);
	//人-名字、年龄、身高、等等
	printf("书名：%s\n", b1.name);
	printf("价格：%d元\n", b1.price);
	strcpy(b1.name,"C++");//strcpy-string copy---字符串拷贝
	b1.price = 15;
	printf("修改书名：%s\n", b1.name);
	printf("修改后的价格：%d元\n", b1.price);

	return 0;
}