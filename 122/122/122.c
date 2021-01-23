#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>

//描述一个学生；一些数据
//struct结构体关键字  Stu-结构体标签  struct Stu-结构体类型
//struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局的结构体变量

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//类型
//
//int main()
//{
//	struct Stu s = { "张三",18,"18194343579","男" };//s局部变量
//	struct Stu s1 = { "李四",16,"18194348888","女" };
//	Stu s2 = { "旺财",30,"155966669932","保密" };
//	printf("%s %d %s %s \n", s.name,s.age,s.sex,s.tele);
//	printf("%s %d %s %s \n", s1.name, s1.age, s1.sex, s1.tele);
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//};
//
//int main()
//{
//	char arr[] = "hello bit\n";
//	struct T t = { "hehe",{10,'w',"hello word",3.14},arr };
//	printf("%s\n", t.ch);
//	printf("%s\n",t.s.arr);
//	printf("%lf\n", t.s.d);
//	printf("%s\n", t.pc);
//	return 0;
//}

//typedef struct Stu
//{
//	//成员变量
//	char name[20];
//	short age;
//	char tele[12];
//	char sex[5];
//}Stu;//类型
//
//void Print1(Stu tmp)
//{
//	printf("name:%s\n", tmp.name);
//	printf("age:%d\n", tmp.age);
//	printf("tele:%s\n", tmp.tele);
//	printf("sex:%s\n", tmp.sex);
//}
//void Print2(Stu* ps)
//{
//	printf("name:%s\n", ps->name);
//	printf("age:%d\n", ps->age);
//	printf("tele:%s\n", ps->tele);
//	printf("sex:%s\n", ps->sex);
//}
//
//int main()
//{
//	Stu s = { "李四",40,"18888888888","男" };
//	Print1(s);
//	Print2(&s);
//	return 0;
//}

int main()
{
	int i = 0;
	int sum = 0;//保存最终结果
	int n = 0;
	int ret = 1;//保存n的阶乘
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		int j = 0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d\n", sum);
	return 0;
}

