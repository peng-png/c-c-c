#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	//ָ������
//	int* arr[10];
//	//����ָ��
//	int* (*pa)[10] = &arr;
//	//����ָ��
//	int (*pAdd)(int,int) = Add;//&Add
//	//int sum = (*pAdd)(1, 2);
//	int sum = pAdd(1, 2);
//	printf("sum=%d\n", sum);
//	//����ָ�������
//	int(*pArr[4])(int, int);
//	//ָ����ָ�������ָ��
//	int(*(*ppArr[4]))(int,int)=&pArr;
//	
//
//	return 0;
//}

//#include <stdlib.h>
//#include <string.h>
//
////void bubble_sort(int arr[],int sz)
////{
////	int i = 0;
////	for (i = 0; i < sz; i++)
////	{
////		//һ��ð������
////		int j = 0;
////		for (j = 0; j < sz-1-i ;j++)
////		{
////			int tmp = arr[j];
////			arr[j] = arr[j + 1];
////			arr[j + 1] = tmp;
////	     }
////	}
////}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_int(const void* e1,const void* e2)
//{
//	//�Ƚ���������ֵ��
//	return *(int*)e1- *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d \n", arr[i]);
//	}
//}
//int cmp_float(const void* e1, const void* e2)
//{
//	/*if (*(float*)e1 == *(float*)e2)
//		return 0;
//	else if (*(float*)e1 > *(float*)e2)
//		return 1;
//	else
//		return -1;*/
//	return ((int)(*(float*)e1 - *(float*)e2));
//}
//void test2()
//{
//	float f[] = { 9.0,8.0,7.0,6.0,5.0,4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]),cmp_float);
//	int j = 0;
//	for (j = 0; j < sz; j++)
//	{
//		printf("%f \n", f[j]);
//	}
//
//}
//int cmp_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//	
//}
//int cmp_stu_by_name(const void* e1, const void* e2)
//{
//	//�Ƚ����־��ǱȽ��ַ���
//	//�ַ����Ƚϲ���ֱ����><=��Ӧ����strcmp����
//	return strcmp(((struct Stu*)e1)->name,((struct Stu*)e2)->name);
//}
//void test3()
//{
//	struct Stu s[3] = { {"����",20}, {"����",30} ,{"����",10}};
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), cmp_stu_by_age);
//	//��һ���������������������Ԫ�ص�ַ
//    //�ڶ��������������������Ԫ�ظ���
//	//�����������������������ÿ��Ԫ�ش�С-��λ���ֽ�
//	//���ĸ��������Ǻ���ָ�룬�Ƚ�����Ԫ�ص����ú����ĵ�ַ-�������ʹ�����Լ�ʵ��
//	//����ָ������������ǣ����Ƚ�����Ԫ�صĵ�ַ
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", s[i].age);
//	}
//
//}
////void qsort(void *base,
////	size_t num,
////	size_t width,
////	int( *cmp)(const void *e1,const void *e2));
////ʵ��bubble_sort�����ĳ���Ա�����Ƿ�֪��δ���������������-��֪��
////�ǳ���ԱҲ��֪�������Ƚϵ�����Ԫ�ص�����
//void Swap(char* buf1, char* buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void*base, int sz,
//	             int width,int (*cmp)(void *e1,void *e2))
//{
//	int i = 0;
//	//����
//	for (i = 0; i < sz - 1; i++)
//	{
//		//ÿһ�˱ȽϵĶ���
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			//����Ԫ�صıȽ�
//			if (cmp((char*)base+j*width,(char*)base+(j+1)*width) > 0)
//			{
//				//����
//				Swap((char*)base + j * width, (char*)base+(j + 1)*width,width);
//
//			}
//		}
//	}
//}
//void test4()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽϴ����������е�Ԫ��
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d \n", arr[i]);
//	}
//
//}
//void test5()
//{
//	struct Stu s[3] = { {"����",20}, {"����",30} ,{"����",10} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	bubble_sort(s,sz, sizeof(s[0]), cmp_stu_by_age);
//}
//int main()
//{
//	//bubble_sort(arr,sz);
//	//test1();
//	//test2();
//	//test3();
//	test4();
//	test5();
//	
//	return 0;
//}
//
////int main()
////{
////	int a = 10;
////	//int* pa = &a;
////	//char* pc = &a;
////
////	//char ch = 'w';
////	void* p = &a;
////	//*p = 0;
////	//void* ���͵�ָ�� ���Խ����������͵ĵ�ַ
////	//void* ���͵�ָ�� ���ܽ��н����ò��� ���ܽ��мӼ������Ĳ���
////	return 0;
////}


