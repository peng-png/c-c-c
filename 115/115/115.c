#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>


//计算1-10的阶乘
//int main()
//{
//	int i = 10;
//	int ret = 1;
//	int z = 1;
//	for (i = 1; i <= 10; i++)
//	{
//		ret = ret * i;
//
//	}
//	printf("%d", ret);
//	return 0;
//}

//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//	printf("ret=0%d\n", ret);
//	return 0;
//}

//计算1+23456789-+10的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;	
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{			
//			ret = ret * i;
//		}
//		//n的阶乘
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//优化
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;		
//		//n的阶乘
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//在一个有序的数组中查找具体的某个数字n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//写一个代码，在arr数组（有序的）中找到7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n", i);
//	}
//	return 0;
//}

//折半查找算法   二分查找算法
//log2n



//int main()
//{
//	//welcome to lcbt!!!!!
//	//####################
//	//w##################!
//	//we################!!
//	//...
//	//welcome to lcbt!!!!!
//	char arr1[] = " welcome to lcbt!!!!!";
//	char arr2[] = "#####################";	
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	int left = 0;
//	//int righrt = sizeof(arr1) / sizeof(arr1[0])-2;//   字符串
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//休息一秒
//		Sleep(1000);
//		system("cls");//执行系统命令的函数-cls-清空屏幕		
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//	
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：》");
//		scanf("%s", password);
//		if (strcmp(password ,"123456")==0)//==不能用来比较两个字符串是否相等，应该使用一个库函数-strcmp
//		{
//			printf("登录成功\n");
//		    break;
//		}
//		else
//		{
//			printf("登录失败\n");
//		}
//	}
//	if(i==3)
//		printf("三次密码军错误，请退出程序\n");
//		return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//算法实现
//	//a中放最大值
//	//b次之
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if(a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf(" %d %d %d ", a, b, c);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf(" %d ", i);
//	}
//	return 0;
//}


//辗转相除法  最大公约数
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m%n)
//	{
//		//r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//打印闰年

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被1000整除是如年
//		//2.能被400整除是闰年
//	/*	if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf(" %d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf(" %d ", year);
//			count++;
//		}*/
//		if(((year%4==0)&&(year%100!=0))||(year % 400 == 0))
//		{
//			printf(" %d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}


//打印素数

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断规则
//		//1.试除法
//		//产生2->i-
//		for (j = 2;j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			count++;
//			printf(" %d ", i);
//		}
//
//	}
//	printf("\ncount=%d", count);
//	return 0;
//}
//sqrt--开平方的数学库函数


//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if ( i % 10 == 9)
//			count++;
//		if(i/10==9)
//			count++;
//	}
//	//09  19 29 39 49 59 69 79 89 
//	//90  91 92 93 94 95 96 97 98 99
//	printf("count=%d", count);
//	return 0;
//}

//计算1/1-1/2+。。。+1/99-1/100
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i; 
//		flag = -flag;
//	}
//	printf("%lf", sum);
//	//1/1+1/2+1/3
//	//1+0+0+0...=1
//	return 0;
//}


//int main()
//{
//	int arr[] = {-1,-2,-3 };
//	int max = arr[0];//最大值
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//在屏幕上打印乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//确定打印9行
//	for (i = 1; i <= 9; i++)
//	{
//		//打印一行
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <time.h>

//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字

void menu()
{
	printf("******************************\n");
	printf("***** 1.play    0.exit   *****\n");
	printf("******************************\n");
}

void game()
{
	//1.生成一个随机数、
	int ret = 0;
	int guess = 0;
	//拿时间戳来设置随机数的生成起始点
	//time_t time(time_t *timer)
	ret=rand()%100+1;//生成1-100之间随机数
	//printf("%d\n", ret);
	//2.猜数字
	while (1)
	{
		printf("请猜数字；>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("猜大了；\n");
		}
		else if (guess < ret)
		{
			printf("猜小了；\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	
	}
	
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择>：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n：");
			break;
		default:
			printf("选择错误\n：");
			break;
		}
	} while (input);
	return 0;
}