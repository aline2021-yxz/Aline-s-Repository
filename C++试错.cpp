#include<iostream>
#include<fstream>
#include<string>
#include<cstdlib>
#include<iomanip>
using namespace std;
//#define a 3  
//int main()
//{
//	cout << a;
//	return 0;
//} 


//int add(int *x, int* y)
//{
//
//	return *x + *y;
//}
//
////void add(int x, int y)
////{
////
////}
//
////int add(const int x, const int y)
////{
////	return x - y;
////}
//void add(int * x, int *  y)
//{
//
//}
//
//int main()
//{
//
//	int x = 1;
//	int y = 1;
//	int* x1 = &x;
//	int* y1 = &y;
//	int c=add(x1, y1);
////	cout << c;
////}
//class  a
//{
//protected:
//	int a = 0;
//private:
//	int b = 1;
//
//};
//
//class b :private a
//{
//
//
//public:
//	void ca()
//	{
//		printf("%d", a);
//	}
//};
//
//
//int main()
//{
//	b c;
//	c.ca;
//	return 0;
////}
//
//int main()
//{
//	string a = "abcde";
//
//	return 0;
//}
//
//int main()
//{
//	fstream ifp;
//	ifp.open("txt", ios::out);
//
//	if (!ifp.is_open())
//	{
//		cout << "打开文件失败" << endl;
//		return 1;
//	}
//	ifp << "张勇是傻子" << endl;
//
//	ifp.close();
//	return 0;
//}
//int main()
//{
//	char arr[] = "acdc\x001";
//	printf("%d", strlen(arr));
//
//	printf("%s","\\");
//	return 0;
//}

//int & add(int &b)
//{
//	return b;
//}
//
//extern int a = 2;
//int main()
//{
//	cout.setf(ios::right);
//	int a = 10;
//	int &b = a;
//	int __S = 20;
//	float Float = 3.14f;
//    char *p = new char [10];
//	*(p + 9) = '\0';
//	std::string c = "abcde";
//	add(b)=20;
//	std::cout << strlen(p) << setw(3)  << a;
//	delete(p);
//	return 0;
//}
//int a = 10;
//int main()
//{
//	a = 20;
//	cout << a;
//	for (; a;)
//	{
//		a = 0;
//		cout << a;
//	}
//	cout << a;
//	return 0;
//}
//class  x x2(20,30,40);
//
//class x
//{
//	int y;
//    int b;
//	static int c;
//public:
//	x(int a=10, int b=10, int c=10)
//	{
//		y = a;
//		x::b = b;
//	}
//	 static int  c1(x&x1)
//	{
//		return x1.b;
//	}
//	 int c2()
//	 {
//		 return c;
//	 }
//};
//
//int main()
//{
//	class x x1;
//	cout << x1.c1(x1) << endl;
//	cout << x2.c2() << endl;
//	return 0;
//}


//
//class x
//{
//	const int a;
//	static int b;
//public:
//	int a1()
//	{
//		return b;
//	}
//	static int b1()
//	{
//		return b;
//	}
//	static int b2()
//	{
//	  
//	}
//	int b3()
//	{
//
//		return a;
//	}
//
//
//};

//int x::b = 20;
//
//int main()
//{
//	class x x1;
//	cout << x1.a1() << endl;
//	cout << x1.b1() << endl;
//	return 0;
//}
//
//int main()
//{
//	int*p=NULL;
//	 p = new int[10];
//	p[9] = 10;
//	cout << p[9];
//
//	return 0;
//}0 
//
//typedef class
//{
//	int a;
//	int b;
//	int c;
//public:
//	static int e;
//public:
//	int la()
//	{
//		return e;
//	}
//
//}s;
//int s::e = 10;
//s s1;
//
//int main()
//{
//	string s;
//	char a;
//	char arr[10] = { 0 };
//	/*while (getline(cin,s))
//	{
//		cout << s;
//	}
//	int c1 = 43;
//	int b = 10;
//	int &a1 = b;
//	const int &a = 10;
//	a1 = c1;
//	cout << a1;
//	cout << b;
//	cout << 'a' << setfill('a') << 'b' <<s1.la()<< endl;*/
//	/*getline(cin, s);
//	cin >> s;*/
//	cin.getline(arr,6);
//	cin >> a;
//	cout << a;
//	return 0;
//}
//10000000 00000000 00000000 10000000
//11111111 11111111 11111111 01111111
//11111111 11111111 11111111 10000000
//11111111 11111111 11111111 10000000
//int main()
//{
//	char a = -128;   //110000000    10000000    111111111   100000000       
//	unsigned int b = a;//1
////	cout << b;
////	return 0;
////}
//void add(int c, int b=10)
//{
//
//
//}
//void add(int d=10,int b=11)
//{
//
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	add(a, b);
//	//char a;
//	//string arr;
//	//cin >> arr;
//	//cin >> a;
//	//cout << arr<<endl;
//	//cout << a;
//	return 0;
//}

class x
{
	int a;
	int b;
public:
	x(int a1, int b1)
	{
		a = a1;
		b = b1;
		cout << "构造函数" << endl;
	}
	~x()
	{
		cout << "析构函数" << endl;
	}
	x(x&x1)
	{
		a = x1.a;
		b = x1.b;
		cout << "拷贝构造函数" << endl;
	}
};


int main()
{
	class x x1(2, 2);
	class x x2 = x1;
	system("pause");
}