//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////int main()
//{
//	int arr[10] = { 0 };
//	printf("请输入九个由小到大的整数\n");
//	int a = 0,b,c,e;
//	for (a = 0; a < 9; a++)
//	{
//		scanf("%d", &arr[a]);
//	}
//	printf("请输入要插入的数\n");
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
//void exchange(char arr[100000],int length,int left)//使用递归完成字符串的逆序
//{
//	if (left <= length)
//	{
//		char tmp = arr[left];
//		arr[left] = arr[length - 1];
//		arr[length - 1] = tmp;
//		exchange(arr, --length, ++left);//左下标左移一位，右下标右移一位
//	}
//}
//
//int main()
//{
//	char arr[100000] = {0};
//	int left = 0;
//	gets(arr);//获取字符串
//	int  length=strlen(arr);//求出字符串的长度，以找到右下标
//	exchange(arr ,length,left);
//	puts(arr);//打印字符串
//
//	return 0;
////}
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <conio.h>
//
//typedef struct  //学生信息
//{
//	char xh[10];//学号.
//	char xm[20];//姓名，十个汉字以内
//	char xb[3]; //性别（男/女）
//	int nl;      //年龄
//}Student;
//typedef struct  //课程信息
//{
//	char kh[10];//课号，长度十字符以内
//	char km[25];//课名，十二个汉字以内
//	float xf;   //课程学分，为一个浮点数
//}Course;
//typedef struct  //学生选课信息
//{
//	char xh[10];//学生学号
//	char kh[10];//课程课号
//	float cj;    //成绩，为一个浮点数
//}Select;
//typedef struct//学生成绩单信息
//{
//	char xh[10];//学号
//	char xm[20];//姓名
//	char kh[30][10];//所选各门课程课号
//	char km[30][25];//所选各门课程课名
//	float cj[30];//各门课程成绩
//	float zpj;//加权平均分
//	float zxf;//总修习学分
//}Score;
//
//void print()/*用于显示菜单界面*/
//{
//	printf("*******学生成绩管理系统*******\n");
//	printf("             菜单             \n");
//	printf("初始化数据-------------------1\n");
//	printf("显示信息---------------------2\n");
//	printf("输入信息---------------------3\n");
//	printf("删除信息---------------------4             Present by     \n");
//	printf("查询信息---------------------5              032030211     \n");
//	printf("批量导出数据-----------------6               123zpz       \n");
//	printf("退出程序---------------------0                1000%%      \n");
//	printf("*******请给出您的选择: *******\n");
//}
//
//void init(Student slist[], int *scount, Course clist[], int *ccount, Select sclist[], int *sccount)/*从文件中读取初始信息*/
//{
//	FILE *fp1, *fp2, *fp3;/*fp1对应学生信息文件，fp2对应课程信息文件，fp3对应选课信息文件*/
//	char infile1[99], infile2[99], infile3[99];/*infile1对应学生信息文件，infile2对应课程信息文件，infile3对应选课信息文件*/
//	int i;/*通用循环变量*/
//	char ch1, ch2, ch3;/*用于确认文件是否已经全部读取完毕*/
//	/*以下程序用于初始化学生信息*/
//	printf("请输入要读取的学生文件的文件名:\n");
//	scanf("%s", infile1);/*获取初始学生信息文件文件名*/
//
//	fp1 = fopen(infile1, "r");/*打开对应名称文件*/
//	if (fp1 == NULL)/*如果没有找到对应文件，从初始文件"slist.txt"装入*/
//	{
//		printf("没有指定文件或指定失败，将从默认文件装入\n");
//		fp1 = fopen("slist.txt", "r");
//	}
//
//	for (i = 0;; i++)/*循环读取学生信息，写入对应的结构体中*/
//	{
//		fscanf(fp1, "%s%s%s%d\n", slist[i].xh, slist[i].xm, slist[i].xb, &slist[i].nl);
//		(*scount)++;/*通过指针将学生数据条数传输到函数外*/
//		ch1 = fgetc(fp1);/*判断文件是否读取完毕，是则结束循环*/
//		fseek(fp1, -1, SEEK_CUR);
//		if (ch1 == EOF) break;
//	}
//	/*以下程序用于初始化课程信息*/
//	printf("请输入要读取的课程文件的文件名:\n");
//	scanf("%s", infile2);/*获取初始课程信息文件文件名*/
//
//	fp2 = fopen(infile2, "r");/*打开对应名称文件*/
//	if (fp2 == NULL)/*如果没有找到对应文件，从初始文件"clist.txt"装入*/
//	{
//		printf("没有指定文件或指定失败，将从默认文件装入\n");
//		fp2 = fopen("clist.txt", "r");
//	}
//
//	for (i = 0;; i++)/*循环读取课程信息，写入对应的结构体中*/
//	{
//		fscanf(fp2, "%s%s%f\n", clist[i].kh, clist[i].km, &clist[i].xf);
//		(*ccount)++;/*通过指针将课程数据条数传输到函数外*/
//		ch2 = fgetc(fp2);/*判断文件是否读取完毕，是则结束循环*/
//		fseek(fp2, -1, SEEK_CUR);
//		if (ch2 == EOF) break;
//	}
//	/*以下程序用于初始化选课信息*/
//	printf("请输入要读取的选课文件的文件名:\n");
//	scanf("%s", infile3);/*获取初始选课信息文件文件名*/
//
//	fp3 = fopen(infile3, "r");/*打开对应名称文件*/
//	if (fp3 == NULL)/*如果没有找到对应文件，从初始文件"sclist.txt"装入*/
//	{
//		printf("没有指定文件或指定失败，将从默认文件装入\n");
//		fp3 = fopen("sclist.txt", "r");
//	}
//
//	for (i = 0;; i++)/*循环读取选课信息，写入对应的结构体中*/
//	{
//		fscanf(fp3, "%s%s%f\n", sclist[i].xh, sclist[i].kh, &sclist[i].cj);
//		(*sccount)++;/*通过指针将选课数据条数传输到函数外*/
//		ch3 = fgetc(fp3);/*判断文件是否读取完毕，是则结束循环*/
//		fseek(fp3, -1, SEEK_CUR);
//		if (ch3 == EOF) break;
//	}
//
//	fclose(fp1);
//	fclose(fp2);
//	fclose(fp3);
//}
//
//void sort_sclist(Select sclist[], int sccount)/*按照学号对学生选课信息升序排序*/
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
//int create_cjlist(Select sclist[], int sccount, Course clist[], int ccount, Score cjlist[])/*建立成绩单*/
//{
//	memset(cjlist, 0, sizeof(Score));/*清空原本成绩单结构体中的数据*/
//	sort_sclist(sclist, sccount);/*对选课结构体按照学号进行升序排序*/
//	int i = 0, j = 0, k, l, cjcount = 0;
//	/*i,j,k,l,m均为循环变量,其中i对应选课信息,j对应成绩单信息,l对应课程信息,k同时对应成绩单中的成绩信息和课程号*/
//	for (; i<sccount; j++)
//	{
//		strcpy(cjlist[j].xh, sclist[i].xh);/*新建一条成绩单记录*/
//		for (k = 0; k<30; k++)/*将该条成绩单中所有的成绩都置为不存在（用-1表示）*/
//			cjlist[j].cj[k] = -1;
//		cjlist[j].zpj = 0;
//		cjlist[j].zxf = 0;
//		cjcount++;
//		for (k = 0; k<30 && i<sccount; i++, k++)/*将对应学生的选课课号和成绩填入该学生对应的成绩单结构体中*/
//		{
//			if (strcmp(cjlist[j].xh, sclist[i].xh) == 0)/*判断成绩单此时对应的学号与选课信息中的学号是否对应*/
//			{
//				cjlist[j].cj[k] = sclist[i].cj;/*是则填入该学生此门课成绩*/
//				for (l = 0; l<100; l++)/*并在课程结构体中找到对应的课程号，填入成绩单中*/
//				{
//					if (strcmp(sclist[i].kh, clist[l].kh) == 0)
//					{
//						cjlist[j].zxf += clist[l].xf;/*将该门课程的学分累加到总学分中*/
//						cjlist[j].zpj += clist[l].xf*sclist[i].cj;/*将加权成绩先累加到总平均成绩中*/
//						strcpy(cjlist[j].kh[k], clist[l].kh);
//						break;
//					}
//				}
//			}
//			else { cjlist[j].zpj = cjlist[j].zpj / cjlist[j].zxf; break; }/*否则计算该同学的加权平均分*/
//		}
//		if (i == sccount) cjlist[j].zpj = cjlist[j].zpj / cjlist[j].zxf;
//	}
//	return (cjcount);
//}
//void complete_cjlist(Score cjlist[], int cjcount, Student slist[], int scount, Course clist[], int ccount)/*完善成绩单*/
//{
//	int j, m, s = 0, c;
//
//	for (j = 0; s<scount; s++)/*将对应学号的学生姓名填入成绩单中*/
//	{
//		if (strcmp(cjlist[j].xh, slist[s].xh) == 0)
//		{
//			strcpy(cjlist[j].xm, slist[s].xm);
//			j++;
//			s = 0;
//		}
//	}
//
//	for (j = 0; j<cjcount; j++)/*将对应课号的课程名填入成绩单中*/
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
//void sort_slist(Student slist[], int scount)/*按照学号对学生信息升序排序*/
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
//void sort_clist(Course clist[], int ccount)/*按照课程号对课程信息升序排序*/
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
//void sort_cjlist(Score cjlist[], int cjcount)/*按照平均成绩对成绩信息降序排序*/
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
//void disp_slist(Student slist[], int scount)/*显示学生信息*/
//{
//	sort_slist(slist, scount);
//	int i, j = 0;
//	for (; j<scount; j += 10)
//	{
//		for (i = 0; i<10 && i + j<scount; i++)
//		{
//			printf("学号:%s 姓名:%s 性别:%s 年龄:%d\n", slist[j + i].xh, slist[j + i].xm, slist[j + i].xb, slist[j + i].nl);
//		}
//		printf("按任意键继续显示记录\n");/*显示够十条信息后或显示完全部信息后提示次信息*/
//		system("pause");
//	}
//	printf("所有学生记录显示完毕\n");
//}
//void disp_course(Course clist[], int ccount)/*显示课程信息*/
//{
//	sort_clist(clist, ccount);
//	int i, j = 0;
//	for (; j<ccount; j += 10)
//	{
//		for (i = 0; i<10 && i + j<ccount; i++)
//		{
//			printf("课号:%s 课名:%s 学分:%f\n", clist[j + i].kh, clist[j + i].km, clist[j + i].xf);
//		}
//		printf("按任意键继续显示记录\n");/*显示够十条信息后或显示完全部信息后提示次信息*/
//		system("pause");
//	}
//	printf("所有课程记录显示完毕\n");
//}
//void disp_cjlist(Score cjlist[], int cjcount, Course clist[], int ccount, Student slist[], int scount)/*显示成绩单信息*/
//{
//	sort_cjlist(cjlist, cjcount);
//	int i, j, k;
//
//	for (j = 0; j<cjcount; j += 10)
//	{
//		for (i = 0; i<10 && i + j<cjcount; i++)
//		{
//			printf("学号:%s 姓名:%s 加权平均成绩:%f 总修习学分:%f\n", cjlist[i + j].xh, cjlist[i + j].xm, cjlist[i + j].zpj, cjlist[i + j].zxf);
//			for (k = 0; k<30; k++)
//			{
//				printf("课号:%s 课名:%s 成绩:%f\n", cjlist[i + j].kh[k], cjlist[i + j].km[k], cjlist[i + j].cj[k]);
//				if (cjlist[i + j].cj[k + 1] == -1) break;
//			}
//		}
//		printf("按任意键继续显示记录\n");/*显示够十条信息后或显示完全部信息后提示次信息*/
//		system("pause");
//	}
//	printf("所有学生成绩记录显示完毕\n");
//}
//
//int input_stud(Student slist[], int scount)/*输入学生信息*/
//{
//	int i = scount, j, n;
//	char a, b;
//	for (; i<30; i++)
//	{
//		printf("请依次输入学生的学号，姓名，性别，年龄。\n");
//		printf(" 学号:"); scanf("%s", slist[i].xh);
//		printf(" 姓名:"); scanf("%s", slist[i].xm);
//		printf(" 性别:"); scanf("%s", slist[i].xb);
//		printf(" 年龄:"); scanf("%d", &slist[i].nl);
//		for (j = 0, n = 0; j<scount; j++)/*与已有信息对比，核查相似项*/
//		{
//			if (strcmp(slist[i].xh, slist[j].xh) == 0)/*如果有相似项，输出该项并询问是否替换*/
//			{
//				printf("检测到已存在相同学号的记录:\n");
//				printf("学号:%s 姓名:%s 性别:%s 年龄:%d\n", slist[j].xh, slist[j].xm, slist[j].xb, slist[j].nl);
//				printf("是否替换？ a.替换  b.不替换\n");
//				b = getch();/*获取用户选择*/
//				if (b == 'a' || b == 'A')
//				{
//					slist[j] = slist[i];
//					n++;
//				}
//			}/*之后继续循环，查找新的相似项*/
//		}
//		if (n != 0) { scount--; i--; }/*n不等于零说明此条信息替换了某几条已有项，则不将该项作为新建项*/
//
//		scount++;
//
//		printf("按其他键继续输入，按r键重新输入上一组数据，按b键结束输入\n");
//		a = getch();
//		if (a == 'b' || a == 'B') break;
//		if (a == 'r' || a == 'R') i--, scount--;
//	}
//
//	return (scount);
//}
//int input_course(Course clist[], int ccount)/*输入课程信息*/
//{
//	int i = ccount, j, n;
//	char a, b;
//	for (; i<100; i++)
//	{
//		printf("请依次输入课程的课程号，课程名，课程学分。\n");
//		printf(" 课号:"); scanf("%s", clist[i].kh);
//		printf(" 课名:"); scanf("%s", clist[i].km);
//		printf(" 学分:"); scanf("%s", &clist[i].xf);
//		for (n = 0, j = 0; j<ccount; j++)/*与已有信息对比，核查相似项*/
//		{
//			if (strcmp(clist[i].kh, clist[j].kh) == 0)
//			{
//				printf("检测到已存在相同课号的记录:\n");
//				printf("课号:%s 课名:%s 学分:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//				printf("是否替换？ a.替换  b.新建一条记录\n");
//				b = getch();
//				if (b == 'a' || b == 'A')
//				{
//					clist[j] = clist[i];
//					n--;
//				}
//			}/*之后继续循环，查找新的相似项*/
//		}
//		if (n != 0) { ccount--; i--; }/*n不等于零说明此条信息替换了某几条已有项，则不将该项作为新建项*/
//
//		ccount++;
//
//		printf("按其他键继续输入，按r键重新输入上一组数据，按b键结束输入\n");
//		a = getch();
//		if (a == 'b' || a == 'B') break;
//		if (a == 'r' || a == 'R') i--, ccount--;
//	}
//
//	return (ccount);
//}
//int input_select(Select sclist[], int sccount, Student slist[], int scount, Course clist[], int ccount)/*输入选课信息*/
//{
//	int i = sccount, j, k, m, n;
//	char a, b;
//	for (; i<900; i++)
//	{
//		printf("请依次输入选课信息的学生学号，课程号，成绩。\n");
//		printf(" 学号:"); scanf("%s", sclist[i].xh);
//		for (j = 0; j<scount; j++)/*确认输入的学号是否是学生信息中存在的*/
//		{
//			if (strcmp(sclist[i].xh, slist[j].xh) == 0)
//				break;
//		}
//		if (j == scount)/*当输入的学号不存在时，j等于scount*/
//		{
//			printf("您输入的学号有误，请重新输入此条选课信息\n");
//			i--;
//			continue;
//		}
//
//		printf(" 课号:"); scanf("%s", sclist[i].kh);
//		for (k = 0; k<ccount; k++)/*确认输入的课号是否是课程信息中存在的*/
//		{
//			if (strcmp(sclist[i].kh, clist[k].kh) == 0)
//				break;
//		}
//		if (k == ccount)/*当输入的学号不存在时，k等于ccount*/
//		{
//			printf("您输入的课号有误，请重新输入此条选课信息\n");
//			i--;
//			continue;
//		}
//
//
//		printf(" 成绩（如暂无成绩请输入-1）:");
//		scanf("%f", &sclist[i].cj);
//		if (-1 >= sclist[i].cj || sclist[i].cj >= 120)
//		{
//			printf("您输入的成绩有误，请按照要求范围（-1<=成绩<=120）重新输入此条选课信息\n");
//			i--;
//			continue;
//		}
//
//		for (m = 0, n = 0; m<sccount; m++)/*与已有信息对比，核查相似项*/
//		{
//			if (strcmp(sclist[i].xh, sclist[m].xh) == 0 && strcmp(sclist[i].kh, sclist[m].kh) == 0)
//			{
//				printf("检测到已存在相同课号的记录:\n");
//				printf("学号:%s 课号:%s 成绩:%f\n", sclist[m].xh, sclist[m].kh, sclist[i].cj);
//				printf("是否替换？ a.替换  b.新建一条记录\n");
//				b = getch();
//				if (b == 'a' || b == 'A')
//				{
//					sclist[m] = sclist[i];
//					n++;
//				}
//			}/*之后继续循环，查找新的相似项*/
//		}
//		if (n != 0) { sccount--; i--; }/*n不等于零说明此条信息替换了某几条已有项，则不将该项作为新建项*/
//
//		sccount++;
//
//		printf("按其他键继续输入，按r键重新输入上一组数据，按b键结束输入\n");
//		a = getch();
//		if (a == 'b' || a == 'B') break;
//		if (a == 'r' || a == 'R') i--, sccount--;
//	}
//
//	return (sccount);
//}
//
//int delete_slist(Student slist[], int scount)/*删除学生信息*/
//{
//	int i = 0, j, m = 0;
//	char a, b[20], c;
//	char *p1, *p2, *p3 = b;
//
//	for (;;)
//	{
//		printf("请选择:\n");
//		printf("a.根据学号删除:\n");
//		printf("b.根据姓名删除:\n");
//		a = getch();
//
//		if (a == 'a' || a == 'A')
//		{
//			printf("请输入筛查条件:\n");/*获取关键字词*/
//			scanf("%s", b);
//			for (; i<scount; i++)
//			{
//				for (p1 = slist[i].xh; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//					{
//						if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//						{
//							printf("学号:%s,姓名:%s,性别:%s,年龄:%d\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//							m++;
//							printf("是否删除该组数据？a.是  b.否\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								scount--;
//								for (j = i; j<scount; slist[j] = slist[j + 1], j++);
//								i--;
//							}
//							break;/*脱出循环，防止重复输出此项*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//				}
//			}
//		}
//		else if (a == 'b' || a == 'B')
//		{
//			printf("请输入筛查条件:\n");/*获取关键字词*/
//			scanf("%s", b);
//			for (; i<scount; i++)
//			{
//				for (p1 = slist[i].xm; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//					{
//						if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//						{
//							printf("学号:%s,姓名:%s,性别:%s,年龄:%d\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//							m++;
//							printf("是否删除该组数据？a.是。b.否\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								scount--;
//								for (j = i; j<scount; slist[j] = slist[j + 1], j++);
//								i--;
//							}
//							break;/*脱出循环，防止重复输出此项*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//				}
//			}
//		}
//		else { printf("输入错误，请重新输入\n"); continue; }
//		if (m == 0) printf("很抱歉，未能找到符合条件的信息。");
//
//		printf("退出此界面请按q，继续删除信息请按其他键\n");
//		c = getch();
//		if (c == 'q' || c == 'Q')break;
//		else system("cls");
//	}
//	return scount;
//}
//int delete_course(Course clist[], int ccount)/*删除课程信息*/
//{
//	int i = 0, j, m = 0;
//	char a, b[20], c;
//	char *p1, *p2, *p3 = b;
//
//	for (;;)
//	{
//		printf("请选择:\n");
//		printf("a.根据课号删除:\n");
//		printf("b.根据课名删除:\n");
//		a = getch();
//
//		if (a == 'a' || a == 'A')
//		{
//			printf("请输入筛查条件:\n");/*获取关键字词*/
//			scanf("%s", b);
//			for (; i<ccount; i++)
//			{
//				for (p1 = clist[i].kh; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//					{
//						if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//						{
//							printf("课号:%s,课名:%s,学分:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//							m++;
//							printf("是否删除该组数据？a.是。b.否\n");
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
//			printf("请输入筛查条件:\n");
//			scanf("%s", b);
//			for (; i<ccount; i++)
//			{
//				for (p1 = clist[i].km; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//					{
//						if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//						{
//							printf("课号:%s,课名:%s,学分:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//							m++;
//							printf("是否删除该组数据？a.是。b.否\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								ccount--;
//								for (j = i; j<ccount; clist[j] = clist[j + 1], j++);
//								i--;
//							}
//							break;/*脱出循环，防止重复输出此项*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//				}
//			}
//		}
//		else { printf("输入错误，请重新输入\n"); continue; }
//		if (m == 0) printf("很抱歉，未能找到符合条件的信息。");
//
//		printf("退出此界面请按q，继续删除信息请按其他键\n");
//		c = getch();
//		if (c == 'q' || c == 'Q')break;
//		else system("cls");
//	}
//	return ccount;
//}
//int delete_select(Select sclist[], int sccount)/*删除选课信息*/
//{
//	int i = 0, j, m = 0;
//	char a, b[20], c;
//	char *p1, *p2, *p3 = b;
//
//	for (;;)
//	{
//		printf("请选择:\n");
//		printf("a.根据学号删除:\n");
//		printf("b.根据课号删除:\n");
//		a = getch();
//
//		if (a == 'a' || a == 'A')
//		{
//			printf("请输入筛查条件:\n");/*获取关键字词*/
//			scanf("%s", b);
//			for (; i<sccount; i++)
//			{
//				for (p1 = sclist[i].xh; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//					{
//						if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//						{
//							printf("学号:%s,课号:%s,成绩:%f\n", sclist[i].xh, sclist[i].kh, sclist[i].cj);
//							m++;
//							printf("是否删除该组数据？a.是。b.否\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								sccount--;
//								for (j = i; j<sccount; sclist[j] = sclist[j + 1], j++);
//								i--;
//							}
//							break;/*脱出循环，防止重复输出此项*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//				}
//			}
//		}
//		else if (a == 'b' || a == 'B')
//		{
//			printf("请输入筛查条件:\n");/*获取关键字词*/
//			scanf("%s", b);
//			for (; i<sccount; i++)
//			{
//				for (p1 = sclist[i].kh; *p1 != 0; p1++)
//				{
//					for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//					{
//						if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//						{
//							printf("学号:%s,课号:%s,成绩:%f\n", sclist[i].xh, sclist[i].kh, sclist[i].cj);
//							m++;
//							printf("是否删除该组数据？a.是。b.否\n");
//							a = getch();
//
//							if (a == 'a' || a == 'A')
//							{
//								sccount--;
//								for (j = i; j<sccount; sclist[j] = sclist[j + 1], j++);
//								i--;
//							}
//							break;/*脱出循环，防止重复输出此项*/
//						}
//					}
//					if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//				}
//			}
//		}
//		else { printf("输入错误，请重新输入\n"); continue; }
//		if (m == 0) printf("很抱歉，未能找到符合条件的信息。");
//
//		printf("退出此界面请按q，继续删除信息请按其他键\n");
//		c = getch();
//		if (c == 'q' || c == 'Q')break;
//		else system("cls");
//	}
//	return sccount;
//}
//
//void query_stud(Student slist[], int scount)/*查询学生信息*/
//{
//	int i = 0, n = 0;
//	char a, b[20];
//	char *p1, *p2, *p3 = b;
//	printf("请选择:\n");
//	printf("a.根据学号查询:\n");
//	printf("b.根据姓名查询:\n");
//	a = getch();
//
//	if (a == 'a' || a == 'A')
//	{
//		printf("请输入关键字:");/*获取关键字词*/
//		scanf("%s", b);
//		for (; i<scount; i++)
//		{
//			for (p1 = slist[i].xh; *p1 != 0; p1++)
//			{
//				for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//				{
//					if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//					{
//						printf("学号:%s 姓名:%s 性别:%s 年龄:%d\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//						n++;
//						break;/*脱出循环，防止重复输出此项*/
//					}
//				}
//				if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//			}
//		}
//	}
//	else if (a == 'b' || a == 'B')
//	{
//		printf("请输入关键字:");/*获取关键字词*/
//		scanf("%s", b);
//		for (; i<scount; i++)
//		{
//			for (p1 = slist[i].xm; *p1 != 0; p1++)
//			{
//				for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//				{
//					if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//					{
//						printf("学号:%s 姓名:%s 性别:%s 年龄:%d\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//						n++;
//						break;/*脱出循环，防止重复输出此项*/
//					}
//				}
//				if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//			}
//		}
//	}
//	if (n == 0) printf("很抱歉，未能找到符合条件的信息。");
//}
//void query_course(Course clist[], int ccount)
//{
//
//	int i = 0, n = 0;
//	char a, b[20];
//	char *p1, *p2, *p3 = b;
//	printf("请选择:\n");
//	printf("a.根据课号查询:\n");
//	printf("b.根据课名查询:\n");
//	a = getch();
//
//	if (a == 'a' || a == 'A')
//	{
//		printf("请输入关键字:");/*获取关键字词*/
//		scanf("%s", b);
//		for (; i<ccount; i++)
//		{
//			for (p1 = clist[i].kh; *p1 != 0; p1++)
//			{
//				for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//				{
//					if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//					{
//						printf("课号:%s 课名:%s 学分:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//						n++;
//						break;/*脱出循环，防止重复输出此项*/
//					}
//				}
//				if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//			}
//		}
//	}
//	else if (a == 'b' || a == 'B')
//	{
//		printf("请输入关键字:");/*获取关键字词*/
//		scanf("%s", b);
//		for (; i<ccount; i++)
//		{
//			for (p1 = clist[i].km; *p1 != 0; p1++)
//			{
//				for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)/*与已有信息进行对比，找到包含关键字词的信息*/
//				{
//					if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//					{
//						printf("课号:%s 课名:%s 学分:%f\n", clist[i].kh, clist[i].km, clist[i].xf);
//						n++;
//						break;/*脱出循环，防止重复输出此项*/
//					}
//				}
//			}
//			if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//		}
//	}
//	if (n == 0) printf("很抱歉，未能找到符合条件的信息。");
//}
//void query_cjlist(Score cjlist[], int cjcount, Course clist[], int ccount, Student slist[], int scount)
//{
//	sort_cjlist(cjlist, cjcount);
//	int i = 0, n = 0, k;
//	char a, b[20];
//	char *p1, *p2, *p3 = b;
//
//	printf("请输入学号关键字:\n");/*获取关键字词*/
//	scanf("%s", b);
//	for (; i<cjcount; i++)
//	{
//		for (p1 = cjlist[i].xh; *p1 != 0; p1++)
//		{
//			for (p2 = p1, p3 = b; *p3 == *p2; p2++, p3++)	/*与已有信息进行对比，找到包含关键字词的信息*/
//			{
//				if (*(p3 + 1) == 0)/*如果找到了符合要求的项，就将其输出*/
//				{
//					printf("学号%s 姓名%s 平均分%f 总修习学分%f 排名%d\n", cjlist[i].xh, cjlist[i].xm, cjlist[i].zpj, cjlist[i].zxf, i + 1);
//					for (k = 0; k<30; k++)
//					{
//						printf("课号:%s 课名:%s 成绩:%f\n", cjlist[i].kh[k], cjlist[i].km[k], cjlist[i].cj[k]);
//						if (cjlist[i].cj[k + 1] == -1) break;
//					}
//					n++;
//					break;/*脱出循环，防止重复输出此项*/
//				}
//			}
//			if (*(p3 + 1) == 0) break;/*脱出循环，防止重复输出此项*/
//		}
//	}
//	if (n == 0) printf("很抱歉，未能找到符合条件的信息。");
//}
//
//void write_to_file1(Student slist[], int scount, Course clist[], int ccount, Select sclist[], int sccount)
//{
//	FILE *fp1, *fp2, *fp3;
//	char outstud[99], outcou[99], outsel[99];
//	char a, b, c;
//	int i = 0, j = 0, k = 0;
//
//	printf("是否将学生信息导出到文件？\n");
//	printf("是请按a，否则按任意键\n");
//	a = getch();
//	if (a == 'a' || a == 'A')
//	{
//		printf("请输入导出的学生信息文件的文件名\n");
//		scanf("%s", outstud);
//		fp1 = fopen(outstud, "w");
//		fprintf(fp1, "    学号\t姓名\t性别\t年龄\t\n");/*输出标题行*/
//		for (; i<scount; i++)
//			fprintf(fp1, "%s\t%s\t %s\t %d\t\n", slist[i].xh, slist[i].xm, slist[i].xb, slist[i].nl);
//		fclose(fp1);
//	}
//
//	printf("是否将课程信息导出到文件？\n");
//	printf("是请按a，否则按任意键\n");
//	b = getch();
//	if (b == 'a' || b == 'A')
//	{
//		printf("请输入导出的课程信息文件的文件名\n");
//		scanf("%s", outcou);
//		fp2 = fopen(outcou, "w");
//		fprintf(fp2, "  课号\t\t课名\t  学分\t\n");/*输出标题行*/
//		for (; j<ccount; j++)
//			fprintf(fp2, "%s\t\t%s\t%f\t\n", clist[j].kh, clist[j].km, clist[j].xf);
//		fclose(fp2);
//	}
//
//	printf("是否将选课信息导出到文件？\n");
//	printf("是请按a，否则按任意键\n");
//	c = getch();
//	if (c == 'a' || c == 'A')
//	{
//		printf("请输入导出的选课信息文件的文件名\n");
//		scanf("%s", outsel);
//		fp3 = fopen(outsel, "w");
//		fprintf(fp3, "   学号\t\t课号\t\t成绩\t\n");	/*输出标题行*/
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
//	printf("请输入导出的成绩单文件的文件名\n");
//	scanf("%s", outcj);
//	fp = fopen(outcj, "w");
//	for (; i<cjcount; i++)
//	{
//		fprintf(fp, "名次:%d 学号:%s 姓名:%s ", i + 1, cjlist[i].xh, cjlist[i].xm);
//		for (s = 0;; s++)/*从学生信息表中查找对应学生的性别并输出*/
//		{
//			if (strcmp(cjlist[i].xh, slist[s].xh) == 0)
//			{
//				fprintf(fp, "性别:%s\n", slist[s].xb);
//				break;
//			}
//		}
//		for (k = 0; k<30; k++)
//		{
//			fprintf(fp, "课程号:%s 课程名%s ", cjlist[i].kh[k], cjlist[i].km[k]);
//			for (j = 0;; j++)/*从课程信息表中查找对应课程的学分并输出*/
//			{
//				if (strcmp(cjlist[i].kh[k], clist[j].kh) == 0)
//				{
//					fprintf(fp, "课程学分:%f ", clist[j].xf);
//					break;
//				}
//			}
//			fprintf(fp, "课程成绩:%f\n", cjlist[i].cj[k]);
//			if (cjlist[i].cj[k + 1] == -1)/*当下一项成绩不存在时，说明所有成绩都输出完毕了*/
//			{
//				fprintf(fp, "平均成绩:%f 总学分:%f\n", cjlist[i].zpj, cjlist[i].zxf);
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
//	Score cjlist[30];//定义记录信息的结构体数组
//
//	int a = 0, b = 0, c = 0, d = 0, m;
//	int *scount = &a, *ccount = &b, *sccount = &c, *cjcount = &d;
//	int i = -1;/*用于录入用户选择的变量*/
//	char s;
//
//	for (;;)/*通过无限循环实现程序的功能切换*/
//	{
//		system("cls");
//		print();
//		scanf("%d", &i);
//		system("cls");
//		if (i == 1)/*对应初始化功能*/
//		{
//			init(slist, scount, clist, ccount, sclist, sccount);
//			*cjcount = create_cjlist(sclist, *sccount, clist, *ccount, cjlist);
//			complete_cjlist(cjlist, *cjcount, slist, *scount, clist, *ccount);
//			printf("初始化完成，请按任意键继续。");
//			system("pause");
//		}
//		else if (i == 2)/*对应显示功能*/
//		{
//			printf("请选择:\n");
//			printf("a.显示学生信息\n");
//			printf("b.显示课程信息\n");
//			printf("c.显示成绩单信息\n");
//			s = getch();
//			if (s == 'a' || s == 'A') disp_slist(slist, *scount);
//			else if (s == 'b' || s == 'B') disp_course(clist, *ccount);
//			else if (s == 'c' || s == 'C') disp_cjlist(cjlist, *cjcount, clist, *ccount, slist, *scount);
//			else { printf("您的输入有误，按任意键返回菜单界面。"); system("pause"); continue; }
//			printf("显示完成，请按任意键返回菜单界面。");
//			system("pause");
//		}
//		else if (i == 3)/*对应输入功能，每次输入结束后重新创建成绩单*/
//		{
//			printf("请选择:\n");
//			printf("a.录入新的学生信息\n");
//			printf("b.录入新的课程信息\n");
//			printf("c.录入新的选课信息\n");
//			s = getch();
//			if (s == 'a' || s == 'A') *scount = input_stud(slist, *scount);
//			else if (s == 'b' || s == 'B') *ccount = input_course(clist, *ccount);
//			else if (s == 'c' || s == 'C') *sccount = input_select(sclist, *sccount, slist, *scount, clist, *ccount);
//			else { printf("您的输入有误，按任意键返回菜单界面。"); system("pause"); continue; }
//			*cjcount = create_cjlist(sclist, *sccount, clist, *ccount, cjlist);
//			complete_cjlist(cjlist, *cjcount, slist, *scount, clist, *ccount);
//			printf("录入完成，请按任意键返回菜单界面。");
//			system("pause");
//		}
//		else if (i == 4)/*对应删除功能，每次删除结束后重新创建成绩单*/
//		{
//			printf("请选择:\n");
//			printf("a.删除学生信息\n");
//			printf("b.删除课程信息\n");
//			printf("c.删除选课信息\n");
//			s = getch();
//			if (s == 'a' || s == 'A') *scount = delete_slist(slist, *scount);
//			else if (s == 'b' || s == 'B') *ccount = delete_course(clist, *ccount);
//			else if (s == 'c' || s == 'C') *sccount = delete_select(sclist, *sccount);
//			else { printf("您的输入有误，按任意键返回菜单界面。"); system("pause"); continue; }
//			*cjcount = create_cjlist(sclist, *sccount, clist, *ccount, cjlist);
//			complete_cjlist(cjlist, *cjcount, slist, *scount, clist, *ccount);
//			printf("删除完成，请按任意键返回菜单界面。");
//			system("pause");
//		}
//		else if (i == 5)/*对应查询功能*/
//		{
//			printf("请选择:\n");
//			printf("a.查询学生信息\n");
//			printf("b.查询课程信息\n");
//			printf("c.查询成绩信息\n");
//			s = getch();
//			if (s == 'a' || s == 'A') query_stud(slist, *scount);
//			else if (s == 'b' || s == 'B') query_course(clist, *ccount);
//			else if (s == 'c' || s == 'C') query_cjlist(cjlist, *cjcount, clist, *ccount, slist, *scount);
//			else { printf("您的输入有误，按任意键返回菜单界面。"); system("pause"); continue; }
//			printf("查询结束，请按任意键返回菜单界面。");
//			system("pause");
//		}
//		else if (i == 6)/*对应导出功能*/
//		{
//			printf("请选择:\n");
//			printf("a.导出学生、课程或选课信息\n");
//			printf("b.导出成绩单信息\n");
//			s = getch();
//			if (s == 'a' || s == 'A') write_to_file1(slist, *scount, clist, *ccount, sclist, *sccount);
//			else if (s == 'b' || s == 'B') write_to_file2(cjlist, *cjcount, clist, *ccount, slist, *scount);
//			else { printf("您的输入有误，按任意键返回菜单界面。"); system("pause"); continue; }
//			printf("导出完成，请按任意键返回菜单界面。");
//			system("pause");
//		}
//		else if (i == 0) exit(0);
//		else 	/*若用户输入的选择不在上述范围内*/
//		{
//			printf("您的输入有误，按任意键返回菜单界面重新输入\n");
//			system("pause");
//		}
//	}
//	return 0;
//}