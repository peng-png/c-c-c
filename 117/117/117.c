#define _CRT_SECURE_NO_WARNINGS   1


#include <stdio.h>

//���n��쳲���������
//1 1 2 3 5 8 13 21 34

//������n��쳲�������

//int count = 0;


//int Fib(int n)//---�ݹ�
//{
//	if (n == 3)//���Ե�����쳲������ļ������
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}

//int Fib(int n)//----ѭ��
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
//	//TDD-������������
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	//printf("count=%d\n", count);
//	return 0;
//}

#include <string.h>

//int main()
//{
//	//����һ������--�������
//	int  arr1[10] = { 1,2,3 };//����ȫ��ʼ��.ʣ�µ�Ԫ��Ĭ�ϳ�ʼ��Ϊ0
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
//	printf("%d\n", strlen(arr12));//���ֵ
//
//
//	printf("%d\n", sizeof(arr4));//7
//	printf("%d\n", strlen(arr4));//6
//	//sizeof ���� arr4��ռ�ռ�Ĵ�С  7��Ԫ��-char  7*1=7
//	//strlen ���� �ַ�������
//	//1.strlen�� sizeofô��ʲô����
//	//2.strlen�����ַ������ȵ�-ֻ����ַ�������--�⺯��
//	//3.sizeof������������顢���͵Ĵ�С-��λ���ֽ�--������
//	printf("%s\n", arr2);//��ӡ
//	printf("%s\n", arr4);//��ӡ
//	printf("%d\n", arr5);//����ֵ
//	int n = 5;
//	//char ch[ n ];err--�������ʽ
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
//	//����ȫ��ʼ��
//	int arr[3][4] = {{1,2,3},{4,5}};//3��4��   ��һ��1��2��3�ڶ���4��5
//	int arr1[3][4] = { {1,2,3,4},{5,6,7,8} };
//	int arr2[][4] = { {1,2,3,4},{5,6,7,8} };//�п���ʡ��
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

//ð������
//10 9 8 7 6 5 4 3 2 1
//9 10 8 7 6 5 4 3 2 1
//9 8 10 7 6 5 4 3 2 1
//
//void bubble_sort(int sz,int arr[])
//{
//	//ȷ��ð�����������
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ��ð������
//		int j = 0;
//		int flag = 1;//������һ��Ҫ����������Ѿ�������
//		for (j = 0; j < sz-1-i; j++)
//		{		
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//���������������ʵ����ȫ����
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
//	//��arr���������ų�����
//	//arr�����飬���Ƕ�����arr���д��Σ�ʵ���ϴ��ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	bubble_sort(sz,arr);//ð��������
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


