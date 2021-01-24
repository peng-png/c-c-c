#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>

//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;*/
//	/*char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);*/
//    char* p = "abcdef";//"abcdef"是一个常量字符串
//	*p = 'W';
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}
//www.stackoverflow.com
//segamentfault.com  段错误

//int main()
//{
//	/*指针数组 是数组
//	int arr[10] = { 0 };//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针阿数组 - 指针数组
//	char* pch[5];//存放字符指针的数组 - 指针数组*/
//	return 0;
//}

//int mian()
//{
//	int arr1[] = { 1,2,3,4,5};
//	int arr2[] = { 2,3,4,5,6};
//    int arr3[] = { 3,4,5,6,7};
//	int *parr[] = { arr1,arr2,arr3};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ",*(parr[i]+j));
//		}
//		printf("\n");
//		
//	}
//	return 0;
//}

//数组指针-指针

//int mian()
//{
//	//int* p = NULL;//p是整型指针-指向整型的指针-可以存放整型的地址
//	//char* pc = NULL;//
//	//数组指针-指向数组的指针-存放数组的地址
//
//	//int arr[10] = { 0 };
//	//arr-首元素地址
//	//&arr[0]-首元素地址
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(* p)[10]=&arr;//数组的地址要存起来
//	//上面的p就是数组指针
//
//
//	return 0
//}

//int main()
//{
//	char *arr[5];
//	char* (*pa)[5] = &arr;//说明pa是指针
//	int arr[10] = { 0 };
//	int (*pa2)arr[10] = &arr;
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(*pa+i));
//	}
//
//	return 0;
//}

//void print1(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void print2(int (*p)[5],int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr,3,5);//arr -数组名-数组名就是首元素地址
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[5];//arr是一个5个元素的整形数组
//	int *parr1[10];//parr1是一个数组，数组有10个元素，每个元素的类型int *，parr1是指针数组
//	int (*parr2)[20];//parr2是一个指针，该指针指向了一个数组，数组10个元素，每个元素的类型是int-parr2是数组指针
//	int(*parr3[10])[5];//parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int
//	return 0;
//}

//int main()
//{
//	//字符指针
//	char ch = 'w';
//	char* p = &ch;
//	const char *p2 = "abcdef";//a首地址不是整个
//
//    //指针数组 - 数组- 存放指针的数组
//	int * arr[10];
//	char *ch1[5];
//
//	//数组指针  - 指向数组
//	//int* p3;---整形指针--指向整形的指针
//	//char* p4;---字符指针  -指向字符的
//
//	int arr2[5];
//	int(*pa)[5]=&arr2;//取出数组的地址,pa就是一个数组指针
//
//	return 0;
//}

//void test(int arr[]){}//ok
//void test(int arr[10]) {}//ok
//void test2(int *arr[]) {}//ok
//void test2(int *arr[20]) {}//ok
//void test2(int **arr) {}//ok
//int main()
//{
//	int arr[10] = { 0 };
//	int* arr2[20] = { 0 };
//	test(arr);
//	test(arr2);
//	return 0;
//}


//void test(int arr[3][5]){}
//void test1(int arr[][5]) {}
//void test2(int arr[3][]) {}//err
//void test2(int arr[][]) {}//err
//void test3(int *arr){}//err
//void test4(int **arr){}//err
//void test5(int(*arr[5])){}
//int main()
//{
//	int arr[3][5];
//	int* arr2[3][5];
//	test(arr);//二维数组传参
//	test1(arr);
//	test3(arr);
//	test4(arr);
//	test5(arr);
//	return 0;
//}

//void test1(int** p){}
//
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	int** p2 = &p1;
//	test1(&a);//ok
//	test1(p2);//ok
//}

//数组指针--是指向数组的指针
//函数指针--是指向函数的指针 - 存放函数地址的一个指针

//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	int (*p)[10] = &arr;
//	//&arr 数组
//	//arr; 数组首元素的地址
//	//&函数名 和 函数名 都是函数的地址
//	//printf("%d",Add(a, b));
//	printf("%p\n", &Add);
//	printf("%p\n", Add);
//
//	int(*pa)(int,int)=Add;
//	printf("%d\n",(*pa)(2, 3));
//	return 0;
//}

//void print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void(*p)(char*)=print;
//	(*p)("hello bit");
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	//指针数组
//	//int* arr[5];//
//	//需要一个数组，这个数组可以存放4个函数的地址-函数指针数组
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[2])(int, int) = {Add,Sub};//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//
//	int(*parr1[10])();
//	int *parr2[20]();//err
//	int(*)()parr3[10];//err
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src);
//
////写一个函数指针pf，能够指向my-strcpy
//char* (*pf)(char*, const char*);
////写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pfArr[4])(char*, const char*);

//void menu()
//{
//	printf("\n******************************\n");
//	printf("****  1.add      2.sub  ******\n");
//	printf("****  3.mul      4.div  ******\n");
//	printf("****  5.Xor      0.exit *******\n");
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int Xor(int x, int y)
//{
//	return x ^ y;
//}
//void Calc(int(*pf)(int,int))//回调函数
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数");
//	scanf("%d%d", &x, &y);
//	printf("%d", pf(x, y));
//
//}
////计算器
//int main()
//{
//	int input = 0;
//	
//	do 
//	{
//		menu();
//		printf("请选择；>");
//		scanf("%d", &input);		
//		switch (input)
//		{
//		case 1:
//			Calc(Add);		
//			break;
//		case 2:
//			Calc(Sub);		
//			break;
//		case 3:
//			Calc(Mul);			
//			break;
//		case 4:
//			Calc(Div);		
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("选择错误");
//			break;
//		}
//	} while (input);
//
//}

//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	//pfArr 是一个函数指针数组
//	int(*pfArr[])(int, int) = {0,Add,Sub,Mul,Div,Xor};
//	do
//	{
//		menu();
//		printf("请选择；>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个操作数");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("退出");
//		}
//		else
//		{
//		   printf("选择错误");
//         }
//	} while (input);
//}

//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int(*p)[10]=&arr;//取出数组的地址
//
//	int(*pf)(int, int);//函数指针
//	int(*pfArr[4])(int, int);//pfArr是一个数组-函数指针数组

//	int(*(*ppfArr)[4])(int, int) =&pfArr;
//	//ppfArr 是一个数组指针，指针指向的数组有4个元素
//	//指向的数组的每个元素的类型是一个函数指针int(*)(int,int)
//	return  0;
//}
//
//void print(char* str)
//{
//	printf("hehe;%s", str);
//}
//void test(void(*p)(char*))
//{
//	printf("test\n");
//	p("bit");
//}
//int main()
//{
//	
//	test(print);
//	return 0;
//}

int main()
{
	//冒泡排序函数
	//冒泡排序函数只能排序整形数组
	int arr
}
//qsort-可以排序任意类型的数据