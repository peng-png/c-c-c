#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>
#include <string.h>

//int main()
//{
//
//	printf("hello,lcbt\n");
//	goto again;
//	printf("����\n");
//again:
//	printf("hehe\n");
//	return 0;

//int main()
//{
//	//shutdown-s-t  60
//	//system()-ִ��ϵͳ����
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("��ע�⣬��ĵ�����1�����ڹػ���������룺��������ȡ���ػ�\n�����룺");
//	scanf("%s", input);
//	if (strcmp(input, "������") == 0)//�Ƚ������ַ���--stcrcmp
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
//	//strcpy--string copy-----�ַ�������
//	//strlen--string length---�ַ��������й�
//	char arr1[] = "bit";
//	char arr2[] = "########";//\0�ǽ�����־
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	printf("%s\n", arr1);
//	return 0;
//}


//memset---memory---�ڴ�  set---����

//int main()
//{
//	char arr[] = "hello word";
//	memset(arr, '#', 5);
//	printf("%s\n", arr);
//	return 0;
//}

//void Swap1(int x, int y)//������
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
//дһ�������ж��ǲ�������
//��ӡ100-200֮�������

//����������1��������������0
//2----n-1�Գ�
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
//		//�ж�i�Ƿ�Ϊ����
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
//		//�ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year) == 1)
//		{
//			printf(" %d ", year);
//		}
//	}
//	
//
//	return 0;
//}
                //������arr��һ��ָ��
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨��ʵ��	
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
//	//���ֲ���
//	//��һ�����������в��Ҿ����ĳ����
//	//����ҵ��˷����±꣬�Ҳ���������-1
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };	
//	int k = 7;	
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr,k,sz);
//	if(ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//	printf("�ҵ��ˣ��±��ǣ�%d\n",ret);
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

//��������
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
////�����Ķ���
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
//	//�ݹ�
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

//�ݹ�ķ���
//int my_strlen(char* arr)
//{
//	if (*arr != '\0')
//		return 1 + my_strlen(arr + 1);
//	else
//		return 0;
//}
////�Ѵ��»�С
////my_strlen("bit");
////1+my_strlen("it");
////1+1+my_strlen("t");
////1+1+1+my_strlen("");
////1+1+1+0
//int main()
//{
//	char arr[] = "bitpopopsddssdfer";
//	//int len = strlen(arr);//���ַ�������
//	//printf("%d\n", len);
//	int len = my_strlen(arr);//arr�����飬���鴫�Σ�����ȥ������Ԫ�صĵ�ַ
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