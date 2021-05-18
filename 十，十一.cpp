//#include<iostream>
//#include<cmath>
//using namespace std;
////class Line
////{
////	int x1, x2, y1, y2;
////public:
////	void setPoint1(int a, int b)
////	{
////		x1 = a;
////		y1 = b;
////	}
////	void setPoint2(int c, int d)
////	{
////		x2 = c;
////		y2 = d;
////	}
////	void getPoint1(int *pa, int *pb)
////	{
////		*pa = x1;
////		*pb = y1;
////	}
////	void getPoint2(int &c, int &d)
////	{
////		c = x2;
////		d = y2;
////	}
////	void outputTwoPoint()
////	{
////		cout << "线段的端点坐标：(" << x1 << "," << y1 << ")(" << x2 << "," << y2 << ")" << endl;
////	}
////	double length()
////	{
////		return sqrt(double(x1 - x2)*(x1 - x2) + double(y1 - y2)*(y1 - y2));
////	}
////};
////int main()
////{
////	Line l;
////	int w, x, y, z;
////	cout << "请输入两个点的坐标：" << endl;
////	cin >> w >> x >> y >> z;
////	l.setPoint1(w, x);
////	l.setPoint2(y, z);
////	int pa, pb, c, d;
////	l.getPoint1(&pa, &pb);
////	cout << "x1=" << pa << '\t' << "y1=" << pb << endl;
////	l.getPoint2(c, d);
////	cout << "x2=" << c << '\t' << "y2=" << d << endl;
////	l.outputTwoPoint();
////	cout << "线段的长度为：" << l.length() << endl;
////	return 0;
////}
//
//
//class Date
//{
//	int year, month, day;
//public:
//	void setYMD(int y, int m, int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	void getYMD(int *y, int *m, int *d)
//	{
//		*y = year;
//		*m = month;
//		*d = day;
//	}
//	void getYMD(int &y, int &m, int &d)
//	{
//		y = year;
//		m = month; 
//		d = day;
//	}
//	bool leapYear()
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			return true;
//		else 
//			return false;
//	}
//	void increaseDay()
//	{
//		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31)
//		{
//			day = 1;
//			month++;
//		}
//		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30)
//		{
//			day = 1;
//			month++;
//		}
//		else if (month == 12 && day == 31)
//		{
//			day = 1;
//			month = 1;
//			year++;
//		}
//		else if (month == 2 && leapYear() && day == 29)
//		{
//			day = 1;
//			month++;
//		}
//		else if (month == 2 && !leapYear() && day == 28)
//		{
//			day = 1;
//			month++;
//		}
//		else
//			day++;
//	}
//	void show()
//	{
//		cout << year << "/" << month << "/" << day << endl;
//	}
//};
//
//int main()
//{
//	Date date;
//	int a, b, c;
//	cout << "请输入一个日期（年月日）：" << endl;
//	cin >> a >> b >> c;
//	date.setYMD(a, b, c);
//	int y, m, d;
//	date.getYMD(&y, &m, &d);
//	cout << "Year=" << y << '\t' << "Month=" << m << '\t' << "Day=" << d << endl;
//	date.getYMD(y, m, d);
//	cout << "Year=" << y << '\t' << "Month=" << m << '\t' << "Day=" << d << endl;
//	if (date.leapYear())
//		cout << "该年份是闰年" << endl;
//	else
//		cout << "该年份不是闰年" << endl;
//	date.show();
//	date.increaseDay();
//	cout << "日期day加1后的新日期为：";
//	date.show();
//	return 0;
//}
//
//
//class Date
//{
//	int year, month, day;
//public:
//	Date()
//	{
//		year = 2021;
//		month = 5;
//		day = 15;
//	}
//	Date(int y)
//	{
//		year = y;
//		month = 5;
//		day = 15;
//	}
//	Date(int y, int m)
//	{
//		year = y;
//		month = m; 
//		day = 15;
//	}
//	Date(int y, int m, int d)
//	{
//		year = y;
//		month = m;
//		day = d;
//	}
//	Date(Date &d)
//	{
//		year = d.year;
//		month = d.month;
//		day = d.day;
//	}
//	bool leapYear()
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
//			return true;
//		else
//			return false;
//	}
//	void increaseDay()
//	{
//		if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31)
//		{
//			day = 1;
//			month++;
//		}
//		else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30)
//		{
//			day = 1;
//			month++;
//		}
//		else if (month == 12 && day == 31)
//		{
//			day = 1;
//			month = 1;
//			year++;
//		}
//		else if (month == 2 && leapYear() && day == 29)
//		{
//			day = 1;
//			month++;
//		}
//		else if (month == 2 && !leapYear() && day == 28)
//		{
//			day = 1;
//			month++;
//		}
//		else
//			day++;
//	}
//	void show()
//	{
//		cout << year << "/" << month << "/" << day << endl;
//	}
//};
//int main()
//{
//	Date d1;
//	Date d2(2020);
//	Date d3(2019, 10);
//	Date d4(2018, 8, 1);
//	Date d5(d1);
//	d1.show();
//	d1.increaseDay();
//	d2.show();
//	d3.show();
//	d4.show();
//	d5.show();
//	cout << "第一个日期加一天后得到的新日期为：";
//	d1.show();
//	if (d2.leapYear())
//		cout << "第二个日期对应年份是闰年" << endl;
//	else
//		cout << "第二个日期对应年份不是闰年" << endl;
//	return 0;
//}
//
//class Student
//{
//	char Name[15];
//	char Num[15];
//	int Math, English, Physics, Cpp;
//public:
//	void setNameNo(char *name, char *num)
//	{
//		strcpy(Name, name);
//		strcpy(Num, num);
//	}
//	void setScores(int m, int e, int p, int c)
//	{
//		Math = m;
//		English = e;
//		Physics = p;
//		Cpp = c;
//	}
//	int total()
//	{
//		return Math + English + Physics + Cpp;
//	}
//	int average()
//	{
//		int a = total();
//		return a / 4;
//	}
//	void outputInfo()
//	{
//		int b = average();
//		cout << "姓名：" << Name << endl;
//		cout << "学号：" << Num << endl;
//		cout << "数学：" << Math << endl;
//		cout << "英语：" << English << endl;
//		cout << "物理：" << Physics << endl;
//		cout << "C++：" << Cpp << endl;
//		cout << "平均成绩：" << b << endl;
//	}
//};
//int main()
//{
//	Student s;
//	s.setNameNo("小明", "182010000");
//	s.setScores(93, 86, 82, 89);
//	s.outputInfo();
//	return 0;
//}
//
//class Student
//{
//	char Name[15];
//	char *Num;
//	int Math, English, Physics, Cpp;
//public:
//	Student(char *namep = NULL, char *nump = NULL, int m = 0, int e = 0, int p = 0, int c = 0)
//	{
//		if (namep)
//			strcpy(Name, namep);
//		else
//			strcpy(Name, " ");
//		if (nump)
//		{
//			Num = new char[strlen(nump) + 1];
//			strcpy(Num, nump);
//		}
//		else
//			Num = NULL;
//		Math = m; English = e; Physics = p; Cpp = c;
//	}
//	Student(const Student &s)
//	{
//		strcpy(Name, s.Name);
//		if (s.Num)
//		{
//			Num = new char[strlen(s.Num) + 1];
//			strcpy(Num, s.Num);
//		}
//		else Num = NULL;
//		Math = s.Math; English = s.English; Physics = s.Physics; Cpp = s.Cpp;
//	}
//	~Student()
//	{
//		if (Num) delete[]Num;
//		cout << "析构函数" << endl;
//	}
//	int total()
//	{
//		return Math + English + Physics + Cpp;
//	}
//	int average()
//	{
//		int a = total();
//		return a / 4;
//	}
//	void outputInfo()
//	{
//		int b = average();
//		cout << "姓名：" << Name << endl;
//		cout << "学号：" << Num << endl;
//		cout << "数学：" << Math << endl;
//		cout << "英语：" << English << endl;
//		cout << "物理：" << Physics << endl;
//		cout << "C++：" << Cpp << endl;
//		cout << "平均成绩：" << b << endl;
//	}
//};
//int main()
//{
//	Student s1("小明", "182010000", 93, 86, 82, 89);
//	s1.outputInfo();
//	Student s2 = s1;
//	s2.outputInfo();
//	return 0;
//}
//
//class ListClass
//{
//	char *ListPtr;
//	int nLen;
//	int nElem;
//public:
//	ListClass(int n = 10)
//	{
//		nElem = 0;
//		nLen = n;
//		if (n)
//			ListPtr = new char[n];
//		else
//			ListPtr = 0;
//	}
//	~ListClass(void)
//	{
//		delete[nLen]ListPtr;
//	}
//	char Elem(char);
//	char &Elem(unsigned n)
//	{
//		return ListPtr[n];
//	}
//	int Elem(void)
//	{
//		return nElem;
//	}
//	int Len(void)
//	{
//		return nLen;
//	}
//	char GetElem(int i)
//	{
//		if ((i >= 0) && (i<nElem))
//			return ListPtr[i];
//		else
//		{
//			cout << "下标越界" << endl;
//			return (-1);
//		}
//	}
//	void Print(void)
//	{
//		for (int i = 0; i<nElem; i++)
//			cout << ListPtr[i] << '\t';
//		cout << endl;
//	}
//};
//char ListClass::Elem(char elem)
//{
//	if (nElem == nLen)
//	{
//		char *newptr;
//		newptr = new char[nLen + 10];
//		for (int i = 0; i<nElem; i++)
//			newptr[i] = ListPtr[i];
//		delete[nLen]ListPtr;
//		nLen += 10;
//		ListPtr = newptr;
//	}
//	ListPtr[nElem++] = elem;
//	return(nElem);
//}
//int main()
//{
//	ListClass list(6);
//	for (char i = 'a'; i<'f'; i++)
//		list.Elem(i);
//	cout << "线性表的长度为：" << list.Len() << endl;
//	cout << "线性表的元素个数为：" << list.Elem() << endl;
//	cout << "线性表的元素为：";
//	list.Print();
//	list.Elem(3u) = 'W';
//	cout << "线性表下标为3的元素的值为：";
//	cout << list.Elem(3u) << endl;
//	list.Elem('F');
//	list.Elem('G');
//	cout << "现在线性表的长度为：" << list.Len() << endl;
//	cout << "现在线性表的元素个数为：" << list.Elem() << endl;
//	cout << "线性表的元素为：";
//	list.Print();
//	cout << "线性表的最后一个元素为：";
//	cout << list.GetElem(list.Elem() - 1) << endl;
//	return 0;
//}
//
//
//class Time
//{
//	int h, m, s;
//	static int bh, bm, bs;
//	static int timeToScend(Time t)
//	{
//		return t.h * 3600 + t.m * 60 + t.s;
//	}
//public:
//	Time(int a = 0, int b = 0, int c = 0)
//	{
//		h = a; m = b; s = c;
//	}
//	static int timeBaseDifference(Time t)
//	{
//		return timeToScend(t) - 4210;
//	}
//	void show()
//	{
//		cout << h << ":" << m << ":" << s << endl;
//	}
//	friend int difference(Time t1, Time t2);
//};
//int Time::bh = 1, Time::bm = 10, Time::bs = 10;
//int difference(Time t1, Time t2)
//{
//	return t1.timeToScend(t1) - t2.timeToScend(t2);
//}
//int main()
//{
//	Time t1(1, 11, 2), t2(1, 12, 50);
//	t1.show();
//	t2.show();
//	cout << t1.timeBaseDifference(t1) << endl;
//	cout << t2.timeBaseDifference(t2) << endl;
//	cout << difference(t1, t2) << endl;
//	return 0;
//}
//
