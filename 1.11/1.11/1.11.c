#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int line = 0;
//	printf("���봴����\n");
//	while (line <= 20000)
//	{
//		printf("��һ�д���:%d\n",line);
//		line++;
//	}
//	if (line > 20000);
//	printf("ӭȢ�׸���\n");
//}



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

//int main()
//{
//	printf("%c\n", "\x61");
//	//��ӡ13
//	return 0;
//}


//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��\n");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
////}
//
//int main()
//{
//	printf("�������\n");
//}

//int add(int x, int y)
//{
//	int z=x + y;
//	return z;
//}
//
//int main()
//{
//	int a1 = 10;
//	int a2 = 20;
//	int a3 = 30;
//	int a4 = 40;
//	int z=add(a1, a2);
//	int x = add(a3, a4);
//	printf("%d\n", z);
//	printf("%d\n", x);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//
//}

//int main()
//{
//	int a = 1;
//	//����1ռ4���ֽ�
//	//00000000000000000000000000000001
//	int b=a << 1;
//	//00000000000000000000000000000010
//	int c = a << 2;
//	printf("%d\n", c);
//	return 0;
//}

//int main()
//{
//	//��2���ƣ�λ����
//	//&��λ��
//	//|��λ��
//	//^��λ���  ��Ӧ��2����λ��ͬ����Ϊ0���෴Ϊ��Ϊ1
//	int a = 3;
//	int b = 5;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	//2����
//	//1       1      1       1
//	//8       4      2       1
//	printf("%d\n", c);
//	//0000 0000 0000 0000 0000 0000 0000 0011=3
//	//0000 0000 0000 0000 0000 0000 0000 0101=5
//    //0000 0000 0000 0000 0000 0000 0000 0001=1
//	printf("%d\n", d);
//	//0000 0000 0000 0000 0000 0000 0000 0011=3
//	//0000 0000 0000 0000 0000 0000 0000 0101=5
//	//0000 0000 0000 0000 0000 0000 0000 0111=5
//	printf("%d\n", e);
//	//0000 0000 0000 0000 0000 0000 0000 0011=3
//	//0000 0000 0000 0000 0000 0000 0000 0101=5
//	//0000 0000 0000 0000 0000 0000 0000 0110=6
//	return 0;
//}
//
//int main()
//{
//	int a = 10;
//	a = 20;//= ��ֵ  ==�ж����
//	a = a + 10;//
//	a += 10;//����д����ȫ���
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = 10;
//	//a + b;//+ ˫Ŀ������
//	//C���������Ǳ�ʾ���
//	//0-��
//	//��0-��
//	/*int a = 0;*/
//	//int a = -2;
//	//int b = -a;
//	//int c = +3;//����һ��ʡ��
//	//int a = 10;
//
//	//printf("%d\n", a);
//	////sizeof ������Ǳ���/������ռ�ռ�Ĵ�С����λ���ֽ�
//	//printf("%d\n", sizeof(a));
//	int sz = 0;
//	int arr[10] = { 0 };//10������Ԫ�ص�����
//	printf("%d\n", sizeof(arr));
//	//��������Ԫ�ظ���
//	sz = sizeof(arr) / sizeof(arr[1]);
//	printf("sz=%d\n", sizeof(sz));
//000
//	return 0;
//}

int main()
{
	//�ַ����Ľ�����־����\0��
	//'\0'
	//0  ->����0
	//'0'->48
	return 0;
}