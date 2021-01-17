#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>
#include <string.h>

//int main()
//{
//
//	printf("hello,lcbt\n");
//	goto again;
//	printf("您好\n");
//again:
//	printf("hehe\n");
//	return 0;

//int main()
//{
//	//shutdown-s-t  60
//	//system()-执行系统命令
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪：就取消关机\n请输入：");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)//比较两个字符串--stcrcmp
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum=add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//
//	//strcpy--string copy-----字符串拷贝
//	//strlen--string length---字符串长度有关
//	char arr1[] = "bit";
//	char arr2[] = "########";//\0是结束标志
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//memset---memory---内存  set---设置

//int main()
//{
//	char arr[] = "hello word";
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//void Swap1(int x, int y)//有问题
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int* x, int* y)
//{
//	int tmp = 0;
//	tmp =*x;
//	*x = *y;
//	*y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	/*int tmp = 0;*/
//	printf("a=%d,b=%d\n", a, b);
//	Swap1(a, b);
//	printf("a=%d,b=%d\n", a, b);
//	Swap2(&a,&b);
//	/*tmp = a;
//	a = b;
//	b = tmp;*/
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}
#include <math.h>
//写一个函数判断是不是素数
//打印100-200之间的素数

//是素数返回1，不是素数返回0
//2----n-1试除
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <=sqrt( n); j++)
//	{
//		if (n%j == 0)
//			return 0;
//	}		
//	return 1;
//	
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf(" %d ", i);
//	}
//	return 0;
//}

//
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0 )|| (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year < 2000; year++)
//	{
//		//判断year是否为闰年
//		if (is_leap_year(year) == 1)
//		{
//			printf(" %d ", year);
//		}
//	}
//	
//
//	return 0;
//}
                //本质上arr是一个指针
//int binary_search(int arr[], int k,int sz)
//{
//	//算法的实现	
//	int left = 0;
//	int right =sz - 1;	
//	//int mid = (left + right) / 2;
//	while(left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	//二分查找
//	//在一个有序数组中查找具体的某个数
//	//如果找到了返回下标，找不到，返回-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };	
//	int k = 7;	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr,k,sz);
//	if(ret == -1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//	printf("找到了，下标是；%d\n",ret);
//	}
//
//	return 0;
//}

//void add(int* p)
//{
//	(*p)++;
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	add(&num);
//	printf("num=%d\n", num);
//	return 0;
//}
//
//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//
//	printf("%d\n", strlen("abc"));
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
//}

//函数声明
//int add(int,int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//
////函数的定义
//int add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}

//int main()
//{
//	printf("hehe\n");
//	main();
//	return 0;
//}

//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf(" %d " , n % 10); 
//}
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d",&num);//1234
//	//递归
//	print(num);
//	//print(1234)
//	//print(123) 4
//	//print(12) 3  4 
//	//print(1) 2  3  4 
//	
//	return 0;
//}

#include <string.h>

//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}

//递归的方法
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
////把大事化小
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
//int main()
//{
//	char arr[] = "bitpopopsddssdfer";
//	//int len = strlen(arr);//求字符串长度
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr是数组，数组传参，传过去的是首元素的地址
//	printf("len=%d\n", len);
//	return 0;
//}

int Fac1(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret *= i;
	}
	return ret;
}
int Fac2(int n)
{

}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac2(n);
	printf("%d\n", ret);
	return 0;
}