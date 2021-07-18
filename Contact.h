#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
enum functions //使用枚举常量，让开发者可以清楚switch时每个对应的功能
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	PRINT,
	SORT
};
typedef struct people//people的大小是88字节
{
	char name[10];
	char sex;
	char address[25];
	int age;
	char number[12];
}people;


typedef struct Contact
{
	people* can;//存放通讯录成员的容器指针
	int count;//通讯录的长度
	int max;
}Contact;


extern void InitContact(Contact* Contactlist)
{
	Contactlist->can = (people*)malloc(sizeof(*(Contactlist->can))*10);//动态内存申请
	Contactlist->count = 0;
	Contactlist->max = 10;
}


void peopleAdd(Contact* p)
{
	char name1[10];
	char sex1;
	char address1[25];
	int age1;
	char number1[12];	
	if (p->count == p->max)//通讯录已满，需要调整通讯录大小
	{
		people *tmp = realloc(p->can, (p->max) * 2);//调整为原来的二倍
		if (tmp == NULL)
		{
			perror("room");
			return;
		}
		else//使原指针指向新空间
		{
			p->can = tmp;
			free(tmp);
			tmp = NULL;
			(p->max) *= 2;//通讯录长度自然加长为原来二倍
		}
	}

	printf("请输入姓名：");
	scanf("%s", name1);
	printf("请输入性别：");
	scanf(" %c", &sex1);
	printf("请输入年龄：");
	scanf("%d", &age1);
	printf("请输入电话：");
	scanf("%s", number1);
	printf("请输入地址：");
	scanf("%s", address1);

	strcpy((p->can + (p->count))->name, name1);
	(p->can + (p->count))->sex = sex1;
	(p->can + (p->count))->age = age1;
	strcpy((p->can + (p->count))->number, number1);
	strcpy((p->can + (p->count))->address, address1);
	(p->count)++;

	printf("添加成功!\n");
}



void peopleDel(Contact*p)
{
	int a = 0;
	char input = 0;
	char name2[10] = { 0 };
	if (p->count == 0)
	{
		printf("当前通讯录无成员\n");
		return ;
	}
	printf("请输入要删除人员的姓名：");
	scanf("%s", name2);
	for (a = 0; a < p->count; a++)
	{
		if (strcmp(name2, (p->can + a)->name)==0)
		{
			printf("是否要删除此成员？(y/n)\n");
			scanf(" %c", &input);
			if (input == 'y')
			{
				for (int b = a; b < p->count - 2; b++)
				{
					*(p->can + b) = *(p->can + b + 1);
				}
				printf("删除成功！\n");
				p->count--;
				return;
			}
			else 
				return;
		}
		if (a == p->count-1)
		{
			printf("查无此人！\n");
		}
	}
}



void peopleModify(Contact* p)
{
	char name[10];
	char sex;
	char address[25];
	int age;
	char number[12];
	int a = 0;
	if (p->count == 0)
	{
		printf("当前通讯录无成员\n");
		return;
	}
	else
	{
		printf("请输入要修改人员的姓名：");
		scanf("%s", name);
		for (a = 0; a < p->count; a++)
		{
			if (strcmp(name, (p->can + a)->name) == 0)
			{
				printf("请输入要修改后的名字：");
				scanf("%s", name);
				printf("请输入要修改后的性别：");
				scanf(" %c", &sex);
				printf("请输入要修改后的年龄：");
				scanf("%d", &age);
				printf("请输入要修改后的电话：");
				scanf("%s", number);
				printf("请输入要修改后的地址：");
				scanf("%s", address);


				strcpy((p->can + a)->name, name);
				(p->can + a)->sex = sex;
				(p->can + a)->age = age;
				strcpy((p->can + a)->number, number);
				strcpy((p->can + a)->address, address);
			}
			
			if (a == p->count)
			{
				printf("查无此人！\n");
			}
		}
	}
}




void peopleSearch(Contact* p)
{
	char name[10] = { 0 };
	int a = 0;
	if (p->count == 0)
	{
		printf("当前通讯录无成员\n");
		return;
	}
	else
	{
		printf("请输入要查找人员的姓名：");
		scanf("%s", name);
		for (a = 0; a < p->count; a++)
		{
			if (strcmp(name, (p->can + a)->name) == 0)
			{
				printf("%-10s\t %-s\t %-s\t %-12s\t %-25s\n",
					"姓名",
					"性别",
					"年龄",
					"电话",
					"地址");
				printf("%-10s\t %-c\t %-d\t %-12s\t %-25s\n",
					(p->can + a)->name,
					(p->can + a)->sex,
					(p->can + a)->age,
					(p->can + a)->number,
					(p->can + a)->address);
			}
		}
	}
}




void allpeoplePrint(Contact* p)
{
	int a = 0;
	printf("%-10s\t %-s\t %-s\t %-12s\t %-25s\n",
		"姓名",
		"性别",
		"年龄",
		"电话",
		"地址");
	for (a = 0; a < p->count; a++)
	{
		printf("%-10s\t %-c\t %-d\t %-12s\t %-25s\n",
			(p->can + a)->name,
			(p->can + a)->sex,
			(p->can + a)->age,
			(p->can + a)->number,
			(p->can + a)->address);
	}
}


int compare(const void *p1, const void *p2)
{
	strcmp(((people*)p1)->name,((people*)p2)->name);
}


void allpeopleSort(Contact* p)
{
	qsort(p->can, p->count, sizeof(*(p->can)), compare);

}