#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

//void exchange(int *p1, int *p2)
//{
//	int p3 = *p1;
//	*p1 = *p2;
//	*p2 = p3;
//}
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a > b)
//		exchange(&a, &b);
//    if (a > c)
//		exchange(&a, &c);
//	if (b > c)
//		exchange(&b, &c);
//	cout << a <<" "<< b <<" "<< c << endl;
//	return 0;
//}





//void exchange(int &p1, int &p2)
//{
//	int p3 = p1;
//	p1 = p2;
//	p2 = p3;
//}
//
//int main()
//{
//	int a, b, c;
//	cin >> a >> b >> c;
//	if (a > b)
//		exchange(a, b);
//	if (a > c)
//		exchange(a, c);
//	if (b > c)
//		exchange(b, c);
//	cout << a << " " << b << " " << c << endl;
//	return 0;
//}







//
//int main()
//{
//	int a[10];
//	int *p = a;
//	for (int b = 0; b < 10; b++)
//	{
//		cin >> *(p + b);
//	}
//	for (int c = 0; c < 10; c++)
//	{
//		if (*p>*(p + c))
//			*p = *(p + c);
//	}
//
//	for (int d = 0; d < 10; d++)
//	{
//		cout << *(p + d)<<'\t';
//	}
//	cout << '\n';
//	cout << "最小的数是" << *p << endl;
//	return 0;
//}



//int fsum(int *p, int a)
//{
//	int sum = 0;
//	for (int b = 0; b < a; b++)
//	{
//		sum += *(p + b);
//	}
//	return sum;
//}
//
//
//
//int main()
//{
//	int a[15] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15 };
//	cout<<"前十项之和为>>"<<fsum(a, 10)<<endl;
//	cout<<"后十项之和为>>" << fsum(&a[5], 10) << endl;
//
//
//	return 0;
//}



//
//void moveLeft(int *a, int n)
//{
//	for (int b = 0; b < n-1; b++)
//	{
//		int c = *(a+b);
//		*(a+b) = *(a + b+1);
//		*(a + b+1) = c;
//	}
//
//}
//
//void rotateLeft(int *a, int n, int k)
//{
//	for (int b = 0; b < k; b++)
//	{
//		moveLeft(a, n);
//	}
//
//}
//
//
//int main()
//{
//	int a[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
//	int k;
//	cin >> k;
//	for (int b = 0; b < 8; b++)
//	{
//		cout << *(a + b) << '\t';
//	}
//	cout << endl;
//	rotateLeft(a,8,k);
//	for (int c = 0; c< 8; c++)
//	{
//		cout << *(a + c) << '\t';
//	}
//	cout << endl;
//	return 0;
//}
//

//
//void swap(char* p1, char *p2)
//{
//	char arr[4];
//	strcpy(arr, p1);
//	strcpy(p1, p2);
//	strcpy(p2, arr);
//}
//
//
//int main()
//{
//	char str1[4];
//	char str2[4];
//	char str3[4];
//	strcpy(str1, "zzz");
//	strcpy(str2, "bbb");
//	strcpy(str3, "aaa");
//
//	if (strcmp(str3, str1)<0)
//		swap(str3, str1);
//	if (strcmp(str3, str2)<0)
//		swap(str3, str2);
//	if (strcmp(str2, str1)<0)
//		swap(str2, str1);
//	cout << str1 <<'\t'<< str2 <<'\t'<< str3 <<'\t'<< endl;
//	return 0;
//}
//









//int my_strlen(char *p)
//{
//	if (*p == '\0')
//		return 0;
//	else
//		return 1 + my_strlen(p + 1);
//}
//
//
//int main()
//{
//	char arr[1000];
//	gets(arr);
//	my_strlen(arr);
//	cout << my_strlen(arr);
//	return 0;
//}



//void getDigits(char*s1, char*s2)
//{
//	int b = 0;
//	for (int a = 0; *(s1 + a) != '\0'; a++)
//	{
//		if (*(s1 + a) >= 48 && *(s1 + a) <= 57)
//		{
//			*(s2 + b) = *(s1 + a);
//			b++;
//		}
//	}
//	*(s2 + b) = '\0';
//
//}
//
//
//
//
//int main()
//{
//	char arr[1000];
//	char arr1[1000];
//	gets(arr);
//	getDigits(arr, arr1);
//	cout << arr1;
//	return 0;
//}
//









//bool isLetter(char p)
//{
//	if ((p >= 65 && p <= 90) ||( p >= 97 && p <= 122))
//		return true;
//	else
//		return false;
//}
//
//
//char toUpper(char p)
//{
//	if (p >= 97 && p <= 122)
//		return  p - 32;
//}
//
//void firstUpper(char *p1)
//{
//	if (isLetter(p1[0]))
//		p1[0] = toUpper(p1[0]);
//
//	for (int a = 0; a < 15-1; a++)
//	{
//		if ((!isLetter(*(p1 + a))) && isLetter(*(p1 + a + 1)))
//			*(p1+a+1)=toupper(*(p1 + a + 1));
//	}
//}
//
//
//
//int main()
//{
//	char arr[15] = "ww s5de qe,sa1";
//	firstUpper(arr);
//	cout << arr;
//	return 0;
//}



//
//bool palin(char *p1)
//{
//	char *p2 = p1;
//	char *p3 = p1 + strlen(p1) - 1;
//	while (p2 <= p3)
//	{
//		if (*p2 != *p3)
//			return false;
//		p2++;
//		p3--;
//	}
//	return true;
//
//}
//
//void filter(char*p)
//{
//	int b = 0;
//	for (int a = 0; a < strlen(p); a++)
//	{
//		if (isalpha(*(p+a)))
//		{
//			if (*(p+a) >= 97 && *(p+a) <= 122)
//			{
//				*(p+a) -= 32;
//			}
//			*(p + b) = *(p+a);
//			b++;
//		}
//	}
//	*(p + b) = '\0';
//	if (b == 0)
//	{
//		cout << "是回文" << endl;
//		return;
//	}
//	switch (palin(p))
//	{
//	case 1:
//		cout << "是回文" << endl;
//		break;
//	case 0:
//		cout << "不是回文" << endl;
//		break;
//	}
//}
//
//
//
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	filter(arr);
//	return 0;
//}


//void  palin(char *p)
//{
//	char*head = p;
//	char* tail = p + strlen(p) - 1;
//	while (head < tail)
//	{
//		while (1)
//		{
//			if (isalpha(*head))
//				break;
//				head++;
//				if (head == p + strlen(p) - 1)
//				{
//					cout << "是回文" << endl;
//					return;
//				}
//		}
//		while (1)
//		{
//			if (isalpha(*tail))
//				break;
//			tail--;
//		}
//		if (toupper(*head) != toupper(*tail))
//		{
//			cout << "不是回文" << endl;
//			return;
//		}
//		head++;
//		tail--;
//	}
//	if (head == tail)
//	{
//		cout << "是回文" << endl;
//		return;
//	}
//
//}
//
//
//
//
//int main()
//{
//	char arr[100];
//	gets(arr);
//	palin(arr);
//	return 0;
//}