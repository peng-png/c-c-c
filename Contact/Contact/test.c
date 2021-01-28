#define _CRT_SECURE_NO_WARNINGS   1

#include "contact.h"

//存放1000个好友的信息
//增加人的信息
//删除指定名字的好友信息
//查找好友信息
//修改好友信息
//打印好友信息

//排序

void menu()
{
	printf("*************************************\n");
	printf("******1.add          2.del    *******\n");
	printf("******3.search       4.modify *******\n");
	printf("******5.show         6.sort   *******\n");
	printf("******0.exit                  *******\n");
	printf("*************************************\n");
}

int main()
{
	int input = 0;
	//创建通讯录
	struct Contact con;//con就是通讯录，里边包含：1000个元素的数和size
	//初始化通讯录
	InitContact(&con);
	//
	do
	{
		menu();
		printf("请选择：");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			printf("退出通讯录\n");
			break;
		default:
			printf("选择错\n");
			break;
		}
	} while (input);	
	return 0;
}