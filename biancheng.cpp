//
////#define LINE 5
////int main()
////{
////	int arr[LINE][LINE] = { 0 };
////	for (int a = 0; a < LINE; a++)
////	{
////		arr[a][0] = 1;
////		arr[a][a] = 1;
////		for (int b =1; b< a; b++)
////		{
////			arr[a][b] = arr[a - 1][b - 1] + arr[a - 1][b];
////		}
////	}
////	for (int c = 0; c < LINE; c++)
////	{
////		for (int d = 0; d < LINE; d++)
////		{
////			if (arr[c][d])
////			printf("%d", arr[c][d]);
////		}
////		printf("\n");
////	}
////
////	return 0;
////}
//
//
////int main()
////{
////	int a=0, b=0, c=0, d=0,n=0,e=0;
////	int arr[] = { a, b, c, d };
////	do
////	{
////		a = 0, b = 0, c = 0, d = 0, n = 0;
////		arr[n] = 1;
////		if (arr[0])
////		{
////			e = 1;
////			arr[0] = 1;
////		}
////		else
////			arr[0] = 0;
////		if (arr[1])
////		{
////			arr[2] = 0;
////		}
////		else
////		{
////			e = 3;
////			arr[2] = 1;
////		}
////		if (arr[2])
////		{
////			arr[3] = 0;
////		}
////		else
////		{
////			arr[3] = 1;
////			e = 4;
////		}
////		if (arr[3])
////		{
////
////			arr[3] = 1;
////			e = 4;
////		}
////		else
////			arr[3] = 0;
////		n++;
////	} while ((a + b + c + d) % 5 == 1);
////	switch (e)
////	{
////	case 1:
////		printf("A");
////		break;
////	case 3:
////		printf("C");
////		break;
////	case 4:
////		printf("D");
////		break;
////	}
////	return 0;
////}
//
//
////int main()
////{
////	int A = 0, B = 0, C = 0, D = 0, E = 0;
////	for (A = 1; A <= 5; A++)
////	{
////		for (B =1 ; B <= 5; B++)
////		{
////			for (C = 1; C <=5; C++)
////			{
////				for (D = 1; D <= 5; D++)
////				{
////					for (E = 1; E <= 5; E++)
////					{
////						if ((B == 2 && A != 3) || (B != 2 && A == 3))
////						{
////							if ((B == 2 && E != 4) || (B != 2 && E == 4))
////							{
////								if ((C == 1 && D != 2) || (C != 1 && D == 2))
////								{
////									if ((C == 5 && D != 3) || (C != 5 && D == 3))
////									{
////										if ((E == 4 && A != 1) || (E != 4 && A == 1))
////										{
////											if (A*B*C*D*E == 120)
////											{
////												printf(" A为%d\n B为%d\n C为%d\n D为%d\n E为%d\n", A, B, C, D, E);
////												break;
////											}
////										}
////									}
////								}
////							}
////						}
////					}
////				}
////			}
////		}
////	}
////
////	return 0;
////}
//
////int main()
////{
////	int a = 48;
////	char *p = (char *)&a;
////	printf("%c", *p);
////	return 0;
////}
//
//#define LINE 5
//#define ROW  5
//void   Search_num(int(*p)[ROW], int sz, int num)
//{
//	if (num<(*p)[0] || num>(*(p + LINE - 1))[sz - 1])
//	{
//		printf("不存在\n");
//		return;
//	}
//	while (1)
//	{
//		if (num > (*p)[sz - 1])
//		{
//			p++;
//		}
//		else if (num != (*p)[sz - 1])
//		{
//			sz--;
//			if (sz == 0)
//			{
//				printf("不存在\n");
//				break;
//			}
//		}
//		else if (num == (*p)[sz - 1])
//		{
//			printf("存在\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[LINE][ROW] = { { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15 }, { 16, 17, 18, 19, 20 }, { 21, 22, 23, 25, 27 } };
//	int num = 0;
//	printf("请输入要查找的数字>>");
//	scanf("%d", &num);
//	int sz = sizeof(arr) / sizeof(arr[0][0]);
//	Search_num(arr, sz / LINE, num);
//	return 0;
//}