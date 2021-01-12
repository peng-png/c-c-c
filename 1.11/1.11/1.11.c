#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int line = 0;
//	printf("加入创百特\n");
//	while (line <= 20000)
//	{
//		printf("敲一行代码:%d\n",line);
//		line++;
//	}
//	if (line > 20000);
//	printf("迎娶白富美\n");
//}



//int main()
//{
//	printf("hello\n");
//	return 0;
//}

////char--字符类型
//int main()
//{
//	char ch = 'A';//内存
//	printf("%c\n",ch);//%c--打印字符格式的数据
//	return 0;
//}
//int main()
//{
//	float f = 5.0;
//	float q = 5;
//	double w = 5;
//	double e = 5.0;
//	printf("%f\n", f);
//	printf("%f\n", q);
//	printf("%lf\n", w);
//	printf("%f\n", w);
//	printf("%lf\n", e);
//	return 0;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	//int a = 10;
//	//局部变量和全局变狼的名字建议不要相同-容易误会，产生bug
//	printf("%d\n",a);//局部变量优先于全局变量
//	return 0;
//}
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//}

//int main()
//{
//	计算2个数的和
//	int a = 0;
//	int b = 0;
//	
//	输入数据---使用输入函数
//	&-----取地址符号
//	scanf("%d%d", &a,& b);
//	C语言语法规定，变量要定义在当前代码块的最前面
//	int c = 0;
//	c = a + b;
//	printf("%d\n", c);
//	return 0;
//
//}
//int main()
//{
//	//局部变量的作用域
//	{int num = 0;
//	printf("num=%d\n", num);//哪里能用就是哪里的作用域
//	}
//	return 0;
//}

//int a = 10;
//void test()
//{
//	printf("%d", a);
//}
//int main()
//{
//	test();
//	printf("%d", a);
//}

//int main()
//{  
//	//声明extern外部符号的
//	extern int a;
//	printf("%d\n", a);//打印test（）a=10；
//}

//int main()
//{ 
//	//const---常属性
//	const int num = 4;
//	printf("%d\n", num);
//	
//	// 100---字面常量
//	return 0;
//}

//int main()
//{
//	const int n = 10;//n是变量，但是又有常属性，所以我们说n是常变量
//	//int arr[n] = { 0 };
//}
//
//#define n  10
//#define 定义的标识符常量
//int main()
//{
//	int arr[n] = { 0 };
//	printf("%d\n", n);
//	return 0;



//enum Sex
//{
//	man,
//	female,
//	secret,
//
//};
//
//int main()
//{
//	//枚举--一一列举
//	//
//	//性别；男、女、保密
//	//三原色：红、黄、蓝
//	//星期：1、2、3、4、5、6、7
//
//	//枚举关键---enum
//
//	enum Sex s = 0;
//	printf("%d\n", man);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	printf("%c\n", s);
//	return 0;
//}


//int main()
//{
//	char arr1[]="abc";//数组  
//	//“abc”‘a’‘b’‘c’‘/0’----‘/0’字符串的结束标志
//	//数据在计算机上存储的时候，存储的是2进制
//	//‘a’--97
//	//‘A’--65
//	//ASCII   编码  
//	char arr2[] = { 'a','b','c' }; // 内存放入a，b，c
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//abc烫烫烫烫蘟bc	
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0};
//	printf("%d\n",strlen(arr1));//strlen--string length---计算字符串长度
//	printf("%d\n",strlen(arr2));
//	//打印3
//	//打印15  随机值
//	return 0;
//}

//int main()
//{
//	printf("%s","\"");
//	return 0;
//}

//int main()
//{
//	printf("%c\n", "\x61");
//	//打印13
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学习吗？（1/0）\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
////}
//
//int main()
//{
//	printf("加入比特\n");
//}

//int add(int x, int y)
//{
//	int z=x + y;
//	return z;
//}
//
//int main()
//{
//	int a1 = 10;
//	int a2 = 20;
//	int a3 = 30;
//	int a4 = 40;
//	int z=add(a1, a2);
//	int x = add(a3, a4);
//	printf("%d\n", z);
//	printf("%d\n", x);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	//整型1占4个字节
//	//00000000000000000000000000000001
//	int b=a << 1;
//	//00000000000000000000000000000010
//	int c = a << 2;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//（2进制）位操作
//	//&按位与
//	//|按位或
//	//^按位异或  对应的2进制位相同，则为0，相反为则为1
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//2进制
//	//1       1      1       1
//	//8       4      2       1
//	printf("%d\n", c);
//	//0000 0000 0000 0000 0000 0000 0000 0011=3
//	//0000 0000 0000 0000 0000 0000 0000 0101=5
//    //0000 0000 0000 0000 0000 0000 0000 0001=1
//	printf("%d\n", d);
//	//0000 0000 0000 0000 0000 0000 0000 0011=3
//	//0000 0000 0000 0000 0000 0000 0000 0101=5
//	//0000 0000 0000 0000 0000 0000 0000 0111=5
//	printf("%d\n", e);
//	//0000 0000 0000 0000 0000 0000 0000 0011=3
//	//0000 0000 0000 0000 0000 0000 0000 0101=5
//	//0000 0000 0000 0000 0000 0000 0000 0110=6
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	a = 20;//= 赋值  ==判断相等
//	a = a + 10;//
//	a += 10;//两种写法完全相等
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = 10;
//	//a + b;//+ 双目操作符
//	//C语言中我们表示真假
//	//0-假
//	//非0-真
//	/*int a = 0;*/
//	//int a = -2;
//	//int b = -a;
//	//int c = +3;//正号一般省略
//	//int a = 10;
//
//	//printf("%d\n", a);
//	////sizeof 计算的是变量/类型所占空间的大小，单位是字节
//	//printf("%d\n", sizeof(a));
//	int sz = 0;
//	int arr[10] = { 0 };//10个整型元素的数组
//	printf("%d\n", sizeof(arr));
//	//计算数组元素个数
//	sz = sizeof(arr) / sizeof(arr[1]);
//	printf("sz=%d\n", sizeof(sz));
//000
//	return 0;
//}

int main()
{
	//字符串的结束标志：‘\0’
	//'\0'
	//0  ->数字0
	//'0'->48
	return 0;
}