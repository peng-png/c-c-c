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
//    char* p = "abcdef";//"abcdef"��һ�������ַ���
//	*p = 'W';
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}
//www.stackoverflow.com
//segamentfault.com  �δ���

//int main()
//{
//	/*ָ������ ������
//	int arr[10] = { 0 };//��������
//	char ch[5] = { 0 };//�ַ�����
//	int* parr[4];//�������ָ�밢���� - ָ������
//	char* pch[5];//����ַ�ָ������� - ָ������*/
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

//����ָ��-ָ��

//int mian()
//{
//	//int* p = NULL;//p������ָ��-ָ�����͵�ָ��-���Դ�����͵ĵ�ַ
//	//char* pc = NULL;//
//	//����ָ��-ָ�������ָ��-�������ĵ�ַ
//
//	//int arr[10] = { 0 };
//	//arr-��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(* p)[10]=&arr;//����ĵ�ַҪ������
//	//�����p��������ָ��
//
//
//	return 0
//}

//int main()
//{
//	char *arr[5];
//	char* (*pa)[5] = &arr;//˵��pa��ָ��
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
//	print1(arr,3,5);//arr -������-������������Ԫ�ص�ַ
//	print2(arr, 3, 5);
//	return 0;
//}

//int main()
//{
//	int arr[5];//arr��һ��5��Ԫ�ص���������
//	int *parr1[10];//parr1��һ�����飬������10��Ԫ�أ�ÿ��Ԫ�ص�����int *��parr1��ָ������
//	int (*parr2)[20];//parr2��һ��ָ�룬��ָ��ָ����һ�����飬����10��Ԫ�أ�ÿ��Ԫ�ص�������int-parr2������ָ��
//	int(*parr3[10])[5];//parr3��һ�����飬��������10��Ԫ�أ�ÿ��Ԫ����һ������ָ�룬������ָ��ָ���������5��Ԫ�أ�ÿ��Ԫ����int
//	return 0;
//}

//int main()
//{
//	//�ַ�ָ��
//	char ch = 'w';
//	char* p = &ch;
//	const char *p2 = "abcdef";//a�׵�ַ��������
//
//    //ָ������ - ����- ���ָ�������
//	int * arr[10];
//	char *ch1[5];
//
//	//����ָ��  - ָ������
//	//int* p3;---����ָ��--ָ�����ε�ָ��
//	//char* p4;---�ַ�ָ��  -ָ���ַ���
//
//	int arr2[5];
//	int(*pa)[5]=&arr2;//ȡ������ĵ�ַ,pa����һ������ָ��
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
//	test(arr);//��ά���鴫��
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

//����ָ��--��ָ�������ָ��
//����ָ��--��ָ������ָ�� - ��ź�����ַ��һ��ָ��

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
//	//&arr ����
//	//arr; ������Ԫ�صĵ�ַ
//	//&������ �� ������ ���Ǻ����ĵ�ַ
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
//	//ָ������
//	//int* arr[5];//
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ-����ָ������
//	int(*pa)(int, int) = Add;//Sub/Mul/Div
//	int(*parr[2])(int, int) = {Add,Sub};//����ָ�������
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
////дһ������ָ��pf���ܹ�ָ��my-strcpy
//char* (*pf)(char*, const char*);
////дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
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
//void Calc(int(*pf)(int,int))//�ص�����
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������");
//	scanf("%d%d", &x, &y);
//	printf("%d", pf(x, y));
//
//}
////������
//int main()
//{
//	int input = 0;
//	
//	do 
//	{
//		menu();
//		printf("��ѡ��>");
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
//			printf("�˳�");
//			break;
//		default:
//			printf("ѡ�����");
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
//	//pfArr ��һ������ָ������
//	int(*pfArr[])(int, int) = {0,Add,Sub,Mul,Div,Xor};
//	do
//	{
//		menu();
//		printf("��ѡ��>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("����������������");
//			scanf("%d%d", &x, &y);
//			int ret = pfArr[input](x, y);
//			printf("%d\n", ret);
//		}
//		else if(input==0)
//		{
//			printf("�˳�");
//		}
//		else
//		{
//		   printf("ѡ�����");
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
//	int(*p)[10]=&arr;//ȡ������ĵ�ַ
//
//	int(*pf)(int, int);//����ָ��
//	int(*pfArr[4])(int, int);//pfArr��һ������-����ָ������

//	int(*(*ppfArr)[4])(int, int) =&pfArr;
//	//ppfArr ��һ������ָ�룬ָ��ָ���������4��Ԫ��
//	//ָ��������ÿ��Ԫ�ص�������һ������ָ��int(*)(int,int)
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
	//ð��������
	//ð��������ֻ��������������
	int arr
}
//qsort-���������������͵�����