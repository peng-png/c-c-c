#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>


//����1-10�Ľ׳�
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

//����n�Ľ׳�
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

//����1+23456789-+10�Ľ׳�
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
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//�Ż�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = ret * n;		
//		//n�Ľ׳�
//		sum = sum + ret;
//	}
//	printf("sum=%d\n", sum);
//	return 0;
//}

//��һ������������в��Ҿ����ĳ������n
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	//дһ�����룬��arr���飨����ģ����ҵ�7
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n", i);
//	}
//	return 0;
//}

//�۰�����㷨   ���ֲ����㷨
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
//	//int righrt = sizeof(arr1) / sizeof(arr1[0])-2;//   �ַ���
//	int right = strlen(arr1)-1;
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		//��Ϣһ��
//		Sleep(1000);
//		system("cls");//ִ��ϵͳ����ĺ���-cls-�����Ļ		
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
//		printf("���������룺��");
//		scanf("%s", password);
//		if (strcmp(password ,"123456")==0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��-strcmp
//		{
//			printf("��¼�ɹ�\n");
//		    break;
//		}
//		else
//		{
//			printf("��¼ʧ��\n");
//		}
//	}
//	if(i==3)
//		printf("����������������˳�����\n");
//		return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�㷨ʵ��
//	//a�з����ֵ
//	//b��֮
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


//շת�����  ���Լ��
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

//��ӡ����

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//�ж�year�Ƿ�Ϊ����
//		//1.�ܱ�4�������Ҳ��ܱ�1000����������
//		//2.�ܱ�400����������
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


//��ӡ����

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//�ж�i�Ƿ�Ϊ����
//		//�����жϹ���
//		//1.�Գ���
//		//����2->i-
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
//sqrt--��ƽ������ѧ�⺯��


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

//����1/1-1/2+������+1/99-1/100
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
//	int max = arr[0];//���ֵ
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

//����Ļ�ϴ�ӡ�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	//ȷ����ӡ9��
//	for (i = 1; i <= 9; i++)
//	{
//		//��ӡһ��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ",i,j,i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#include <time.h>

//��������Ϸ
//1.���Ի�����һ�������
//2.������

void menu()
{
	printf("******************************\n");
	printf("***** 1.play    0.exit   *****\n");
	printf("******************************\n");
}

void game()
{
	//1.����һ���������
	int ret = 0;
	int guess = 0;
	//��ʱ����������������������ʼ��
	//time_t time(time_t *timer)
	ret=rand()%100+1;//����1-100֮�������
	//printf("%d\n", ret);
	//2.������
	while (1)
	{
		printf("������֣�>");
		scanf("%d", &guess);
		if (guess > ret)
		{
			printf("�´��ˣ�\n");
		}
		else if (guess < ret)
		{
			printf("��С�ˣ�\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
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
		printf("��ѡ��>��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n��");
			break;
		default:
			printf("ѡ�����\n��");
			break;
		}
	} while (input);
	return 0;
}