//int main()
//{
//	//����������Ԫ�ص�ַ
//	//sizeof����������-��������ʾ��������
//	//&������-��������ʾ��������
//	//һά����
//	int a[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(a));//4*4=16
//	printf("%d\n", sizeof(a + 0));//4-��������ʾ��Ԫ�ص�ַ��a+0������Ԫ�ص�ַ����ַ��С����4/8
//	printf("%d\n", sizeof(*a));//4-��������ʾ��Ԫ�ص�ַ��*a������Ԫ�أ�sizeof��*a������4
//	printf("%d\n", sizeof(a + 1));//4-��������ʾ��Ԫ�ص�ַ��a+1�ǵ�2��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(a[1]));//4-��2��Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(&a));//4- &aȡ����������ĵ�ַ����������ĵ�ַҲ�ǵ�ַ����ַ�Ĵ�С����4���ֽ�
//	printf("%d\n", sizeof(*&a));//16-&a������ĵ�ַ������ĵ�ַ�����÷��ʵ����飬sizeof����ľ�������Ĵ�С
//	printf("%d\n", sizeof(&a + 1));//4-&a����ĵ�ַ��&a+1��Ȼ��ַ�����������飬�����ǵ�ַ
//	printf("%d\n", sizeof(&a[0]));//4-��һ��Ԫ�ص�ַ
//	printf("%d\n", sizeof(&a[0] + 1));//4-&a��0��+1�ڶ���Ԫ�صĵ�ַ
//	//�ַ�����
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6-sizeof������������С��6���Լ�
//	printf("%d\n", sizeof(arr + 0));//4--arr����Ԫ�صĵ�ַ��arr+0������Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*arr));//1--arr����Ԫ�ص�ַ��*arr������Ԫ�أ���Ԫ�����ַ���С��һ���ֽ�
//	printf("%d\n", sizeof(arr[1]));//1
//	printf("%d\n", sizeof(&arr));//4--��Ȼ������ĵ�ַ�������ǵ�ַ
//	printf("%d\n", sizeof(&arr + 1));//4--&arr+1��������������ĵ�ַ
//	printf("%d\n", sizeof(&arr[0] + 1));//4--�ڶ���Ԫ�صĵ�ַ
//	printf("%d\n", strlen(arr));//�����
//	printf("%d\n", strlen(arr + 0));//�����
//	//printf("%d\n", strlen(*arr));//err
//	//printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//�����
//	printf("%d\n", strlen(&arr + 1));//�����
//	printf("%d\n", strlen(&arr[0] + 1));//�����
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//
//	printf("%d\n", sizeof(arr + 0));//
//	printf("%d\n", sizeof(*arr));//
//	printf("%d\n", sizeof(arr[1]));//
//	printf("%d\n", sizeof(&arr));//
//	printf("%d\n", sizeof(&arr + 1));//
//	printf("%d\n", sizeof(&arr[0] + 1));//
//	printf("%d\n", strlen(arr));//
//	printf("%d\n", strlen(arr + 0));//
//	printf("%d\n", strlen(*arr));//
//	printf("%d\n", strlen(arr[1]));//
//	printf("%d\n", strlen(&arr));//
//	printf("%d\n", strlen(&arr + 1));//
//	printf("%d\n", strlen(&arr[0] + 1));//
//	char *p = "abcdef";
//	printf("%d\n", sizeof(p));//
//	printf("%d\n", sizeof(p + 1));//
//	printf("%d\n", sizeof(*p));//
//	printf("%d\n", sizeof(p[0]));//
//	printf("%d\n", sizeof(&p));//
//	printf("%d\n", sizeof(&p + 1));//
//	printf("%d\n", sizeof(&p[0] + 1));//
//	printf("%d\n", strlen(p));//
//	printf("%d\n", strlen(p + 1));//
//	printf("%d\n", strlen(*p));//
//	printf("%d\n", strlen(p[0]));//
//	printf("%d\n", strlen(&p));//
//	printf("%d\n", strlen(&p + 1));//
//	printf("%d\n", strlen(&p[0] + 1));//
//	//��ά����
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//
//	//printf("%d\n", sizeof(a[0][0]));//
//	printf("%d\n", sizeof(a[0]));//
//	printf("%d\n", sizeof(a[0] + 1));//
//	//printf("%d\n", sizeof(*(a[0] + 1)));//
//	printf("%d\n", sizeof(a + 1));//
//	printf("%d\n", sizeof(*(a + 1)));//
//	printf("%d\n", sizeof(&a[0] + 1));//
//	printf("%d\n", sizeof(*(&a[0] + 1)));//
//	printf("%d\n", sizeof(*a));//
//	printf("%d\n", sizeof(a[3]));//
//}


int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	int *ptr = (int *)(&a + 1);
	printf("%d,%d", *(a + 1), *(ptr - 1));
	return 0;
}