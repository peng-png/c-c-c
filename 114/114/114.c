#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>

//int main()
//{
//	int age = 0;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}
//	else if (age > 18 && age < 28)
//		printf("青年\n");
//	else if(age>28 && age<50)
//		printf("壮年\n");
//	else if (age > 50 && age < 90)
//		printf("老年\n");
//	else//else可省略
//		printf("老不死\n");
//	return 0;
//}
//

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)
//	{
//		printf("hehe\n");
//	}
//	//if (num = 5)//= 赋值  ==判断相等
//	//{
//	//	printf("hehe\n");
//	//}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		if (i % 2==1)
//			printf(" %d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	if (i % 2 == 1)
//		printf("%d是奇数\n",i);
//	else
//		printf("%d是偶数\n",i);
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);//3
//	switch (day)
//	{
//	//case 1:
//	//	printf("星期1\n");	
//	//	break;
//	//case 2:
//	//    printf("星期2\n");
//	//	break;
//	//case 3:
//	//	printf("星期3\n");
//	//	break;//break跳出switch{}   break根据需求加
//	//case 4:
//	//	printf("星期4\n");
//	//	break;
//	//case 5:
//	//	printf("星期5\n");
//	//	break;
//	//case 6:
//	//	printf("星期6\n");
//	//	break;
//	//case 7:
//	//	printf("星期7\n");
//	//	break;
//	//default:-----无明确顺序随处可放，建议放后面
//	//	printf("输入错误");
//	//  braak;
//	case 1:
//		if (n == 1)
//			printf("hehe");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//
//	}
//	return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{//switch允许嵌套
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	default:
//		break;
//	}
//	printf("m=%d,n=%d", m, n);
//	//m=5,n=3
//	return 0;
//}


//int main()
//{
//	/*int i = 1;
//	while (i <= 100)
//	{
//		if (i == 5)
//			break;
//		printf(" %d ",i);
//		i++;
//	}*/
//
//	/*int i = 1;
//	while (i <= 100)
//	{
//		if (i == 5)
//			continue;
//		printf(" %d ", i);
//		i++;
//	}*/
//
//	int i = 1;
//	while (i <= 100)
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf(" %d ", i);
//	
//	}
//
//	return 0;
//}

//int main()
//{
//	/*int ch = getchar();
//	putchar(ch);*/
//
//	/*printf("%c\n", ch);*/
//	//int ch = 0;
//	////ctrl + z
//	////EOF_end of file  文件结束标志
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 }; 
//	printf("请输入密码；>");
//	
//	scanf("%s",password);//输入密码，并放在password数组中
//	//缓冲区还剩余一个‘\n’
//	//读取下一个‘\n’
//	while((ch=getchar()!='\n'));
//	printf("请确认（Y/N）：>");
//	
//	ret = getchar();//Y/N
//	if(ret=='Y')
//		printf("确认成功");
//	else
//		printf("放弃确认");
//
//	return 0;
//}

//int main()
//{
//	int i=0;
//	//初始化   判断   调整
//	for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf(" %d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	for (i =0; i < 10; i++)
//	{
//		if (i ==5)
//			printf("haha");
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	
//	for (i =0; i < 10; i++)
//	{
//		printf("%d\n", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	//变形1
//	//for循环的初始化、调整、判断都可以省略
//	//判断部分 如果被省略，那判断条件就是：恒为正
//	//如果不是非常熟练，建议大家不要随便省略
//	int i = 0;
//	int j = 0;
//	/*for (;;)
//	{
//		printf("hehe\n");
//	}*/
//	for (i=0; i < 10; i++)
//	{
//		for (j=0; j < 10; j++);
//		{
//			printf("hehe \n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 1; i++, k++)
//		k++;
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	do
//	{
//		i++;
//		if (i == 5)
//			continue;
//		printf(" %d ", i);
//	
//	}
//	while (i <= 10);
//	return 0;
//}

//计算1-10的阶乘
int main()
{
	int i = 10;
	int ret = 1;
	int z = 1;
	for (i = 1; i <= 10; i++)
	{
		ret = ret * i;
		
	}
	printf("%d", ret);
	return 0;
}





