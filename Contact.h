#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
enum functions //ʹ��ö�ٳ������ÿ����߿������switchʱÿ����Ӧ�Ĺ���
{
	EXIT,
	ADD,
	DEL,
	MODIFY,
	SEARCH,
	PRINT,
	SORT
};
typedef struct people//people�Ĵ�С��88�ֽ�
{
	char name[10];
	char sex;
	char address[25];
	int age;
	char number[12];
}people;


typedef struct Contact
{
	people* can;//���ͨѶ¼��Ա������ָ��
	int count;//ͨѶ¼�ĳ���
	int max;
}Contact;


extern void InitContact(Contact* Contactlist)
{
	Contactlist->can = (people*)malloc(sizeof(*(Contactlist->can))*10);//��̬�ڴ�����
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
	if (p->count == p->max)//ͨѶ¼��������Ҫ����ͨѶ¼��С
	{
		people *tmp = realloc(p->can, (p->max) * 2);//����Ϊԭ���Ķ���
		if (tmp == NULL)
		{
			perror("room");
			return;
		}
		else//ʹԭָ��ָ���¿ռ�
		{
			p->can = tmp;
			free(tmp);
			tmp = NULL;
			(p->max) *= 2;//ͨѶ¼������Ȼ�ӳ�Ϊԭ������
		}
	}

	printf("������������");
	scanf("%s", name1);
	printf("�������Ա�");
	scanf(" %c", &sex1);
	printf("���������䣺");
	scanf("%d", &age1);
	printf("������绰��");
	scanf("%s", number1);
	printf("�������ַ��");
	scanf("%s", address1);

	strcpy((p->can + (p->count))->name, name1);
	(p->can + (p->count))->sex = sex1;
	(p->can + (p->count))->age = age1;
	strcpy((p->can + (p->count))->number, number1);
	strcpy((p->can + (p->count))->address, address1);
	(p->count)++;

	printf("��ӳɹ�!\n");
}



void peopleDel(Contact*p)
{
	int a = 0;
	char input = 0;
	char name2[10] = { 0 };
	if (p->count == 0)
	{
		printf("��ǰͨѶ¼�޳�Ա\n");
		return ;
	}
	printf("������Ҫɾ����Ա��������");
	scanf("%s", name2);
	for (a = 0; a < p->count; a++)
	{
		if (strcmp(name2, (p->can + a)->name)==0)
		{
			printf("�Ƿ�Ҫɾ���˳�Ա��(y/n)\n");
			scanf(" %c", &input);
			if (input == 'y')
			{
				for (int b = a; b < p->count - 2; b++)
				{
					*(p->can + b) = *(p->can + b + 1);
				}
				printf("ɾ���ɹ���\n");
				p->count--;
				return;
			}
			else 
				return;
		}
		if (a == p->count-1)
		{
			printf("���޴��ˣ�\n");
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
		printf("��ǰͨѶ¼�޳�Ա\n");
		return;
	}
	else
	{
		printf("������Ҫ�޸���Ա��������");
		scanf("%s", name);
		for (a = 0; a < p->count; a++)
		{
			if (strcmp(name, (p->can + a)->name) == 0)
			{
				printf("������Ҫ�޸ĺ�����֣�");
				scanf("%s", name);
				printf("������Ҫ�޸ĺ���Ա�");
				scanf(" %c", &sex);
				printf("������Ҫ�޸ĺ�����䣺");
				scanf("%d", &age);
				printf("������Ҫ�޸ĺ�ĵ绰��");
				scanf("%s", number);
				printf("������Ҫ�޸ĺ�ĵ�ַ��");
				scanf("%s", address);


				strcpy((p->can + a)->name, name);
				(p->can + a)->sex = sex;
				(p->can + a)->age = age;
				strcpy((p->can + a)->number, number);
				strcpy((p->can + a)->address, address);
			}
			
			if (a == p->count)
			{
				printf("���޴��ˣ�\n");
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
		printf("��ǰͨѶ¼�޳�Ա\n");
		return;
	}
	else
	{
		printf("������Ҫ������Ա��������");
		scanf("%s", name);
		for (a = 0; a < p->count; a++)
		{
			if (strcmp(name, (p->can + a)->name) == 0)
			{
				printf("%-10s\t %-s\t %-s\t %-12s\t %-25s\n",
					"����",
					"�Ա�",
					"����",
					"�绰",
					"��ַ");
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
		"����",
		"�Ա�",
		"����",
		"�绰",
		"��ַ");
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