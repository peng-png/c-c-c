#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>

//int main()
//{
//	int a;//局部变量不初始化，默认是随机值
//	int *p;//局部的指针变量，就被初始化随机值
//	*p = 20;
//	
//	int arr[10] = { 0 };
//	int *p = arr;
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		p++;
//	}
//	//指针越界访问
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* p = NULL;//NULL--用来初始化指针的，给指针赋值
//
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d\n", *p);
//		p+=2;
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p=&arr[9] - &arr[0];
//	int* printf("%p\n", arr[9]);
//
//	printf("%p\n", &arr[9] - &arr[0]);
//	return 0;
//}

//my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen-求字符串长度
//	//递归-模拟实现strlen-计数器的方式1，递归的方式2
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 0 };
//	printf("%p\n",arr);//地址-首元素的地址
//	printf("%p\n", arr + 1);
//	printf("%p\n",&arr[0]);
//	printf("%p\n", &arr[0] + 1);
//	printf("%p\n", &arr);//取出的是整个数组的地址
//	printf("%p\n", &arr+1);
//	//1.&arr-&数组名-数组名不是首元素的地址-数组名表示整个数组-&数组名-取出的是整个数组的地址
//	//2.sizeof（arr）-sizrof（数组名）-数组名表示整个数组-sizeof(数组名)计算的是整个数组的大小
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	/*for (i = 0; i < 10; i++)
//	{
//		printf(" %p =============== %p \n", p + i, &arr[i]);
//	}*/
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf(" %d ", *(p + i));
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int* * ppa = &pa;//ppa就是二级指针
//	**ppa = 20;
//	printf("%d", a);
//	printf("%d", **ppa);
//	printf("%d", *pa);
//	//int** * pppa = &ppa;
//	return 0;
//}

//指针数组--数组--存放指针的数组
//数组指针-指针

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	/*int* pa = &a;
//	int* pb = &b;
//	int* pc = &c;*/
//	//整型数组-存放整型
//	//字符数组-存放字符
//	//指针数组-存放指针
//	
//	int* arr[3] = {&a,&b,&c};//指针数组
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d \n",*(arr[i]));
//	}
//	return 0;
//}

//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{	
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	left++;
//	right++;
//     }
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//把数组初始化为0
//	Print(arr, sz);//打印
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}


//int main()
//{
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr[0]);
//	for (i - 0; i < sz; i++)
//	{
//		tmp = arr1[i];
//		arr1[i] = arr[i];
//		arr2[i] = tmp;
//	}		
//	return 0;
//}

#include <stdlib.h>

//int count_bit_onr(int n)
//{
//	int count = 0;
//	/*while (n)
//	{
//		if (n%2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}*/
////	int i = 0;
////	for (i = 0; i < 32; i++)
////	{
////		if (((n >> i) & 1) == 1)
////		{
////		count++;
////}
//	/*}*/
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
////n=n&(n-1)
////n
////13
////1101 n
////1100 n-1
////1100 n
////1011 n-1
////1000 n
////0111 n-1
////0000 n
//
//int main()
//{
//	int a = 0;	
//	scanf("%d", &a);
//	//写一个函数求a的二进制（补码）表示有几个1
//	int count = count_bit_onr(a);
//	//-1
//	//1000 0000 0000 0000 0000 0000 0000 0001
//	//1111 1111 1111 1111 1111 1111 1111 1110
//	//1111 1111 1111 1111 1111 1111 1111 1111
//	//0000 0000 0000 0000 0000 0000 0000 0001
//	//
//	//13
//	//0000 0000 0000 0000 0000 0000 0000 1101
//	//
//	//1231
//	printf("count=%d\n", count);
//	printf("0=%d\n",32-count);
//	//system("pause");//system-执行系统命令-pause（暂停）
//
//}
//
//int count_bit_one(int n)
//{
//	int count = 0;
//	
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}


//int get_iff_bit(int m,int  n)
//{
//	int tmp = m ^ n;
//	int count = 0;
//	//return count_bit_one(tmp);
//	while (tmp)
//	{
//		tmp = tmp & (tmp - 1);
//		count++;
//	}
//	return count;
//	
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m,&n);
//	int count=get_iff_bit(m, n);
//
//	printf("count=%d\n", count);
//	
//	return 0;
//}

//void print(int m)
//{
//	int i = 0;
//	printf("奇数位：\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf(" %d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("偶数位：\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf(" %d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//	
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str !='\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//void reverse_string(char arr[])
//{/*
//	int left = 0;
//	int right = my_strlen(arr) - 1;
//	while(left<right)
//	{
//	int tmp = arr[left];
//	arr[left] = arr[right];
//	arr[right] = tmp;
//	left++;
//	right--;e
//	}*/
//	char tmp = arr[0];
//	int len = mt_strlen(arr);
//	arr[0]=arr[len - 1];
//	arr[len - 1] = '\0';
//	if(my_strlen(arr+1) >= 2)
//	   reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//
//int main()
//{
//	char arr[] = "abcdef";//fedcba
//	//a和f的交换
//	//逆序b c d e
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}


int DigitSum(unsigned int num)
{
	if (num > 9)
	{
		return DigitSum(num / 10) + num % 10;
	}
	else
	{
		return num;
	}
}

int main()
{
	unsigned int num = 0;
	scnanf("%d", &num);
	int ret = DigitSum(num);
	printf("ret=%d\n", ret);
	return 0;
}