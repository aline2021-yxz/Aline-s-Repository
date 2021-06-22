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

//class x
//{
//	int a;
//	int b;
//public:
//	x a1()
//	{
//		x x3;
//		return x3;
//
//	}
//	x(int a1=19, int b1=20)
//	{
//		a = a1;
//		b = b1;
//		cout << "构造函数" << endl;
//	}
//	~x()
//	{
//		cout << "析构函数" << endl;
//	}
//	x(const x&x1)
//	{
//		a = x1.a;
//		b = x1.b;
//		cout << "拷贝构造函数" << endl;
//	}
//	static int a2()
//	{
//		return a;
//	}
//};
//int main()
//{
//	
//	return 0;
//}

//
//class x
//{
//
//public :
//	int x;
//protected:
//	int y;
//private:
//	int d;
//
//};
//
//
//class x1 :private x
//{
//public:
//	int print()
//	{
//		cout << x;
//		cout << y;
//	}
//};
//
////int main()
////{
////	class x x1(2, 2);
////	class x x2 = x1;
////	system("pause");
////}
//
//class x
//{
//protected:
//	static int a;
//	int b ;
//public:
//	x(int a,int b)
//	{
//		b = a;
//		cout << "有参构造函数" << endl;
//	}
//	~x()
//	{
//		cout << "析构函数" << endl;
//	}
//	x(const x & x1)
//	{
//		b = x1.b;
//		cout << "拷贝构造函数" << endl;
//	}
//	int chengyua()
//	{
//		return this->b;
//	}
//};
//
//
//class c1 :private x
//{
//public:
//	int chengyuan()
//	{
//		return this->a;
//	}
//
//};
//
//int main()
//{
//	x(10, 20);
//	//cout << x1.chengyua()<<endl;
//	return 0;
//}
//
//int main()
//{
//	for (int a = 0; a < 3; a++)
//	{
//		cout << *(arr+a);
//	}
//
//}


//class x
//{
//	int x;
//public:
//	void add()
//	{
//
//	}
//};
//int main()
//{
//	const x x1;
//	x1.add();
//	return 0;
//}
//
//void fun(int *p1, int *s)
//{
//	int *t;
//	t = new int[2];
//	*t = *p1 + *p1++;
//	*(t + 1) = *p1 + *p1;
//	s = t;
//}
//
//int main()
//{
//	int a[2] = { 1, 2 };
//	int b[2] = { 0 };
//	fun(a, b);
//	cout << b[0] << "\t" << b[1];
//
//	return 0;
//}

//
//int main()
//{
//	fstream f;
//	f.open("xxx", ios::out);
//	if (!f.is_open())
//	{
//		cout << "打开文件失败" << endl;
//		return 1;
//	}
//	f << "傻逼" << endl;
//
//	return 0;
//}

//int main()
//{
//	char arr[30] = { 0 };
//	cin.get(arr,30);
//	cout << arr;
//	return 0;

void Bubble_sort(int *p, int sz)
{
	int count = 0;
	for (int i = 0; i < sz; i++)
	{
		for (int j = 0; j < sz - i - 1; j++)
		{
			if (*(p+j) < *(p+j+1))
			{
				int tmp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = tmp;
				count++;
			}
		}
		if (count == 0)
			return;
	}

}


int main()
{
	int arr[] = { 9,8,7,6,5,4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Bubble_sort(arr,sz);
	for (int a = 0; a < sz; a++)
	{
		cout << arr[a]<<"\t";
	}
	return 0;
}