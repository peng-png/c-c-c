#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>



//int main()
//{
//	printf("hello\n");
//	return 0;
//}

////char--�ַ�����
//int main()
//{
//	char ch = 'A';//�ڴ�
//	printf("%c\n",ch);//%c--��ӡ�ַ���ʽ������
//	return 0;
//}
//int main()
//{
//	float f = 5.0;
//	float q = 5;
//	double w = 5;
//	double e = 5.0;
//	printf("%f\n", f);
//	printf("%f\n", q);
//	printf("%lf\n", w);
//	printf("%f\n", w);
//	printf("%lf\n", e);
//	return 0;
//	return 0;
//}

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	//int a = 10;
//	//�ֲ�������ȫ�ֱ��ǵ����ֽ��鲻Ҫ��ͬ-������ᣬ����bug
//	printf("%d\n",a);//�ֲ�����������ȫ�ֱ���
//	return 0;
//}
//
//int main()
//{
//	{
//		int a = 10;
//	}
//	printf("%d\n", a);
//}

//int main()
//{
//	����2�����ĺ�
//	int a = 0;
//	int b = 0;
//	
//	��������---ʹ�����뺯��
//	&-----ȡ��ַ����
//	scanf("%d%d", &a,& b);
//	C�����﷨�涨������Ҫ�����ڵ�ǰ��������ǰ��
//	int c = 0;
//	c = a + b;
//	printf("%d\n", c);
//	return 0;
//
//}
//int main()
//{
//	//�ֲ�������������
//	{int num = 0;
//	printf("num=%d\n", num);//�������þ��������������
//	}
//	return 0;
//}

//int a = 10;
//void test()
//{
//	printf("%d", a);
//}
//int main()
//{
//	test();
//	printf("%d", a);
//}

//int main()
//{  
//	//����extern�ⲿ���ŵ�
//	extern int a;
//	printf("%d\n", a);//��ӡtest����a=10��
//}

//int main()
//{ 
//	//const---������
//	const int num = 4;
//	printf("%d\n", num);
//	
//	// 100---���泣��
//	return 0;
//}

//int main()
//{
//	const int n = 10;//n�Ǳ������������г����ԣ���������˵n�ǳ�����
//	//int arr[n] = { 0 };
//}
//
//#define n  10
//#define ����ı�ʶ������
//int main()
//{
//	int arr[n] = { 0 };
//	printf("%d\n", n);
//	return 0;



//enum Sex
//{
//	man,
//	female,
//	secret,
//
//};
//
//int main()
//{
//	//ö��--һһ�о�
//	//
//	//�Ա��С�Ů������
//	//��ԭɫ���졢�ơ���
//	//���ڣ�1��2��3��4��5��6��7
//
//	//ö�ٹؼ�---enum
//
//	enum Sex s = 0;
//	printf("%d\n", man);
//	printf("%d\n", female);
//	printf("%d\n", secret);
//	printf("%c\n", s);
//	return 0;
//}


//int main()
//{
//	char arr1[]="abc";//����  
//	//��abc����a����b����c����/0��----��/0���ַ����Ľ�����־
//	//�����ڼ�����ϴ洢��ʱ�򣬴洢����2����
//	//��a��--97
//	//��A��--65
//	//ASCII   ����  
//	char arr2[] = { 'a','b','c' }; // �ڴ����a��b��c
//	printf("%s\n", arr1);//abc
//	printf("%s\n", arr2);//abc���������abc	
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c',0};
//	printf("%d\n",strlen(arr1));//strlen--string length---�����ַ�������
//	printf("%d\n",strlen(arr2));
//	//��ӡ3
//	//��ӡ15  ���ֵ
//	return 0;
//}

//int main()
//{
//	printf("%s","\"");
//	return 0;
//}
#include <string.h>
//int main()
//{
//	printf("%c\n", "\x61");
//	//��ӡ13
//	return 0;
//}


int main()
{

	return 0;
}