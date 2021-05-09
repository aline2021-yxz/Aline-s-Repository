//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<time.h>
//#define LINE 9
//#define ROW 9
//#define easy_count 20
//void menu()
//{
//	printf("***************** 扫雷游戏 *******************\n");
//	printf("*****1:play  *********  0:exit****************\n");
//	printf("**********************************************\n");
//
//}
//void InIt_board(char (*p)[ROW], char c)
//{
//	int a = 0;
//	for (; a < LINE; a++)
//	{
//		int b = 0;
//		for (; b < ROW; b++)
//		{
//		 (*(p+a))[b] = c;
//		}
//	}
//}
//
//void Print_board(char(*p)[ROW])
//{
//	int c = 0;
//	for (; c <= ROW; c++)
//	{
//		printf("%d ", c);
//	}
//	printf("\n");
//	int a = 0;
//	for (; a < LINE; a++)
//	{
//		int b = 0;
//		printf("%d ", a + 1);
//
//		for (; b < ROW; b++)
//		{
//			printf("%c ", (*(p + a))[b]);
//		}
//		printf("\n");
//	}
//}
//
//void Addtrap_board(char arr[][ROW], char p)
//{
//	int a, b,sum=easy_count;
//	while (sum)
//	{
//		a = rand() % LINE;
//		b = rand() % ROW;
//		if (arr[a][b] != '*')
//		{
//			arr[a][b] = '*';
//			sum--;
//		}
//	}
//}
//int Player_select_judge(char arr[][ROW], int sz,char arr1[][ROW])
//{
//	printf("请选择>>");
//	int a, b,c,d,sum=0;
//	while (1)
//	{
//		scanf("%d%d", &a, &b);
//		if (a<=0 || a>LINE || b<=0 || b>ROW)
//		{
//			printf("坐标非法,请重新选择>>");
//		}
//		else if (arr1[a-1][b-1] != '#')
//			printf("坐标已选择过，请重新选择>>");
//		else
//			break;
//	}
//	if (arr[a-1][b-1] == '*')
//		return 0;
//	else//统计周围雷的个数
//	{
//		for (c = a - 2; c <= a ; c++)
//		{
//			for (d = b - 2; d <= b ; d++)
//			{
//				if (c >= 0 && c < LINE&&d >= 0 && d < ROW)
//				{
//					if (arr[c][d] == '*')
//						sum++;
//				}
//			}
//		
//		}
//	}
//	int e = 0,f=0,sum1=0;
//	for (e = 0; e < LINE; e++)
//	{
//		for (f = 0; f < ROW; f++)
//		{
//			if (arr1[e][f] != '#')
//				sum1++;
//		}
//	}
//	if (sum1 == (LINE*ROW) - easy_count)
//		return 1;
//
//
//	arr1[a-1][b-1] = 48+sum;
//	return 2;
//}
//
//
//void gap()
//{
//	printf("*********************扫雷游戏*********************\n");
//	printf("\n");
//}
//
//
//void game()
//{
//	char board[LINE][ROW] = { 0 };
//	char board1[LINE][ROW] = { 0 };
//	int sz = sizeof(board) / sizeof(board[0]);
//	InIt_board(board1, ' ');
//	Addtrap_board(board, '*');//放雷
//	InIt_board(board1, '#');
//	int a = 2;
//	do
//	{
//		gap();
//		Print_board(board1);
//	    a = Player_select_judge(board, sz, board1);
//		if (a == 0)
//			printf("游戏结束，你输了\n");
//		else if (a == 1)
//			printf("恭喜你赢了\n");
//	} while (a != 0 && a != 1);
//	Print_board(board);
//
//
//}
//
//
//
//int main()
//{
//	srand((unsigned)time(NULL));
//	int chose;
//	do
//	{
//		menu();
//		printf("请选择\n");
//		scanf("%d", &chose);
//		switch (chose)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (chose);
//	return 0;
//}

//int main()
//{
//	int a, b,sum=0;
//	scanf("%d%d", &a, &b);
//	int c = a^b;
//	for (int d = 0; d <=32; d++)
//	{
//		if ((c & 1) == 1)
//			sum++;
//		c= c >> 1;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	printf("偶数位");
//	for (int b = 31; b>=1; b-=2)
//	{
//		printf("%d ", (a >> b) & 1);
//	}
//	printf("\n");
//	printf("奇数位");
//	for (int c = 30; c >= 0; c -= 2)
//	{
//		printf("%d ", (a >> c) & 1);
//	}
//	return 0;
//}
//int  NumberOf1(int n) 
//{
//	int a = 0,sum=0;
//	for (; a < 32; a++)
//	{
//		if (n & 1)
//			sum++;
//		n = n >> 1;
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", NumberOf1(a));
//	return 0;
//}

int main()
{
	int a, b;       //000000000000000000000011
	scanf("%d%d", &a, &b);//              0101      0110
	a = a^b;
	b = a^b;
	a = b^a;
	printf("a=%d,b=%d", a, b);
	return 0;
}