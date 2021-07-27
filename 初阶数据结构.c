#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//1:消失的数字    一个数组包含0-n的所有书，但是有一个数字丢失了，找出这个数。要求时间复杂度在O(n) 

//三种解法

//1:如果对数组数据由小到大排序，那么前面的数字加1就是后面的数字，通过前面数字加1不等于后面的数字可以解得


//int compare(void *p1, void *p2)
//{
//	return (int *)p1 - (int *)p2;
//}
//
//int Find(int *p, int sz)
//{
//	int i = 0;
//	qsort(p, sz, sizeof(*p), compare);//qsort是快速排序，时间复杂度是O(n*logn),不符合题目要求
//	for (i = 0; i < sz; i++)
//	{
//		if (*(p + i + 1) != (*(p + i) + 1))
//			return *(p + i)+1;
//	}
//}

//2:通过加法将0-n的所有数字加起来，减去数组中的元素就是消失的那个数字

//int Find(int *p,int sz)//时间复杂度是 O(n),满足题目要求
//{
//	int i = 0;
//	int sum=0;
//	for (; i < sz; i++)//将0 - n-1的所有数字加起来
//	{
//		sum += i;
//		sum -= *(p + i);//减去数组中的所有元素
//	}
//	return sum + i;//少加了一个n，加上
//}



//3:使用异或，相同的两个数字异或的结果是0，所以我们通过创建一个数异或了全部0-n的数字来异或数组的成员，异或的结果就是消失的数字
//int Find(int *p, int sz)
//{
//	int num = 0;
//	for (int i = 0; i <= sz; i++)//异或0-n的所有元素
//	{
//		num ^= i;
//	}
//	for (int a = 0; a < sz; a++)//异或所有数组元素
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



//2：旋转数组     要求空间复杂度在O(1)  三种方法

//1:保存最后面的元素，将剩余元素全部后移一位，再将保存的元素放到第一位，这是旋转一次

//void Roat(int *p, int sz,int time)//时间复杂度是O(n^2),空间复杂度是O(1)
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




//2:创建新的数组，将原数组数据拷贝到新数组。   空间换时间
//void Roat(int *p, int sz, int time)//时间复杂度是O(N),空间复杂度是O(N)
//{
//	int i = 0;
//	int *tmp = (int *)malloc(sz*4);
//	time %= sz;
//	for ( i = 0; i < time; i++)//拷贝后面time个元素到开辟数组的前面
//	{
//		*(tmp + i) = *(p +time-1+ i);
//	}
//	for (int j = 0; j < sz - time; j++)//拷贝剩下的原数组元素到新数组
//	{
//		*(tmp + i + j) = *(p + j);
//	}
//	for (int k = 0; k < sz; k++)//将开辟的数组的元素拷贝到原数组
//	{
//		*(p + k) = *(tmp + k);
//	}
//	free(tmp);
//	tmp = NULL;
//}



//3:三步反转法 //1先将前sz-time个元素逆置，
               //2再将后面的元素逆置，
               //将前后两部分逆置

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



//顺序表
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


//6.给定一个整数sum，从有N个有序元素的数组中寻找元素a，b，使得a + b的结果最接近sum，最快的平均时间复杂度是（   ）
//
//
//作业内容
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

