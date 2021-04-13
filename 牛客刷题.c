#include<stdio.h>


//char* solve(char* str)//·´×ª×Ö·û´®(¼òµ¥)
//{
//	 write code here
//	char *p = str;
//	char *q = str;
//	while (*q != 0)
//		q++;
//	    q--;
//	while (q >= p)
//	{
//		char tmp = *p;
//		*p = *q;
//		*q = tmp;
//		p++;
//		q--;
//	}
//	return str;
//}

//
//int main()
//{
//	char arr[10] = "abcdefg";
//	printf("%s", solve(arr));
//	return 0;
//}
//int* twoSum(int* nums, int numsSize, int target, int* returnSize)
//{
//	int *p = nums;
//	int *q = &nums[numsSize - 1];
//	int p1 = 0;
//	int q1 = numsSize;
//	while (q >= p)
//	{
//		if (*p + *q == target)
//		{
//			return &returnSize[p1, q1];
//		}
//		p++;
//		q--;
//		p1++;
//		q1--;
//	}
//}