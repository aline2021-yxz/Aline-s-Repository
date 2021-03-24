#include<iostream>
#include<cmath>
using namespace std;


//第一题
//double jisuan(double x)
//{
//	if (x >= 10)
//	{
//		return (pow(x, 3) - 10 * pow(x, 2) + 28);
//	}
//	else if (x >= 1)
//	{
//	    return 	( 3 * x - 2);
//	}
//	else
//	{
//		return ( pow(x, 2));
//	}
//}
//
//int main()
//{
//	while (1)
//	{
//		double x, y;
//		cout << "请输入自变量的值x=";
//		cin >> x;
//	    cout<<"y=" <<jisuan(x)<<endl;
//
//	}
//
//	return 0;
//}



//第二题
//int main()//对三个数值从大到小输出
//{
//	int x, y, z;
//	cout << "请输入三个不同整数;";
//	cin >> x >> y >> z;
//	cout << "从小到大排序为>>";
//	if (x < y)
//	{
//	  if (x < z)
//		{
//			if (y < z)
//			{
//				cout << x << ' ' << y << ' ' << z << ' ' << endl;
//			}
//			else
//			{
//				cout << x << ' ' << z << ' ' << y << ' ' << endl;
//			}
//		}
//	  else        cout << z << ' ' << x << ' ' << y << ' ' << endl;
//	}
//	else
//	{
//	  if (x > z)
//		{
//			if (y > z)
//			{
//				cout << z << ' ' << y << ' ' << x << ' ' << endl;
//			}
//			else
//			{
//				cout << y << ' ' << z << ' ' << x << ' ' << endl;
//			}
//		}
//	  else        cout << y << ' ' << x << ' ' << z << ' ' << endl;
//	}
//	return 0;
//}


//第三题
//int main()//判断输入的坐标在哪个象限//5代表在原点和坐标轴上
//{
//	double  x, y, p;
//	cout << "请输入x，y坐标;" << endl;
//	cin >> x>> y;
//	p = x*y;
//	if (p > 0)
//	{
//		if (y > 0)
//			cout << "1" << endl;
//		else
//			cout << "3" << endl;
//	}
//	else if (p<0)
//	{
//		if (y>0)
//			cout << "2" << endl;
//		else
//			cout << "4" << endl;
//	}
//	else
//		cout << "5" << endl;
//
//	return 0;
//}



//int main()//第四题，按照键盘上输入的等级输出相应的成绩区间
//{
//	char dj = 0;
//	cout << "请输入考核等级（A-F）" << endl;
//	cin >> dj;
//	if (dj >= 97 && dj <= 101 || dj >= 65 && dj <= 69)
//	{
//		cout << "对应分数段为" << endl;
//		if (dj == 97 || dj == 65)
//		{
//			cout << "90-100" << endl;
//		}
//		else if (dj == 98 || dj == 66)
//		{
//			cout << "80-89" << endl;
//		}
//		else if (dj == 99 || dj == 67)
//		{
//			cout << "70-79" << endl;
//		}
//		else if (dj == 100 || dj == 68)
//		{
//			cout << "60-69" << endl;
//		}
//		else
//		{
//			cout << "0-59" << endl;
//		}
//	}
//	else
//	{
//		cout << "error" << endl;
//	}
//	return 0;
//}



//实验四
//int main()
//{
//	char dj;
//	cout << "请输入考核等级（A-F）" << endl;
//	cin >> dj;
//	if (dj <= 68)
//	{
//		dj += 32;
//	}
//	dj -= 96;
//	switch (dj)
//	{
//	case 1:
//		cout << "90-100" << endl;
//			break;
//	case 2:
//		cout << "80-89" << endl;
//		    break;
//	case 3:
//		cout << "70-79" << endl;
//		break;
//	case 4:
//		cout << "60-69" << endl;
//		break;
//	case 5:
//		cout << "0-59" << endl;
//		break;
//	default: 
//	    cout << "error" << endl;
//
//	}
//	return 0;
//}


//第六题
//int main()
//{
//	int n,sum=0;
//	for (n = 2; n <= 100; n+=2)
//	{
//		sum += n;
//	}
//	cout << "0-100的所有偶数之和为;" << endl;
//	cout << sum << endl;
//	return 0;
//}

//int main()//效率较高者
//{
//	int n, sum = 0;
//	for (n = 1; n <= 50; n++)
//	{
//		sum += n * 2;
//	}
//	cout << "0-100的所有偶数之和为;" << endl;
//	cout << sum << endl;
//	return 0;
//}


////int main()
////{
////	double a,ret=1,tmp=1;
////	for (a =1 ; 1 /tmp  > 1e-7; a++)
////	{
////		int b ;
////		for (b=1,tmp=1; b <= a; b++)
////		{
////		 tmp = tmp*b;
////		}
////		ret = ret + 1/tmp;
////	}
////	ret = ret + 1/tmp;
////	cout << "e的近似值为;"<<ret << endl;
////	return 0;
////}

