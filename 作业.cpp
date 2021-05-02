#include<iostream>
#include<iomanip>
using namespace std;
//
//struct Point
//{
//	double x;
//	double y;
//
//}p1,p2;
//
//
//Point input()
//{
//	Point a;
//	double x, y;
//	cin >> x;
//	cin >> y;
//	a = { x, y };
//	return a;
//}
//
//void Output(Point p)
//{
//	cout << "(" << (&p)->x << "," << (&p)->y << ")" << endl;
//}
//
//double Dist(Point* p1, Point* p2)
//{
//	return sqrt(pow(p1->x - p2->x,2) + pow(p1->y -p2->y,2));
//}
//
//int main()
//{
//    p1= input();
//    p2= input();
//	Output(p1);
//	Output(p2);
//	cout<<Dist(&p1, &p2)<<endl;
//	return 0;
//}
//
//struct Book
//{
//	char bookID[30];
//	char name[100];
//	double price;
//};
//void input(Book bs[], int n)
//{
//	for (int a = 1; a <= n; a++)
//	{
//		cout << "请输入第" << a << "本书的价格>>";
//		cin >> ((&bs[a-1])->price);
//		cout << endl;
//	}
//}
//double average(Book bs[], int n)
//{
//	double all = 0;
//	for (int a = 0; a < n; a++)
//	{
//		all += (&bs[a])->price;
//	}
//	return all / n;
//}
//void print(Book bs[], int n)
//{
//	cout.precision(2);
//	cout.setf(ios::left);
//	cout <<setw(30)<< "书号" <<setw(30)<< "书名" <<setw(30)<< "价格" << endl;
//	cout << "******************************************************************" << endl;
//	for (int a = 0; a < n; a++)
//	{
//		cout << setw(30)<<(&bs[a])->bookID <<setw(30)<< (&bs[a])->name <<setw(30)<< (&bs[a])->price;
//		cout << endl;
//	}
//}
//int findMax(Book bs[], int n)
//{
//	int a=4;
//	for (; n > 0; n--)
//	{
//		(&bs[a])->price > (&bs[n - 1])->price ? a = a  : a = n-1;
//	}
//	return a;
//}
//void sort(Book bs[], int n)
//{
//	for (int a = 0; a < n; a++)
//	{
//		for (int b = 0; b < n - a - 1; b++)
//		{
//			if ((&bs[b])->price>(&bs[b+1])->price)
//			{
//				Book tmp;
//				tmp = bs[b];
//				bs[b] = bs[b+1];
//				bs[b+1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n;
//	Book books[4] = { { "0101", "Computer" }, { "0102", "Programming" }, { "0103", "Math" }, { "0104", "English" } };
//	cout << "请输入图书的个数>>";
//	cin >> n;
//	input(books, n);
//	print(books, n);
//	cout<<"图书价格的平均值是>>"<<average(books, n)<<endl;
//	cout << "价格最高的书的书号是>>" << (&books[findMax(books, n)])->bookID<< endl;
//	sort(books, n);
//	print(books, n);
//	return 0;
//}

//enum color
//{
//    RED=0,
//	GREEN,
//	BLUE
//};
//void print(int a)
//{
//	switch (a)
//	{
//	case 0:
//		cout <<setw(10)<< "RED";
//		break;
//	case 1:
//		cout <<setw(10)<< "GREEN";
//		break;
//	case 2:
//		cout <<setw(10)<< "BLUE";
//	}
//}
//
//int main()
//{
//	cout.setf(ios::left);
//	int count = 1;
//	for (int a = 0; a <3; a++)
//	{
//		for (int b = 0; b < 3; b++)
//		{
//			for (int c = 0; c <3; c++)
//			{
//				if (a != b&&b != c&&a!=c)
//				{
//					cout << setw(10) << count;
//					print(a);
//					print(b);
//					print(c);
//					cout << endl;
//					count++;
//				}
//			}
//		}
//	}
//	return 0;
//}
//




