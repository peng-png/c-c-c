#define _CRT_SECURE_NO_WARNINGS   1

#include <stdio.h>

//int main()
//{
//	int age = 0;
//	if (age < 18)
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	else if (age > 18 && age < 28)
//		printf("����\n");
//	else if(age>28 && age<50)
//		printf("׳��\n");
//	else if (age > 50 && age < 90)
//		printf("����\n");
//	else//else��ʡ��
//		printf("�ϲ���\n");
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
//	//if (num = 5)//= ��ֵ  ==�ж����
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
//		printf("%d������\n",i);
//	else
//		printf("%d��ż��\n",i);
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
//	//	printf("����1\n");	
//	//	break;
//	//case 2:
//	//    printf("����2\n");
//	//	break;
//	//case 3:
//	//	printf("����3\n");
//	//	break;//break����switch{}   break���������
//	//case 4:
//	//	printf("����4\n");
//	//	break;
//	//case 5:
//	//	printf("����5\n");
//	//	break;
//	//case 6:
//	//	printf("����6\n");
//	//	break;
//	//case 7:
//	//	printf("����7\n");
//	//	break;
//	//default:-----����ȷ˳���洦�ɷţ�����ź���
//	//	printf("�������");
//	//  braak;
//	case 1:
//		if (n == 1)
//			printf("hehe");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
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
//		{//switch����Ƕ��
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
//	////EOF_end of file  �ļ�������־
//	//while ((ch = getchar()) != EOF)
//	//{
//	//	putchar(ch);
//	//}
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 }; 
//	printf("���������룻>");
//	
//	scanf("%s",password);//�������룬������password������
//	//��������ʣ��һ����\n��
//	//��ȡ��һ����\n��
//	while((ch=getchar()!='\n'));
//	printf("��ȷ�ϣ�Y/N����>");
//	
//	ret = getchar();//Y/N
//	if(ret=='Y')
//		printf("ȷ�ϳɹ�");
//	else
//		printf("����ȷ��");
//
//	return 0;
//}

//int main()
//{
//	int i=0;
//	//��ʼ��   �ж�   ����
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
//	//����1
//	//forѭ���ĳ�ʼ�����������ж϶�����ʡ��
//	//�жϲ��� �����ʡ�ԣ����ж��������ǣ���Ϊ��
//	//������Ƿǳ������������Ҳ�Ҫ���ʡ��
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

//����1-10�Ľ׳�
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





