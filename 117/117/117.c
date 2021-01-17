#define _CRT_SECURE_NO_WARNINGS   1


#include <stdio.h>

//求第n个斐波那契数列
//1 1 2 3 5 8 13 21 34

//描述第n个斐波那契数

//int count = 0;


//int Fib(int n)//---递归
//{
//	if (n == 3)//测试第三个斐波那契的计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)//----循环
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	int i = 0;
//	while( n>2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;		
//	}
//	return c;
//}



//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD-测试驱动开发
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//创建一个数组--存放整型
//	int  arr1[10] = { 1,2,3 };//不完全初始化.剩下的元素默认初始化为0
//	char arr2[5] = {'a','b',98};
//	char arr3[5] = "ab";//ok
//	char arr4[] = "abcdef";
//	int arr5[5] = { 1,2,3,4,5 };
//
//	char arr11[] = "abc";            //  a  b  c  \0
//	char arr12[] = { 'a','b','c' };  //  a  b  c
//	printf("%d\n", sizeof(arr11));//4
//	printf("%d\n", strlen(arr11));//3
//	printf("%d\n", sizeof(arr12));//3
//	printf("%d\n", strlen(arr12));//随机值
//
//
//	printf("%d\n", sizeof(arr4));//7
//	printf("%d\n", strlen(arr4));//6
//	//sizeof 计算 arr4所占空间的大小  7个元素-char  7*1=7
//	//strlen 计算 字符串长度
//	//1.strlen和 sizeof么有什么关联
//	//2.strlen是求字符串长度的-只针对字符串长度--库函数
//	//3.sizeof计算变量、数组、类型的大小-单位是字节--操作符
//	printf("%s\n", arr2);//打印
//	printf("%s\n", arr4);//打印
//	printf("%d\n", arr5);//错误值
//	int n = 5;
//	//char ch[ n ];err--常量表达式
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,0 };
//	//printf("%c\n",arr[3]);
//	//int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < (int) strlen(arr); i++)
//	{
//		printf(" %c ", arr[i]);
//	}
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d ", arr1[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < 10; i++)
//	{
//	    printf("&arr[%d]= %p\n ",i,& arr[i]);
//	}
//	return 0;
//}
//
//int main()
//{
//	//不完全初始化
//	int arr[3][4] = {{1,2,3},{4,5}};//3行4列   第一行1，2，3第二行4，5
//	int arr1[3][4] = { {1,2,3,4},{5,6,7,8} };
//	int arr2[][4] = { {1,2,3,4},{5,6,7,8} };//行可以省略
//	//char ch[5][6];
//	int i = 0;
//	for (i= 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf(" %d ",arr[i][j]);
//		}
//		printf("\n");
//		//1 2 3 4
//		//4 5 0 0
//		//0 0 0 0
//	}
//	
//	return 0;
//}

//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i =0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			printf("arr[%d][%d]= %p\n ",i,j,&arr[i][j]);
//		}
//		
//	}
//	return 0;
//}

//冒泡排序
//10 9 8 7 6 5 4 3 2 1
//9 10 8 7 6 5 4 3 2 1
//9 8 10 7 6 5 4 3 2 1
//
//void bubble_sort(int sz,int arr[])
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//每一趟冒泡排序
//		int j = 0;
//		int flag = 1;//假设这一趟要排序的数据已经有序了
//		for (j = 0; j < sz-1-i; j++)
//		{		
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//本趟排序的数据其实不完全有序
//			}
//		}	
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 ,65,74,1,3,5,547,23,5,};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);	
//	//对arr进行排序，排成升序
//	//arr是数组，我们对数组arr进行传参，实际上传递过去的是数组arr首元素的地址
//	bubble_sort(sz,arr);//冒泡排序函数
//	for (i = 0; i < sz; i++)
//	{
//		printf(" %d ", arr[i]);
//	}
//	return 0;
//}

int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 ,65,74,1,3,5,547,23,5, };
	printf(" %p \n", arr);
	printf(" %p \n", arr+1);
	printf(" %p \n",& arr[0]);
	printf(" %p \n", &arr[0]+1);
	printf(" %d\n", *arr);
	return 0;
}


