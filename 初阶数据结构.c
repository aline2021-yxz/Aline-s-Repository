#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1:��ʧ������    һ���������0-n�������飬������һ�����ֶ�ʧ�ˣ��ҳ��������Ҫ��ʱ�临�Ӷ���O(n) 

//���ֽⷨ

//1:���������������С����������ôǰ������ּ�1���Ǻ�������֣�ͨ��ǰ�����ּ�1�����ں�������ֿ��Խ��


//int compare(void *p1, void *p2)
//{
//	return (int *)p1 - (int *)p2;
//}
//
//int Find(int *p, int sz)
//{
//	int i = 0;
//	qsort(p, sz, sizeof(*p), compare);//qsort�ǿ�������ʱ�临�Ӷ���O(n*logn),��������ĿҪ��
//	for (i = 0; i < sz; i++)
//	{
//		if (*(p + i + 1) != (*(p + i) + 1))
//			return *(p + i)+1;
//	}
//}

//2:ͨ���ӷ���0-n���������ּ���������ȥ�����е�Ԫ�ؾ�����ʧ���Ǹ�����

//int Find(int *p,int sz)//ʱ�临�Ӷ��� O(n),������ĿҪ��
//{
//	int i = 0;
//	int sum=0;
//	for (; i < sz; i++)//��0 - n-1���������ּ�����
//	{
//		sum += i;
//		sum -= *(p + i);//��ȥ�����е�����Ԫ��
//	}
//	return sum + i;//�ټ���һ��n������
//}



//3:ʹ�������ͬ�������������Ľ����0����������ͨ������һ���������ȫ��0-n���������������ĳ�Ա�����Ľ��������ʧ������
//int Find(int *p, int sz)
//{
//	int num = 0;
//	for (int i = 0; i <= sz; i++)//���0-n������Ԫ��
//	{
//		num ^= i;
//	}
//	for (int a = 0; a < sz; a++)//�����������Ԫ��
//	{
//		num ^= *(p + a);
//	}
//	return num;
//
//}





//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d\n",Find(arr, sz));
//	return 0;
//}



//2����ת����     Ҫ��ռ临�Ӷ���O(1)  ���ַ���

//1:����������Ԫ�أ���ʣ��Ԫ��ȫ������һλ���ٽ������Ԫ�طŵ���һλ��������תһ��

//void Roat(int *p, int sz,int time)//ʱ�临�Ӷ���O(n^2),�ռ临�Ӷ���O(1)
//{
//  time%=sz;
//	for (int i = 0; i < time; i++)
//	{
//		int tmp = *(p + sz - 1);
//		for (int j = sz; j >1; j--)
//		{
//			*(p + j - 1) = *(p + j - 2);
//		}
//		*p = tmp;
//	}
//}




//2:�����µ����飬��ԭ�������ݿ����������顣   �ռ任ʱ��
//void Roat(int *p, int sz, int time)//ʱ�临�Ӷ���O(N),�ռ临�Ӷ���O(N)
//{
//	int i = 0;
//	int *tmp = (int *)malloc(sz*4);
//	time %= sz;
//	for ( i = 0; i < time; i++)//��������time��Ԫ�ص����������ǰ��
//	{
//		*(tmp + i) = *(p +time-1+ i);
//	}
//	for (int j = 0; j < sz - time; j++)//����ʣ�µ�ԭ����Ԫ�ص�������
//	{
//		*(tmp + i + j) = *(p + j);
//	}
//	for (int k = 0; k < sz; k++)//�����ٵ������Ԫ�ؿ�����ԭ����
//	{
//		*(p + k) = *(tmp + k);
//	}
//	free(tmp);
//	tmp = NULL;
//}



//3:������ת�� //1�Ƚ�ǰsz-time��Ԫ�����ã�
               //2�ٽ������Ԫ�����ã�
               //��ǰ������������

//void reverse(int* begin, int* end)
//{
//	while (end >= begin)
//	{
//		int tmp = *end;
//		*end = *begin;
//		*begin = tmp;
//		end--;
//		begin++;
//	}
//}
//
//
//void Roat(int *p, int sz, int time)
//{
//	time %= sz;
//	reverse(p, p + sz - time - 1);
//	reverse(p + sz - time, p + sz - 1);
//	reverse(p, p + sz - 1);
//
//}


//
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int time = 5;
//	Roat(arr, sz,time);
//
//	return 0;
//}



//˳���
//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//int main()
//{
//	char *p = NULL;
//	 p = (char *)malloc(10);
//	printf("%d\n", *(p+9));
//	 p = (char *)realloc(p,10);
//	printf("%d\n", *(p+100));
//	free(p);
//	return 0;
//}


//6.����һ������sum������N������Ԫ�ص�������Ѱ��Ԫ��a��b��ʹ��a + b�Ľ����ӽ�sum������ƽ��ʱ�临�Ӷ��ǣ�   ��
//
//
//��ҵ����
//A.O(n)
//B.O(n ^ 2)
//C.O(nlogn)
//D.O(logn)

//void Find(int *p, int sz)
//{
	//int ret = 0;
	//int num1 = 0;
	//int num2 = 0;
	//int k = 0;
	//for (int i = 0; i < sz; i++)
	//{
	//	ret ^= *(p + i);
	//}
	//for (k = 0; k < 32; k++)
	//{
	//	if ((ret >> k) & 1 == 1)
	//	{
	//		break;
	//	}
	//}
	//for (int j = 0; j < sz; j++)
	//{
	//	
	//	if ((*(p+j)>>k & 1) == 0)
	//	{
	//		num1 ^= (*(p + j));
	//	}
	//	else
	//		num2 ^= (*(p + j));
	//}
	//printf("%d %d", num1, num2);
//
//}
int* singleNumbers(int* nums, int numsSize, int* returnSize){
	int ret = 0;
	int k = 0;
	returnSize = (int*)malloc(2 *4);
	memset(returnSize, 0, 8);
	for (int i = 0; i < numsSize; i++)
	{
		ret ^= *(nums + i);
	}
	for (k = 0; k < 32; k++)
	{
		if ((ret >> k) & 1 == 1)
		{
			break;
		}
	}
	for (int j = 0; j < numsSize; j++)
	{

		if ((*(nums + j) >> k & 1) == 0)
		{
			*returnSize ^= (*(nums + j));
		}
		else
			*(returnSize+1) ^= (*(nums + j));
	}
	return returnSize;
}

int main()
{
	int arr[] = { 11, 2, 3, 4, 5, 5, 2, 3, 6 ,4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int *d = NULL;
	int *p =singleNumbers(arr, sz, d);
	printf("%d\n", *d);

	return 0;
}

