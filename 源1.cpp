#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
////
//static  int hhh = 2020; //static��ȫ�ֱ������������С�ˣ����������ֻ�������ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ��Ͳ�����
//
//int Add(int x,int y)//��һ��static��ʹ�����޷��������ļ�ʹ�ã�ֻ���ڱ��ļ�ʹ�ã��ı��˺������������ԣ�ʹ��ʧȥ���ⲿ��������
//{
//	int z = x + y;
//		return z;
////}
//int main()
//{
//	char arr[3] = {97};
//	printf("%c", arr[0]);
//}
//int main()//�׳����
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = 1;
//	int Sn = 0;
//	if (n <= 20 && n > 0)
//	{
//		int a = 0;
//		for (a = 1; a <= n; a++)
//		{
//			ret = ret*a;
//			Sn = Sn + ret;
//		}
//		printf("%d\n", Sn);
//	}
//	else if (n == 0)
//		printf("0");
//	return 0;
//}          
//void judge_(int a,int arr[1000])
//{
//	int b = 0;
//	int ret = 0;
//	int c = 0;
//	int d = 0;
//	int x = 0;
//	
//	for (b = 1; b < a; b++)
//	{
//		if (a % b == 0)
//		{
//			ret = ret + b;
//			arr[x] = b;
//			x++;
//
//		}
//	}
//	if (ret == a)
//	{
//			printf("%d its factors are ", a);
//			for (c = 0; c <x;c++)
//			{
//					printf("%d ", arr[c]);
//			}
//			printf("\n");
//	}
//	
//}
//int main()
//{
//	int N = 0;
//	int a = 0;
//	int arr[1000] = { 0 };
//	scanf("%d", &N);
//	for (a = 1; a < N; a++)
//	{
//				judge_(a,arr);
//	}
//	return 0;
//}
void Bubble_sort(int arr[10], int sz)
{
	int i = 0;
	int b = 0;
	for (b = 0; b < sz-1; b++)
	{
		for (i = 0; i < sz-b-1; i++)
		{
			if (arr[i]>arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
			}
		}
	}

}
int main()
{
	int a = 0;
	int arr[10] = { 0 };
	int c = 0;
	for (a = 0; a < 10; a++)
	{
		scanf("%d", &arr[a]);
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr, sz);
	for (c = 0; c < 10; c++)
	{
		printf("%d ", arr[c]);
	}
	return 0;
}