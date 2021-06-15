#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<errno.h>
#include<string.h>
#include<stdlib.h>
//
//void my_strcpy(char* arr1,char* arr2)
//{
//	while (*(arr2)++ != '\0')
//	{
//		*arr1++ = *arr2;
//	}
//}
//
//
//int main()
//{
//	char arr1[] = "*************";
//	char arr2[] = "hello";
//	my_strcpy(arr1, arr2);
//	puts(arr1);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	const int *p = &a;
//	int *p1 = &b;
//	p = p1;
//	printf("%d ", *p);
//	return 0;
//}
//


//int main//变种水仙花数
//{
//	int a = 10000;
//	for (; a <= 99999; a++)
//	{
//		int sum = 0;
//		int n = 10;
//		while (a / n != 0)
//		{
//			sum += (a%n)*(a / n);
//			n *= 10;
//		}
//		if (sum == a)
//		{
//			printf("%d ", a);
//		}
//	}
//	return 0;
//}


//int my_strlen(const char *p1)
//{
//	if (*p1 == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(p1++);
//}



//int MY_strlen(const char *p1)
//{
//	int len = 0;
//	while (*p1 != '\0')
//	{
//		len++;
//	}
//	return len;
//}



//int MY_strlen(const char *p1)
//{
//   assert(p1);
//	char *p = p1;
//	while (*++p1)
//	{
//		;
//	}
//	return p1 - p;
//}
//
//
//int main()
//{
//	char arr[] = "abcde";
//	printf("%d",MY_strlen(arr));
//	
//	return 0;
//}

//char * my_memmove(void *des, const void *sou, size_t num)
//{
//	assert(des&&sou);
//	if (des < sou)
//	{
//		while (num--)
//		{
//			*(char*)des = *(char *)sou;
//			des = (char*)des +1 ;
//			sou = (char*)sou + 1;
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			*((char*)des + num) = *((char*)sou + num);
//		}
//	}
//	return des;
//
//}
//char *my_memcpy(void *des, void *src, size_t num)
//{
//	assert(des&&src);
//	while (num--)
//	{
//		*(char*)des = *(char*)src;
//		des = (char *)des + 1;
//		src = (char *)src + 1;
//
//	}
//
//	return des;
//
//}
//
//
//int main()
//{
//	char arr[] = "abcdefg";
//	char arr1[] = "1234567";
//	int num = 0;
//	scanf("%d", &num);
//	my_memcpy(arr, arr1, num);
//	puts(arr);
//	return 0;
//}

//char a(  char *const p1)
//{
//
//}
//
//int main()
//{
//	char arr[] = "acdec";
//     char *  p = arr;
//	char a(p);
////	return 0;
////}
//int main()
//{
//	FILE *fp = fopen("ccc", "r");
//	perror("fp");
//	printf("%s", strerror(errno));
//	return 0;
//}
typedef  struct 
{
	int a;
	 
}student;