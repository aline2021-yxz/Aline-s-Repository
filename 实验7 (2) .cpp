#include<iostream>
#include<string>
using namespace std;



//
//#define N 4
//#define M 5

//int sumBoard(int arr[][M])
//{
//	int sum = 0;
//	for (int a = 0; a < N ; a++)
//	{
//		for (int b = 0; b < M ; b++)
//		{
//			
//			if (a == 0 || a == N - 1)
//				sum += arr[a][b];
//			else
//			{
//				if (b == 0 || b == M - 1)
//					sum += arr[a][b];
//			}
//		}
//	}
//	return sum;
//}
//
//
//
//int main()
//{
//	int arr[][5] = { 3, 6, 4, 6, 1, 8, 3, 1, 3, 2, 4, 7, 1, 2, 7, 2, 9, 5, 3, 3 };
//	for (int a = 0; a < N; a++)
//	{
//		for (int b = 0; b < M; b++)
//		{
//			cout << arr[a][b];
//		}
//		cout << endl;
//	}
//	cout<<sumBoard(arr)<<endl;
//	return 0;
//}

//int sumBoard(int arr[][M])
//{
//	int sum = 0;
//	for (int a = 0; a < N; a++)
//	{
//		for (int b = 0; b < M; b++)
//		{
//			sum += arr[a][b];
//			if ((a != 0 && a != N - 1) &&( b != 0 && b != M - 1))
//				sum -= arr[a][b];
//		}
//	}
//	return sum;
//}
//
//
//int main()
//{
//	int arr[][5] = { 3, 6, 4, 6, 1, 8, 3, 1, 3, 2, 4, 7, 1, 2, 7, 2, 9, 5, 3, 3 };
//	for (int a = 0; a < N; a++)
//			{
//				for (int b = 0; b < M; b++)
//				{
//					cout << arr[a][b];
//				}
//				cout << endl;
//			}
//	cout << sumBoard(arr) << endl;
//	return 0;
//}











//
//#define N  4
//#define M  4
//void fsum(int a[][M], int i, int j, int b[])
//{
//	for (int c = 0; c < M; c++)
//	{
//		b[0] += a[i][c];
//	}
//	for (int d = 0; d < N; d++)
//	{
//		b[1] += a[d][j];
//	}
//
//}
//
//
//int main()
//{
//	int i, j, b[2] = {0}, a[N][M] = { 3, 6, 4, 6, 8, 3, 1, 3, 4, 7, 1, 2, 2, 9, 5, 3 };
//	cin >> i >> j;
//	fsum(a, i, j, b);
//	cout << b[0] <<'\t'<< b[1] << endl;
//	return 0;
//}
//

//int main()
//{
//	char arr[1000] = { 0 };
//	cin.getline(arr,1000);
//	int len = strlen(arr), daxiezimu = 0,xiaoxiezimu=0,kongge=0, shuzi = 0,qita=0;
//	for (int a = 0; a < len; a++)
//	{
//		if (arr[a] >= 97 && arr[a] <= 122)
//			xiaoxiezimu++;
//		else if (arr[a] >= 65 && arr[a] <= 90)
//			daxiezimu++;
//		else if (arr[a] == ' ')
//			kongge++;
//		else if (arr[a] >= 48 && arr[a] <= 57)
//			shuzi++;
//		else
//			qita++;
//	}
//	cout << "Ğ¡Ğ´×ÖÄ¸>>" << xiaoxiezimu << endl;
//	cout << "´óĞ´×ÖÄ¸>>" << daxiezimu << endl;
//	cout << "Êı×Ö>>" << shuzi << endl;
//	cout << "¿Õ¸ñ>>" << kongge << endl;
//	cout << "ÆäËû×Ö·û>>" << qita << endl;
//	return 0;
//}










//void interCross(char s1[], char s2[], char s3[])
//{
//	int b = 0, d = 0, i = 0, j = 0;
//	while (s1[b] != '\0')
//	{
//		if (s2[d] != '\0')
//		{
//			s3[i] = s1[b];
//			s3[i + 1] = s2[d];
//			b++;
//			d++;
//			i += 2;
//		}
//		else
//		{
//			s3[i] = s1[b];
//			i++;
//			b++;
//		}
//	}
//		while (s2[d] != '\0')
//		{
//			s3[i] = s2[d];
//			d++;
//			i++;
//		}
//	
//}
//
//
//int main()
//{
//	char s1[100] = {0};
//	char s2[100] = {0};
//	char s3[1000000] = { 0 };
//	cin.getline(s1, 100);
//	cin.getline(s2, 100);
//	interCross(s1, s2, s3);
//	cout << s3;
//
//	return 0;
//}






//void my_strcpy(char* s1, char* s2)
//{
//	while (*s2 != 0)
//	{
//		*s1 = *s2;
//		s2++;
//		s1++;
//	}
//}
//
//
//
//
//int main()
//{
//	char s1[100] = { 0 };
//	char s2[100] = { 0 };
//	cin.getline(s1, 100);
//	cin.getline(s1, 100);
//
//	my_strcpy(s1, s2);
//	cout << s1;
//	return 0;
//}
//







//void reverse(char* arr)
//{
//	int len = strlen(arr);
//	char tmp = *arr;
//	*arr = *(arr + len - 1);
//	*(arr + len - 1) = '\0';
//	if (strlen(arr+1)>=2)
//	{
//		reverse(arr + 1);
//	}
//	*(arr + len - 1) = tmp;
//}
//
//int main()
//{
//    char arr[20] = {0};
//    cin.getline(arr, 20);
//	reverse(arr);
//	puts(arr);
//
//	return 0;
//}
//
