//制作一个通讯录，要求实现的功能：
//1：像通讯录中添加成员     2：删除成员      3：修改成员       4：显示成员    5：排序     6：查找成员   7：退出

#include"Contact.h"

void menu()
{
	printf("*************     欢迎使用通讯录        *************\n");
	printf("*************      1：添加成员           *************\n");
	printf("*************      2：删除成员           *************\n");
	printf("*************      3：修改成员           *************\n");
	printf("*************      4：查找成员并显示     *************\n");
	printf("*************      5：显示所有成员       *************\n");
	printf("*************      6：排序所有成员       *************\n");
	printf("*************      7：退出               *************\n");
	printf(" 请选择 >");
}
int main()
{
	int select = 0;
	Contact Contactlist;
	InitContact(&Contactlist);//初始化通讯录
	do
	{
		menu();
		scanf("%d", &select);
		
		switch (select)
		{
		case ADD:
			peopleAdd(&Contactlist);
			break;
		case DEL:
			peopleDel(&Contactlist);
			break;
		case MODIFY:
			peopleModify(&Contactlist);
			break;
		case SEARCH:
			peopleSearch(&Contactlist);
			break;
		case PRINT:
			allpeoplePrint(&Contactlist);
			break;
		case SORT:
			allpeopleSort(&Contactlist);
			break;
		case EXIT:
			free(Contactlist.can);//释放堆空间
			Contactlist.can = NULL;//指针置空
			break;
		default:
			printf("选择错误，请重新选择");
			break;

		}

	} while (select != 0);

	
	return 0;
}