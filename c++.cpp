#include<iostream>
#include<cmath>
using namespace std;


//��һ��
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
//		cout << "�������Ա�����ֵx=";
//		cin >> x;
//	    cout<<"y=" <<jisuan(x)<<endl;
//
//	}
//
//	return 0;
//}



//�ڶ���
//int main()//��������ֵ�Ӵ�С���
//{
//	int x, y, z;
//	cout << "������������ͬ����;";
//	cin >> x >> y >> z;
//	cout << "��С��������Ϊ>>";
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


//������
//int main()//�ж�������������ĸ�����//5������ԭ�����������
//{
//	double  x, y, p;
//	cout << "������x��y����;" << endl;
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



//int main()//�����⣬���ռ���������ĵȼ������Ӧ�ĳɼ�����
//{
//	char dj = 0;
//	cout << "�����뿼�˵ȼ���A-F��" << endl;
//	cin >> dj;
//	if (dj >= 97 && dj <= 101 || dj >= 65 && dj <= 69)
//	{
//		cout << "��Ӧ������Ϊ" << endl;
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



//ʵ����
//int main()
//{
//	char dj;
//	cout << "�����뿼�˵ȼ���A-F��" << endl;
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


//������
//int main()
//{
//	int n,sum=0;
//	for (n = 2; n <= 100; n+=2)
//	{
//		sum += n;
//	}
//	cout << "0-100������ż��֮��Ϊ;" << endl;
//	cout << sum << endl;
//	return 0;
//}

//int main()//Ч�ʽϸ���
//{
//	int n, sum = 0;
//	for (n = 1; n <= 50; n++)
//	{
//		sum += n * 2;
//	}
//	cout << "0-100������ż��֮��Ϊ;" << endl;
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
////	cout << "e�Ľ���ֵΪ;"<<ret << endl;
////	return 0;
////}

