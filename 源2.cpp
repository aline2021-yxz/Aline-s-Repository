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
//}