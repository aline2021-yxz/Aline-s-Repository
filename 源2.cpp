//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////int main()
//{
//	int arr[10] = { 0 };
//	printf("������Ÿ���С���������\n");
//	int a = 0,b,c,e;
//	for (a = 0; a < 9; a++)
//	{
//		scanf("%d", &arr[a]);
//	}
//	printf("������Ҫ�������\n");
//	scanf("%d", &arr[9]);
//	for (c = 0; c < 9; c++)
//	{
//		if (arr[c] <= arr[9] && arr[c + 1] >= arr[9])
//		{
//			int d = 0;
//			for (d = 9; d>c+1; d--)
//			{
//				int tmp = arr[d-1];
//				arr[d - 1] = arr[d];
//				arr[d] = tmp;
//			}
//		}
//	}
//	for (e = 0; e < 10; e++)
//	{
//		printf("%d ", arr[e]);
////	}
////	return 0;
////}
//void exchange(int arr[3][3], int line, int row)
//{
//	int a = 0;
//	for (a = 0; a < 3; a++)
////	{
//		int b = 0;
//		for (b = 0; b < 3; b++)
//		{
//			int tmp = arr[a][b];
//			arr[a][b] = arr[b][a];
//			arr[b][a] = tmp;
//		}
//	}
//}
//
//int main()
//{
//	int arr[3][3] = { 1 ,2, 3, 4, 5, 6, 7, 8, 9 };
//	exchange(arr,3,3);
//	int a = 0;
//	for (a = 0; a < 3; a++)
//	{
//		int b = 0;
//		for (b = 0; b < 3; b++)
//		{
//			printf("%d ", arr[a][b]);
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char a = 128;
//	printf("%d\n", a);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//void exchange(char arr[100000],int length,int left)//ʹ�õݹ�����ַ���������
//{
//	if (left <= length)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[length - 1];
//		arr[length - 1] = tmp;
//		exchange(arr, --length, ++left);//���±�����һλ�����±�����һλ
//	}
//}
//
//int main()
//{
//	char arr[100000] = {0};
//	int left = 0;
//	gets(arr);//��ȡ�ַ���
//	int  length=strlen(arr);//����ַ����ĳ��ȣ����ҵ����±�
//	exchange(arr ,length,left);
//	puts(arr);//��ӡ�ַ���
//
//	return 0;
////}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//
//typedef struct  //ѧ����Ϣ
//{
//	char xh[10];//ѧ��.
//	char xm[20];//������ʮ����������
//	char xb[3]; //�Ա���/Ů��
//	int nl;      //����
//}Student;
//typedef struct  //�γ���Ϣ
//{
//	char kh[10];//�κţ�����ʮ�ַ�����
//	char km[25];//������ʮ������������
//	float xf;   //�γ�ѧ�֣�Ϊһ��������
//}Course;
//typedef struct  //ѧ��ѡ����Ϣ
//{
//	char xh[10];//ѧ��ѧ��
//	char kh[10];//�γ̿κ�
//	float cj;    //�ɼ���Ϊһ��������
//}Select;
//typedef struct//ѧ���ɼ�����Ϣ
//{
//	char xh[10];//ѧ��
//	char xm[20];//����
//	char kh[30][10];//��ѡ���ſγ̿κ�
//	char km[30][25];//��ѡ���ſγ̿���
//	float cj[30];//���ſγ̳ɼ�
//	float zpj;//��Ȩƽ����
//	float zxf;//����ϰѧ��
//}Score;
//
//void print()/*������ʾ�˵�����*/
//{
//	printf("*******ѧ���ɼ�����ϵͳ*******\n");
//	printf("             �˵�             \n");
//	printf("��ʼ������-------------------1\n");
//	printf("��ʾ��Ϣ---------------------2\n");
//	printf("������Ϣ---------------------3\n");
//	printf("ɾ����Ϣ---------------------4             Present by     \n");
//	printf("��ѯ��Ϣ---------------------5              032030211     \n");
//	printf("������������-----------------6               123zpz       \n");
//	printf("�˳�����---------------------0                1000%%      \n");
//	printf("*******���������ѡ��: *******\n");
//}
//
//void init(Student slist[], int *scount, Course clist[], int *ccount, Select sclist[], int *sccount)/*���ļ��ж�ȡ��ʼ��Ϣ*/
//{
//	FILE *fp1, *fp2, *fp3;/*fp1��Ӧѧ����Ϣ�ļ���fp2��Ӧ�γ���Ϣ�ļ���fp3��Ӧѡ����Ϣ�ļ�*/
//	char infile1[99], infile2[99], infile3[99];/*infile1��Ӧѧ����Ϣ�ļ���infile2��Ӧ�γ���Ϣ�ļ���infile3��Ӧѡ����Ϣ�ļ�*/
//	int i;/*ͨ��ѭ������*/
//	char ch1, ch2, ch3;/*����ȷ���ļ��Ƿ��Ѿ�ȫ����ȡ���*/
//	/*���³������ڳ�ʼ��ѧ����Ϣ*/
//	printf("������Ҫ��ȡ��ѧ���ļ����ļ���:\n");
//	scanf("%s", infile1);/*��ȡ��ʼѧ����Ϣ�ļ��ļ���*/
//
//	fp1 = fopen(infile1, "r");/*�򿪶�Ӧ�����ļ�*/
//	if (fp1 == NULL)/*���û���ҵ���Ӧ�ļ����ӳ�ʼ�ļ�"slist.txt"װ��*/
//	{
//		printf("û��ָ���ļ���ָ��ʧ�ܣ�����Ĭ���ļ�װ��\n");
//		fp1 = fopen("slist.txt", "r");
//	}
//
//	for (i = 0;; i++)/*ѭ����ȡѧ����Ϣ��д���Ӧ�Ľṹ����*/
//	{
//		fscanf(fp1, "%s%s%s%d\n", slist[i].xh, slist[i].xm, slist[i].xb, &slist[i].nl);
//		(*scount)++;/*ͨ��ָ�뽫ѧ�������������䵽������*/
//		ch1 = fgetc(fp1);/*�ж��ļ��Ƿ��ȡ��ϣ��������ѭ��*/
//		fseek(fp1, -1, SEEK_CUR);
//		if (ch1 == EOF) break;
//	}
//	/*���³������ڳ�ʼ���γ���Ϣ*/
//	printf("������Ҫ��ȡ�Ŀγ��ļ����ļ���:\n");
//	scanf("%s", infile2);/*��ȡ��ʼ�γ���Ϣ�ļ��ļ���*/
//
//	fp2 = fopen(infile2, "r");/*�򿪶�Ӧ�����ļ�*/
//	if (fp2 == NULL)/*���û���ҵ���Ӧ�ļ����ӳ�ʼ�ļ�"clist.txt"װ��*/
//	{
//		printf("û��ָ���ļ���ָ��ʧ�ܣ�����Ĭ���ļ�װ��\n");
//		fp2 = fopen("clist.txt", "r");
//	}
//
//	for (i = 0;; i++)/*ѭ����ȡ�γ���Ϣ��д���Ӧ�Ľṹ����*/
//	{
//		fscanf(fp2, "%s%s%f\n", clist[i].kh, clist[i].km, &clist[i].xf);
//		(*ccount)++;/*ͨ��ָ�뽫�γ������������䵽������*/
//		ch2 = fgetc(fp2);/*�ж��ļ��Ƿ��ȡ��ϣ��������ѭ��*/
//		fseek(fp2, -1, SEEK_CUR);
//		if (ch2 == EOF) break;
//	}
//	/*���³������ڳ�ʼ��ѡ����Ϣ*/
//	printf("������Ҫ��ȡ��ѡ���ļ����ļ���:\n");
//	scanf("%s", infile3);/*��ȡ��ʼѡ����Ϣ�ļ��ļ���*/
//
//	fp3 = fopen(infile3, "r");/*�򿪶�Ӧ�����ļ�*/
//	if (fp3 == NULL)/*���û���ҵ���Ӧ�ļ����ӳ�ʼ�ļ�"sclist.txt"װ��*/
//	{
//		printf("û��ָ���ļ���ָ��ʧ�ܣ�����Ĭ���ļ�װ��\n");
//		fp3 = fopen("sclist.txt", "r");
//	}
//
//	for (i = 0;; i++)/*ѭ����ȡѡ����Ϣ��д���Ӧ�Ľṹ����*/
//	{
//		fscanf(fp3, "%s%s%f\n", sclist[i].xh, sclist[i].kh, &sclist[i].cj);
//		(*sccount)++;/*ͨ��ָ�뽫ѡ�������������䵽������*/
//		ch3 = fgetc(fp3);/*�ж��ļ��Ƿ��ȡ��ϣ��������ѭ��*/
//		fseek(fp3, -1, SEEK_CUR);
//		if (ch3 == EOF) break;
//	}
//
//	fclose(fp1);
//	fclose(fp2);
//	fclose(fp3);
//}
//
//void sort_sclist(Select sclist[], int sccount)/*����ѧ�Ŷ�ѧ��ѡ����Ϣ��������*/
//{
//	int i = 0, j = 0;
//	Select t;
//	for (; i<sccount; i++)
//	{
//		for (j = i + 1; j<sccount; j++)
//		{
//			if (strcmp(sclist[i].xh, sclist[j].xh)>0)
//			{
//				t = sclist[i];
//				sclist[i] = sclist[j];
//				sclist[j] = t;
//			}
//		}
//	}
//}
//int create_cjlist(Select sclist[], int sccount, Course clist[], int ccount, Score cjlist[])/*�����ɼ���*/
//{
//	memset(cjlist, 0, sizeof(Score));/*���ԭ���ɼ����ṹ���е�����*/
//	sort_sclist(sclist, sccount);/*��ѡ�νṹ�尴��ѧ�Ž�����������*/
//	int i = 0, j = 0, k, l, cjcount = 0;
//	/*i,j,k,l,m��Ϊѭ������,����i��Ӧѡ����Ϣ,j��Ӧ�ɼ�����Ϣ,l��Ӧ�γ���Ϣ,kͬʱ��Ӧ�ɼ����еĳɼ���Ϣ�Ϳγ̺�*/
//	for (; i<sccount; j++)
//	{
//		strcpy(cjlist[j].xh, sclist[i].xh);/*�½�һ���ɼ�����¼*/
//		for (k = 0; k<30; k++)/*�������ɼ��������еĳɼ�����Ϊ�����ڣ���-1��ʾ��*/
//			cjlist[j].cj[k] = -1;
//		cjlist[j].zpj = 0;
//		cjlist[j].zxf = 0;
//		cjcount++;
//		for (k = 0; k<30 && i<sccount; i++, k++)/*����Ӧѧ����ѡ�οκźͳɼ������ѧ����Ӧ�ĳɼ����ṹ����*/
//		{
//			if (strcmp(cjlist[j].xh, sclist[i].xh) == 0)/*�жϳɼ�����ʱ��Ӧ��ѧ����ѡ����Ϣ�е�ѧ���Ƿ��Ӧ*/
//			{
//				cjlist[j].cj[k] = sclist[i].cj;/*���������ѧ�����ſγɼ�*/
//				for (l = 0; l<100; l++)/*���ڿγ̽ṹ�����ҵ���Ӧ�Ŀγ̺ţ�����ɼ�����*/
//				{
//					if (strcmp(sclist[i].kh, clist[l].kh) == 0)
//					{
//						cjlist[j].zxf += clist[l].xf;/*�����ſγ̵�ѧ���ۼӵ���ѧ����*/
//						cjlist[j].zpj += clist[l].xf*sclist[i].cj;/*����Ȩ�ɼ����ۼӵ���ƽ���ɼ���*/
//						strcpy(cjlist[j].kh[k], clist[l].kh);
//						break;
//					}
//				}
//			}
//			else { cjlist[j].zpj = cjlist[j].zpj / cjlist[j].zxf; break; }/*��������ͬѧ�ļ�Ȩƽ����*/
//		}
//		if (i == sccount) cjlist[j].zpj = cjlist[j].zpj / cjlist[j].zxf;
//	}
//	return (cjcount);
//}
//void complete_cjlist(Score cjlist[], int cjcount, Student slist[], int scount, Course clist[], int ccount)/*���Ƴɼ���*/
//{
//	int j, m, s = 0, c;
//
//	for (j = 0; s<scount; s++)/*����Ӧѧ�ŵ�ѧ����������ɼ�����*/
//	{
//		if (strcmp(cjlist[j].xh, slist[s].xh) == 0)
//		{
//			strcpy(cjlist[j].xm, slist[s].xm);
//			j++;
//			s = 0;
//		}
//	}
//
//	for (j = 0; j<cjcount; j++)/*����Ӧ�κŵĿγ�������ɼ�����*/
//	{
//		for (m = 0, c = 0; c<ccount&&m<30; c++)
//		if (strcmp(cjlist[j].kh[m], clist[c].kh) == 0)
//		{
//			strcpy(cjlist[j].km[m], clist[c].km);
//			m++;
//			c = 0;
//		}
//	}
//}
//
//void sort_slist(Student slist[], int scount)/*����ѧ�Ŷ�ѧ����Ϣ��������*/
//{
//	int i = 0, j = 0;
//	Student t;
//	for (; i<scount; i++)
//	{
//		for (j = i + 1; j<scount; j++)
//		{
//			if (strcmp(slist[i].xh, slist[j].xh)>0)
//			{
//				t = slist[i];
//				slist[i] = slist[j];
//				slist[j] = t;
//			}
//		}
//	}
//}
//void sort_clist(Course clist[], int ccount)/*���տγ̺ŶԿγ���Ϣ��������*/
//{
//	int i = 0, j = 0;
//	Course t;
//	for (; i<ccount; i++)
//	{
//		for (j = i + 1; j<ccount; j++)
//		{
//			if (strcmp(clist[i].kh, clist[j].kh)>0)
//			{
//				t = clist[i];
//				clist[i] = clist[j];
//				clist[j] = t;
//			}
//		}
//	}
//}
//void sort_cjlist(Score cjlist[], int cjcount)/*����ƽ���ɼ��Գɼ���Ϣ��������*/
//{
//	int i = 0, j = 0;
//	Score t;
//	for (; i<cjcount; i++)
//	{
//		for (j = i + 1; j<cjcount; j++)
//		{
//			if (cjlist[i].zpj<cjlist[j].zpj)
//			{
//				t = cjlist[i];
//				cjlist[i] = cjlist[j];
//				cjlist[j] = t;
//			}
//		}
//	}
//}
//
//void disp_slist(Student slist[], int scount)/*��ʾѧ����Ϣ*/
//{
//	sort_slist(slist, scount);
//	int i, j = 0;
//	for (; j<scount; j += 10)
//	{
//		for (i = 0; i<10 && i + j<scount; i++)
//		{
//			printf("ѧ��:%s ����:%s �Ա�:%s ����:%d\n", slist[j + i].xh, slist[j + i].xm, slist[j + i].xb, slist[j + i].nl);
//		}
//		printf("�������������ʾ��¼\n");/*��ʾ��ʮ����Ϣ�����ʾ��ȫ����Ϣ����ʾ����Ϣ*/
//		system("pause");
//	}
//	printf("����ѧ����¼��ʾ���\n");
//}
//void disp_course(Course clist[], int ccount)/*��ʾ�γ���Ϣ*/
//{
//	sort_clist(clist, ccount);
//	int i, j = 0;
//	for (; j<ccount; j += 10)
//	{
//		for (i = 0; i<10 && i + j<ccount; i++)
//		{
//			printf("�κ�:%s ����:%s ѧ��:%f\n", clist[j + i].kh, clist[j + i].km, clist[j + i].xf);
//		}
//		printf("�������������ʾ��¼\n");/*��ʾ��ʮ����Ϣ�����ʾ��ȫ����Ϣ����ʾ����Ϣ*/
//		system("pause");
//	}
//	printf("���пγ̼�¼��ʾ���\n");
//}
//void disp_cjlist(Score cjlist[], int cjcount, Course clist[], int ccount, Student slist[], int scount)/*��ʾ�ɼ�����Ϣ*/
//{
//	sort_cjlist(cjlist, cjcount);
//	int i, j, k;
//
//	for (j = 0; j<cjcount; j += 10)
//	{
//		for (i = 0; i<10 && i + j<cjcount; i++)
//		{
//			printf("ѧ��:%s ����:%s ��Ȩƽ���ɼ�:%f ����ϰѧ��:%f\n", cjlist[i + j].xh, cjlist[i + j].xm, cjlist[i + j].zpj, cjlist[i + j].zxf);
//			for (k = 0; k<30; k++)
//			{
//				printf("�κ�:%s ����:%s �ɼ�:%f\n", cjlist[i + j].kh[k], cjlist[i + j].km[k], cjlist[i + j].cj[k]);
//				if (cjlist[i + j].cj[k + 1] == -1) break;
//			}
//		}
//		printf("�������������ʾ��¼\n");/*��ʾ��ʮ����Ϣ�����ʾ��ȫ����Ϣ����ʾ����Ϣ*/
//		system("pause");
//	}
//	printf("����ѧ���ɼ���¼��ʾ���\n");
//}
//
//int input_stud(Student slist[], int scount)/*����ѧ����Ϣ*/
//{
//	int i = scount, j, n;
//	char a, b;
//	for (; i<30; i++)
//	{
//		printf("����������ѧ����ѧ�ţ��������Ա����䡣\n");
//		printf(" ѧ��:"); scanf("%s", slist[i].xh);
//		printf(" ����:"); scanf("%s", slist[i].xm);
//		printf(" �Ա�:"); scanf("%s", slist[i].xb);
//		printf(" ����:"); scanf("%d", &slist[i].nl);
//		for (j = 0, n = 0; j<scount; j++)/*��������Ϣ�Աȣ��˲�������*/
//		{
//			if (strcmp(slist[i].xh, slist[j].xh) == 0)/*����������������ѯ���Ƿ��滻*/
//			{
//				printf("��⵽�Ѵ�����ͬѧ�ŵļ�¼:\n");
//				printf("ѧ��:%s ����:%s �Ա�:%s ����:%d\n", slist[j].xh, slist[j].xm, slist[j].xb, slist[j].nl);
//				printf("�Ƿ��滻�� a.�滻  b.���滻\n");
//				b = getch();/*��ȡ�û�ѡ��*/
//				if (b == 'a' || b == 'A')
//				{
//					slist[j] = slist[i];
//					n++;
//				}
//			}/*֮�����ѭ���������µ�������*/
//		}
//		if (n != 0) { scount--; i--; }/*n��������˵��������Ϣ�滻��ĳ����������򲻽�������Ϊ�½���*/
//
//		scount++;
//
//		printf("���������������룬��r������������һ�����ݣ���b����������\n");
//		a = getch();
//		if (a == 'b' || a == 'B') break;
//		if (a == 'r' || a == 'R') i--, scount--;
//	}
//
//	return (scount);
//}
//int input_course(Course clist[], int ccount)/*����γ���Ϣ*/
//{
//	int i = ccount, j, n;
//	char a, b;
//	for (; i<100; i++)
//	{
//		printf("����������γ̵Ŀγ̺ţ��γ������γ�ѧ�֡�\n");
//		printf(" �κ�:"); scanf("%s", clist[i].kh);
//		printf(" ����:"); scanf("%s", clist[i].km);
//		printf(" ѧ��:"); scanf("%s", &clist[i].xf);
//		for (n = 0, j = 0; j<ccount; j++)/*��������Ϣ�Աȣ��˲�������*/
//		{
//			if (strcmp(clist[i].kh, clist[j].kh) == 0)
//			{
//				printf("��⵽�Ѵ�����ͬ�κŵļ�¼:\n");
//				printf("�κ�:%s ����:%s ѧ��:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//				printf("�Ƿ��滻�� a.�滻  b.�½�һ����¼\n");
//				b = getch();
//				if (b == 'a' || b == 'A')
//				{
//					clist[j] = clist[i];
//					n--;
//				}
//			}/*֮�����ѭ���������µ�������*/
//		}
//		if (n != 0) { ccount--; i--; }/*n��������˵��������Ϣ�滻��ĳ����������򲻽�������Ϊ�½���*/
//
//		ccount++;
//
//		printf("���������������룬��r������������һ�����ݣ���b����������\n");
//		a = getch();
//		if (a == 'b' || a == 'B') break;
//		if (a == 'r' || a == 'R') i--, ccount--;
//	}
//
//	return (ccount);
//}
//int input_select(Select sclist[], int sccount, Student slist[], int scount, Course clist[], int ccount)/*����ѡ����Ϣ*/
//{
//	int i = sccount, j, k, m, n;
//	char a, b;
//	for (; i<900; i++)
//	{
//		printf("����������ѡ����Ϣ��ѧ��ѧ�ţ��γ̺ţ��ɼ���\n");
//		printf(" ѧ��:"); scanf("%s", sclist[i].xh);
//		for (j = 0; j<scount; j++)/*ȷ�������ѧ���Ƿ���ѧ����Ϣ�д��ڵ�*/
//		{
//			if (strcmp(sclist[i].xh, slist[j].xh) == 0)
//				break;
//		}
//		if (j == scount)/*�������ѧ�Ų�����ʱ��j����scount*/
//		{
//			printf("�������ѧ�������������������ѡ����Ϣ\n");
//			i--;
//			continue;
//		}
//
//		printf(" �κ�:"); scanf("%s", sclist[i].kh);
//		for (k = 0; k<ccount; k++)/*ȷ������Ŀκ��Ƿ��ǿγ���Ϣ�д��ڵ�*/
//		{
//			if (strcmp(sclist[i].kh, clist[k].kh) == 0)
//				break;
//		}
//		if (k == ccount)/*�������ѧ�Ų�����ʱ��k����ccount*/
//		{
//			printf("������Ŀκ������������������ѡ����Ϣ\n");
//			i--;
//			continue;
//		}
//
//
//		printf(" �ɼ��������޳ɼ�������-1��:");
//		scanf("%f", &sclist[i].cj);
//		if (-1 >= sclist[i].cj || sclist[i].cj >= 120)
//		{
//			printf("������ĳɼ������밴��Ҫ��Χ��-1<=�ɼ�<=120�������������ѡ����Ϣ\n");
//			i--;
//			continue;
//		}
//
//		for (m = 0, n = 0; m<sccount; m++)/*��������Ϣ�Աȣ��˲�������*/
//		{
//			if (strcmp(sclist[i].xh, sclist[m].xh) == 0 && strcmp(sclist[i].kh, sclist[m].kh) == 0)
//			{
//				printf("��⵽�Ѵ�����ͬ�κŵļ�¼:\n");
//				printf("ѧ��:%s �κ�:%s �ɼ�:%f\n", sclist[m].xh, sclist[m].kh, sclist[i].cj);
//				printf("�Ƿ��滻�� a.�滻  b.�½�һ����¼\n");
//				b = getch();
//				if (b == 'a' || b == 'A')
//				{
//					sclist[m] = sclist[i];
//					n++;
//				}
//			}/*֮�����ѭ���������µ�������*/
//		}
//		if (n != 0) { sccount--; i--; }/*n��������˵��������Ϣ�滻��ĳ����������򲻽�������Ϊ�½���*/
//
//		sccount++;
//
//		printf("���������������룬��r������������һ�����ݣ���b����������\n");
//		a = getch();
//		if (a == 'b' || a == 'B') break;
//		if (a == 'r' || a == 'R') i--, sccount--;
//	}
//
//	return (sccount);
//}
//
//int delete_slist(Student slist[], int scount)/*ɾ��ѧ����Ϣ*/
//{
//	int i = 0, j, m = 0;
//	char a, b[20], c;
//	char *p1, *p2, *p3 = b;
//
//	for (;;)
//	{
//		printf("��ѡ��:\n");
//		printf("a.����ѧ��ɾ��:\n");
//		printf("b.��������ɾ��:\n");
//		a = getch();
//
//		if (a == 'a' || a == 'A')
//		{
//			printf("������ɸ������:\n");/*��ȡ�ؼ��ִ�*/
//			scanf("%s", b);
//			for (; i<scount; i++)
//			{
//				for (p1 = slist[i].xh; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//					{
//						if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//						{
//							printf("ѧ��:%s,����:%s,�Ա�:%s,����:%d\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//							m++;
//							printf("�Ƿ�ɾ���������ݣ�a.��  b.��\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								scount--;
//								for (j = i; j<scount; slist[j] = slist[j + 1], j++);
//								i--;
//							}
//							break;/*�ѳ�ѭ������ֹ�ظ��������*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//				}
//			}
//		}
//		else if (a == 'b' || a == 'B')
//		{
//			printf("������ɸ������:\n");/*��ȡ�ؼ��ִ�*/
//			scanf("%s", b);
//			for (; i<scount; i++)
//			{
//				for (p1 = slist[i].xm; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//					{
//						if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//						{
//							printf("ѧ��:%s,����:%s,�Ա�:%s,����:%d\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//							m++;
//							printf("�Ƿ�ɾ���������ݣ�a.�ǡ�b.��\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								scount--;
//								for (j = i; j<scount; slist[j] = slist[j + 1], j++);
//								i--;
//							}
//							break;/*�ѳ�ѭ������ֹ�ظ��������*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//				}
//			}
//		}
//		else { printf("�����������������\n"); continue; }
//		if (m == 0) printf("�ܱ�Ǹ��δ���ҵ�������������Ϣ��");
//
//		printf("�˳��˽����밴q������ɾ����Ϣ�밴������\n");
//		c = getch();
//		if (c == 'q' || c == 'Q')break;
//		else system("cls");
//	}
//	return scount;
//}
//int delete_course(Course clist[], int ccount)/*ɾ���γ���Ϣ*/
//{
//	int i = 0, j, m = 0;
//	char a, b[20], c;
//	char *p1, *p2, *p3 = b;
//
//	for (;;)
//	{
//		printf("��ѡ��:\n");
//		printf("a.���ݿκ�ɾ��:\n");
//		printf("b.���ݿ���ɾ��:\n");
//		a = getch();
//
//		if (a == 'a' || a == 'A')
//		{
//			printf("������ɸ������:\n");/*��ȡ�ؼ��ִ�*/
//			scanf("%s", b);
//			for (; i<ccount; i++)
//			{
//				for (p1 = clist[i].kh; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//					{
//						if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//						{
//							printf("�κ�:%s,����:%s,ѧ��:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//							m++;
//							printf("�Ƿ�ɾ���������ݣ�a.�ǡ�b.��\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								ccount--;
//								for (j = i; j<ccount; clist[j] = clist[j + 1], j++);
//								i--;
//							}
//							break;
//						}
//					}
//					if (*(p3 + 1) == 0) break;
//				}
//			}
//		}
//		else if (a == 'b' || a == 'B')
//		{
//			printf("������ɸ������:\n");
//			scanf("%s", b);
//			for (; i<ccount; i++)
//			{
//				for (p1 = clist[i].km; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//					{
//						if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//						{
//							printf("�κ�:%s,����:%s,ѧ��:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//							m++;
//							printf("�Ƿ�ɾ���������ݣ�a.�ǡ�b.��\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								ccount--;
//								for (j = i; j<ccount; clist[j] = clist[j + 1], j++);
//								i--;
//							}
//							break;/*�ѳ�ѭ������ֹ�ظ��������*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//				}
//			}
//		}
//		else { printf("�����������������\n"); continue; }
//		if (m == 0) printf("�ܱ�Ǹ��δ���ҵ�������������Ϣ��");
//
//		printf("�˳��˽����밴q������ɾ����Ϣ�밴������\n");
//		c = getch();
//		if (c == 'q' || c == 'Q')break;
//		else system("cls");
//	}
//	return ccount;
//}
//int delete_select(Select sclist[], int sccount)/*ɾ��ѡ����Ϣ*/
//{
//	int i = 0, j, m = 0;
//	char a, b[20], c;
//	char *p1, *p2, *p3 = b;
//
//	for (;;)
//	{
//		printf("��ѡ��:\n");
//		printf("a.����ѧ��ɾ��:\n");
//		printf("b.���ݿκ�ɾ��:\n");
//		a = getch();
//
//		if (a == 'a' || a == 'A')
//		{
//			printf("������ɸ������:\n");/*��ȡ�ؼ��ִ�*/
//			scanf("%s", b);
//			for (; i<sccount; i++)
//			{
//				for (p1 = sclist[i].xh; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//					{
//						if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//						{
//							printf("ѧ��:%s,�κ�:%s,�ɼ�:%f\n", sclist[i].xh, sclist[i].kh, sclist[i].cj);
//							m++;
//							printf("�Ƿ�ɾ���������ݣ�a.�ǡ�b.��\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								sccount--;
//								for (j = i; j<sccount; sclist[j] = sclist[j + 1], j++);
//								i--;
//							}
//							break;/*�ѳ�ѭ������ֹ�ظ��������*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//				}
//			}
//		}
//		else if (a == 'b' || a == 'B')
//		{
//			printf("������ɸ������:\n");/*��ȡ�ؼ��ִ�*/
//			scanf("%s", b);
//			for (; i<sccount; i++)
//			{
//				for (p1 = sclist[i].kh; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//					{
//						if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//						{
//							printf("ѧ��:%s,�κ�:%s,�ɼ�:%f\n", sclist[i].xh, sclist[i].kh, sclist[i].cj);
//							m++;
//							printf("�Ƿ�ɾ���������ݣ�a.�ǡ�b.��\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								sccount--;
//								for (j = i; j<sccount; sclist[j] = sclist[j + 1], j++);
//								i--;
//							}
//							break;/*�ѳ�ѭ������ֹ�ظ��������*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//				}
//			}
//		}
//		else { printf("�����������������\n"); continue; }
//		if (m == 0) printf("�ܱ�Ǹ��δ���ҵ�������������Ϣ��");
//
//		printf("�˳��˽����밴q������ɾ����Ϣ�밴������\n");
//		c = getch();
//		if (c == 'q' || c == 'Q')break;
//		else system("cls");
//	}
//	return sccount;
//}
//
//void query_stud(Student slist[], int scount)/*��ѯѧ����Ϣ*/
//{
//	int i = 0, n = 0;
//	char a, b[20];
//	char *p1, *p2, *p3 = b;
//	printf("��ѡ��:\n");
//	printf("a.����ѧ�Ų�ѯ:\n");
//	printf("b.����������ѯ:\n");
//	a = getch();
//
//	if (a == 'a' || a == 'A')
//	{
//		printf("������ؼ���:");/*��ȡ�ؼ��ִ�*/
//		scanf("%s", b);
//		for (; i<scount; i++)
//		{
//			for (p1 = slist[i].xh; *p1 != 0; p1++)
//			{
//				for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//				{
//					if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//					{
//						printf("ѧ��:%s ����:%s �Ա�:%s ����:%d\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//						n++;
//						break;/*�ѳ�ѭ������ֹ�ظ��������*/
//					}
//				}
//				if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//			}
//		}
//	}
//	else if (a == 'b' || a == 'B')
//	{
//		printf("������ؼ���:");/*��ȡ�ؼ��ִ�*/
//		scanf("%s", b);
//		for (; i<scount; i++)
//		{
//			for (p1 = slist[i].xm; *p1 != 0; p1++)
//			{
//				for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//				{
//					if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//					{
//						printf("ѧ��:%s ����:%s �Ա�:%s ����:%d\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//						n++;
//						break;/*�ѳ�ѭ������ֹ�ظ��������*/
//					}
//				}
//				if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//			}
//		}
//	}
//	if (n == 0) printf("�ܱ�Ǹ��δ���ҵ�������������Ϣ��");
//}
//void query_course(Course clist[], int ccount)
//{
//
//	int i = 0, n = 0;
//	char a, b[20];
//	char *p1, *p2, *p3 = b;
//	printf("��ѡ��:\n");
//	printf("a.���ݿκŲ�ѯ:\n");
//	printf("b.���ݿ�����ѯ:\n");
//	a = getch();
//
//	if (a == 'a' || a == 'A')
//	{
//		printf("������ؼ���:");/*��ȡ�ؼ��ִ�*/
//		scanf("%s", b);
//		for (; i<ccount; i++)
//		{
//			for (p1 = clist[i].kh; *p1 != 0; p1++)
//			{
//				for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//				{
//					if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//					{
//						printf("�κ�:%s ����:%s ѧ��:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//						n++;
//						break;/*�ѳ�ѭ������ֹ�ظ��������*/
//					}
//				}
//				if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//			}
//		}
//	}
//	else if (a == 'b' || a == 'B')
//	{
//		printf("������ؼ���:");/*��ȡ�ؼ��ִ�*/
//		scanf("%s", b);
//		for (; i<ccount; i++)
//		{
//			for (p1 = clist[i].km; *p1 != 0; p1++)
//			{
//				for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//				{
//					if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//					{
//						printf("�κ�:%s ����:%s ѧ��:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//						n++;
//						break;/*�ѳ�ѭ������ֹ�ظ��������*/
//					}
//				}
//			}
//			if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//		}
//	}
//	if (n == 0) printf("�ܱ�Ǹ��δ���ҵ�������������Ϣ��");
//}
//void query_cjlist(Score cjlist[], int cjcount, Course clist[], int ccount, Student slist[], int scount)
//{
//	sort_cjlist(cjlist, cjcount);
//	int i = 0, n = 0, k;
//	char a, b[20];
//	char *p1, *p2, *p3 = b;
//
//	printf("������ѧ�Źؼ���:\n");/*��ȡ�ؼ��ִ�*/
//	scanf("%s", b);
//	for (; i<cjcount; i++)
//	{
//		for (p1 = cjlist[i].xh; *p1 != 0; p1++)
//		{
//			for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)	/*��������Ϣ���жԱȣ��ҵ������ؼ��ִʵ���Ϣ*/
//			{
//				if (*(p3 + 1) == 0)/*����ҵ��˷���Ҫ�����ͽ������*/
//				{
//					printf("ѧ��%s ����%s ƽ����%f ����ϰѧ��%f ����%d\n", cjlist[i].xh, cjlist[i].xm, cjlist[i].zpj, cjlist[i].zxf, i + 1);
//					for (k = 0; k<30; k++)
//					{
//						printf("�κ�:%s ����:%s �ɼ�:%f\n", cjlist[i].kh[k], cjlist[i].km[k], cjlist[i].cj[k]);
//						if (cjlist[i].cj[k + 1] == -1) break;
//					}
//					n++;
//					break;/*�ѳ�ѭ������ֹ�ظ��������*/
//				}
//			}
//			if (*(p3 + 1) == 0) break;/*�ѳ�ѭ������ֹ�ظ��������*/
//		}
//	}
//	if (n == 0) printf("�ܱ�Ǹ��δ���ҵ�������������Ϣ��");
//}
//
//void write_to_file1(Student slist[], int scount, Course clist[], int ccount, Select sclist[], int sccount)
//{
//	FILE *fp1, *fp2, *fp3;
//	char outstud[99], outcou[99], outsel[99];
//	char a, b, c;
//	int i = 0, j = 0, k = 0;
//
//	printf("�Ƿ�ѧ����Ϣ�������ļ���\n");
//	printf("���밴a�����������\n");
//	a = getch();
//	if (a == 'a' || a == 'A')
//	{
//		printf("�����뵼����ѧ����Ϣ�ļ����ļ���\n");
//		scanf("%s", outstud);
//		fp1 = fopen(outstud, "w");
//		fprintf(fp1, "    ѧ��\t����\t�Ա�\t����\t\n");/*���������*/
//		for (; i<scount; i++)
//			fprintf(fp1, "%s\t%s\t %s\t %d\t\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//		fclose(fp1);
//	}
//
//	printf("�Ƿ񽫿γ���Ϣ�������ļ���\n");
//	printf("���밴a�����������\n");
//	b = getch();
//	if (b == 'a' || b == 'A')
//	{
//		printf("�����뵼���Ŀγ���Ϣ�ļ����ļ���\n");
//		scanf("%s", outcou);
//		fp2 = fopen(outcou, "w");
//		fprintf(fp2, "  �κ�\t\t����\t  ѧ��\t\n");/*���������*/
//		for (; j<ccount; j++)
//			fprintf(fp2, "%s\t\t%s\t%f\t\n", clist[j].kh, clist[j].km, clist[j].xf);
//		fclose(fp2);
//	}
//
//	printf("�Ƿ�ѡ����Ϣ�������ļ���\n");
//	printf("���밴a�����������\n");
//	c = getch();
//	if (c == 'a' || c == 'A')
//	{
//		printf("�����뵼����ѡ����Ϣ�ļ����ļ���\n");
//		scanf("%s", outsel);
//		fp3 = fopen(outsel, "w");
//		fprintf(fp3, "   ѧ��\t\t�κ�\t\t�ɼ�\t\n");	/*���������*/
//		for (; k<sccount; k++)
//			fprintf(fp3, "%s\t%s\t\t%f\t\n", sclist[k].xh, sclist[k].kh, sclist[k].cj);
//		fclose(fp3);
//	}
//}
//void write_to_file2(Score cjlist[], int cjcount, Course clist[], int ccount, Student slist[], int scount)
//{
//	FILE *fp;
//	int i = 0, j, k, s;
//	char outcj[99];
//
//	printf("�����뵼���ĳɼ����ļ����ļ���\n");
//	scanf("%s", outcj);
//	fp = fopen(outcj, "w");
//	for (; i<cjcount; i++)
//	{
//		fprintf(fp, "����:%d ѧ��:%s ����:%s ", i + 1, cjlist[i].xh, cjlist[i].xm);
//		for (s = 0;; s++)/*��ѧ����Ϣ���в��Ҷ�Ӧѧ�����Ա����*/
//		{
//			if (strcmp(cjlist[i].xh, slist[s].xh) == 0)
//			{
//				fprintf(fp, "�Ա�:%s\n", slist[s].xb);
//				break;
//			}
//		}
//		for (k = 0; k<30; k++)
//		{
//			fprintf(fp, "�γ̺�:%s �γ���%s ", cjlist[i].kh[k], cjlist[i].km[k]);
//			for (j = 0;; j++)/*�ӿγ���Ϣ���в��Ҷ�Ӧ�γ̵�ѧ�ֲ����*/
//			{
//				if (strcmp(cjlist[i].kh[k], clist[j].kh) == 0)
//				{
//					fprintf(fp, "�γ�ѧ��:%f ", clist[j].xf);
//					break;
//				}
//			}
//			fprintf(fp, "�γ̳ɼ�:%f\n", cjlist[i].cj[k]);
//			if (cjlist[i].cj[k + 1] == -1)/*����һ��ɼ�������ʱ��˵�����гɼ�����������*/
//			{
//				fprintf(fp, "ƽ���ɼ�:%f ��ѧ��:%f\n", cjlist[i].zpj, cjlist[i].zxf);
//				break;
//			}
//		}
//	}
//	fclose(fp);
//}
//
//int main()
//{
//	Student slist[30];
//	Course clist[100];
//	Select sclist[900];
//	Score cjlist[30];//�����¼��Ϣ�Ľṹ������
//
//	int a = 0, b = 0, c = 0, d = 0, m;
//	int *scount = &a, *ccount = &b, *sccount = &c, *cjcount = &d;
//	int i = -1;/*����¼���û�ѡ��ı���*/
//	char s;
//
//	for (;;)/*ͨ������ѭ��ʵ�ֳ���Ĺ����л�*/
//	{
//		system("cls");
//		print();
//		scanf("%d", &i);
//		system("cls");
//		if (i == 1)/*��Ӧ��ʼ������*/
//		{
//			init(slist, scount, clist, ccount, sclist, sccount);
//			*cjcount = create_cjlist(sclist, *sccount, clist, *ccount, cjlist);
//			complete_cjlist(cjlist, *cjcount, slist, *scount, clist, *ccount);
//			printf("��ʼ����ɣ��밴�����������");
//			system("pause");
//		}
//		else if (i == 2)/*��Ӧ��ʾ����*/
//		{
//			printf("��ѡ��:\n");
//			printf("a.��ʾѧ����Ϣ\n");
//			printf("b.��ʾ�γ���Ϣ\n");
//			printf("c.��ʾ�ɼ�����Ϣ\n");
//			s = getch();
//			if (s == 'a' || s == 'A') disp_slist(slist, *scount);
//			else if (s == 'b' || s == 'B') disp_course(clist, *ccount);
//			else if (s == 'c' || s == 'C') disp_cjlist(cjlist, *cjcount, clist, *ccount, slist, *scount);
//			else { printf("�����������󣬰���������ز˵����档"); system("pause"); continue; }
//			printf("��ʾ��ɣ��밴��������ز˵����档");
//			system("pause");
//		}
//		else if (i == 3)/*��Ӧ���빦�ܣ�ÿ��������������´����ɼ���*/
//		{
//			printf("��ѡ��:\n");
//			printf("a.¼���µ�ѧ����Ϣ\n");
//			printf("b.¼���µĿγ���Ϣ\n");
//			printf("c.¼���µ�ѡ����Ϣ\n");
//			s = getch();
//			if (s == 'a' || s == 'A') *scount = input_stud(slist, *scount);
//			else if (s == 'b' || s == 'B') *ccount = input_course(clist, *ccount);
//			else if (s == 'c' || s == 'C') *sccount = input_select(sclist, *sccount, slist, *scount, clist, *ccount);
//			else { printf("�����������󣬰���������ز˵����档"); system("pause"); continue; }
//			*cjcount = create_cjlist(sclist, *sccount, clist, *ccount, cjlist);
//			complete_cjlist(cjlist, *cjcount, slist, *scount, clist, *ccount);
//			printf("¼����ɣ��밴��������ز˵����档");
//			system("pause");
//		}
//		else if (i == 4)/*��Ӧɾ�����ܣ�ÿ��ɾ�����������´����ɼ���*/
//		{
//			printf("��ѡ��:\n");
//			printf("a.ɾ��ѧ����Ϣ\n");
//			printf("b.ɾ���γ���Ϣ\n");
//			printf("c.ɾ��ѡ����Ϣ\n");
//			s = getch();
//			if (s == 'a' || s == 'A') *scount = delete_slist(slist, *scount);
//			else if (s == 'b' || s == 'B') *ccount = delete_course(clist, *ccount);
//			else if (s == 'c' || s == 'C') *sccount = delete_select(sclist, *sccount);
//			else { printf("�����������󣬰���������ز˵����档"); system("pause"); continue; }
//			*cjcount = create_cjlist(sclist, *sccount, clist, *ccount, cjlist);
//			complete_cjlist(cjlist, *cjcount, slist, *scount, clist, *ccount);
//			printf("ɾ����ɣ��밴��������ز˵����档");
//			system("pause");
//		}
//		else if (i == 5)/*��Ӧ��ѯ����*/
//		{
//			printf("��ѡ��:\n");
//			printf("a.��ѯѧ����Ϣ\n");
//			printf("b.��ѯ�γ���Ϣ\n");
//			printf("c.��ѯ�ɼ���Ϣ\n");
//			s = getch();
//			if (s == 'a' || s == 'A') query_stud(slist, *scount);
//			else if (s == 'b' || s == 'B') query_course(clist, *ccount);
//			else if (s == 'c' || s == 'C') query_cjlist(cjlist, *cjcount, clist, *ccount, slist, *scount);
//			else { printf("�����������󣬰���������ز˵����档"); system("pause"); continue; }
//			printf("��ѯ�������밴��������ز˵����档");
//			system("pause");
//		}
//		else if (i == 6)/*��Ӧ��������*/
//		{
//			printf("��ѡ��:\n");
//			printf("a.����ѧ�����γ̻�ѡ����Ϣ\n");
//			printf("b.�����ɼ�����Ϣ\n");
//			s = getch();
//			if (s == 'a' || s == 'A') write_to_file1(slist, *scount, clist, *ccount, sclist, *sccount);
//			else if (s == 'b' || s == 'B') write_to_file2(cjlist, *cjcount, clist, *ccount, slist, *scount);
//			else { printf("�����������󣬰���������ز˵����档"); system("pause"); continue; }
//			printf("������ɣ��밴��������ز˵����档");
//			system("pause");
//		}
//		else if (i == 0) exit(0);
//		else 	/*���û������ѡ����������Χ��*/
//		{
//			printf("�����������󣬰���������ز˵�������������\n");
//			system("pause");
//		}
//	}
//	return 0;
//}