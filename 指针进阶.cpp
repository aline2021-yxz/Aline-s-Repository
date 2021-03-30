#include<stdio.h>

//void print(int(*arr)[5], int x, int y)
//{
//	int a = 0;
//	for (a = 0; a < 3; a++)
//	{
//		printf("%d", *(*(arr+a)));
//	}
//
//}
//int main()//二维数组在传参时穿的是第一行的地址
//{
//	int arr[3][5] = { { 1, 2, 2 }, { 2, 3, 5 }, { 5, 6, 7 } };
//	print(arr, 3, 5);
//	
//	return 0;
//}
//int (*parr3[10])[5] ,,parr3[10]表明他是一个数组，*表示他是一个指针数组，int（     ）{5}是他的类型，所以parr3是一个指针数组，每个元素是一个指向5个int的指针
//void print(int ((*arr)[4]))//二维数组再传参的时候传的是一维数组的地址
//{
//	printf("%d ", (*arr)[0]);
//}
//
////int main()
//{
//	int arr[3][4] = { { 1, 22, 2 }, { 2, 6, 9 } };
//	print(arr);
//	return 0;
//}
//typedf  void(*  pfun_t)int;
//typedef int((*nu)[][4]);//typedef重命名数组指针的类型

//void print( int ((*arr)[4]))//在创建二维数组的指针时只需要标注列的多少
//{
//
//	printf("%d ",( *arr)[0]);
//}
//
//int main()
//{
//	int arr[][4] = { { 0, 5, 6, 8 }, {2,4,6,8} };
//	print(arr);
//	return 0;
////} 
//int add(int x, int y)
//{
//	int c = 0;
//	c = x + y;
//	return c;
//}
//int main()
//{
//	int(*pa)(int ,int ) = add;
//	printf("%d\n", pa(2, 3));//函数指针可以直接调用
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));//只有一个*有用
//	printf("%d\n", (***pa)(2, 3));
//
//	return 0;
//}

//函数指针数组;数组可以存放函数的地址  int (*arr[4])(int ,int)
//char*(*pf)(char*dest,const char* src)//指向函数的指针，函数的参数为   ，返回值为
//char*(*pfarr[4])(char *dest,char *src)
//函数指针数组的用途;简化代码
//回调函数//
//void calc(int(*pa)(int, int))
//{
//
//}
//
//// calc(add)
////指向函数指针数组的指针
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int (*p)[6] = &arr;
//	printf("%d ",( *p)[2]);
//	return 0;
//}
int(*(*pfarr)[10])(int ,int))//pfarr是一个数组指针，指向的数组有10个元素，每个元素的类型是一个函数指针。