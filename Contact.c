//����һ��ͨѶ¼��Ҫ��ʵ�ֵĹ��ܣ�
//1����ͨѶ¼����ӳ�Ա     2��ɾ����Ա      3���޸ĳ�Ա       4����ʾ��Ա    5������     6�����ҳ�Ա   7���˳�

#include"Contact.h"

void menu()
{
	printf("*************     ��ӭʹ��ͨѶ¼        *************\n");
	printf("*************      1����ӳ�Ա           *************\n");
	printf("*************      2��ɾ����Ա           *************\n");
	printf("*************      3���޸ĳ�Ա           *************\n");
	printf("*************      4�����ҳ�Ա����ʾ     *************\n");
	printf("*************      5����ʾ���г�Ա       *************\n");
	printf("*************      6���������г�Ա       *************\n");
	printf("*************      7���˳�               *************\n");
	printf(" ��ѡ�� >");
}
int main()
{
	int select = 0;
	Contact Contactlist;
	InitContact(&Contactlist);//��ʼ��ͨѶ¼
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
			free(Contactlist.can);//�ͷŶѿռ�
			Contactlist.can = NULL;//ָ���ÿ�
			break;
		default:
			printf("ѡ�����������ѡ��");
			break;

		}

	} while (select != 0);

	
	return 0;
}