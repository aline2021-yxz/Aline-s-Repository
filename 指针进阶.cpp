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
//int main()//��ά�����ڴ���ʱ�����ǵ�һ�еĵ�ַ
//{
//	int arr[3][5] = { { 1, 2, 2 }, { 2, 3, 5 }, { 5, 6, 7 } };
//	print(arr, 3, 5);
//	
//	return 0;
//}
//int (*parr3[10])[5] ,,parr3[10]��������һ�����飬*��ʾ����һ��ָ�����飬int��     ��{5}���������ͣ�����parr3��һ��ָ�����飬ÿ��Ԫ����һ��ָ��5��int��ָ��
//void print(int ((*arr)[4]))//��ά�����ٴ��ε�ʱ�򴫵���һά����ĵ�ַ
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
//typedef int((*nu)[][4]);//typedef����������ָ�������

//void print( int ((*arr)[4]))//�ڴ�����ά�����ָ��ʱֻ��Ҫ��ע�еĶ���
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
//	printf("%d\n", pa(2, 3));//����ָ�����ֱ�ӵ���
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));//ֻ��һ��*����
//	printf("%d\n", (***pa)(2, 3));
//
//	return 0;
//}

//����ָ������;������Դ�ź����ĵ�ַ  int (*arr[4])(int ,int)
//char*(*pf)(char*dest,const char* src)//ָ������ָ�룬�����Ĳ���Ϊ   ������ֵΪ
//char*(*pfarr[4])(char *dest,char *src)
//����ָ���������;;�򻯴���
//�ص�����//
//void calc(int(*pa)(int, int))
//{
//
//}
//
//// calc(add)
////ָ����ָ�������ָ��
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6 };
//	int (*p)[6] = &arr;
//	printf("%d ",( *p)[2]);
//	return 0;
//}
int(*(*pfarr)[10])(int ,int))//pfarr��һ������ָ�룬ָ���������10��Ԫ�أ�ÿ��Ԫ�ص�������һ������ָ�롣