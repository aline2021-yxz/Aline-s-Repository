#include<iostream>
#include<cmath>
using namespace std;
//int  bool_isprime(int x)//��һ��
//{
//	int a = 1;
//	for (a = 2; a <= sqrt(x); a++)
//	{
//		if (x%a == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int x ,b=0;
//	char a = 0;
//	cout << "100-200֮��ȫ����������"<<endl;
//	for (x = 100; x <= 200; x++)
//	{
//		bool_isprime(x);
//		if (bool_isprime(x)== 1)
//		{
//			cout<< x<<"\t";
//			b++;
//		}
//		if (b % 8 == 0)
//			cout << endl;
//	}
//	cout << endl;
//	return 0;
//}
//

//
//int fact(int b)//�ڶ���
//{
//	int a = 0,c=1;
//	for (a = 1; a <= b; a++)
//	{
//		c = c*a;
//	}
//	return c;
//}
//int main()
//{
//	int a ,b,sum=0;
//	cin >> a;
//	for (b = 1; b <= a; b++)
//	{
//		sum = sum + fact(b);
//	}
//	cout << sum << endl;
//	return 0;
//}

//int fact(int b)//������
//{
//	int a = 0,c=1;
//	for (a = 1; a <= b; a++)
//	{
//		c = c*a;
//	}
//	return c;
//}
//
//int(*p)(int) = fact;
//
//int com(int m, int r)
//{
//	int c, d,e;
//	c = p(m);
//	d = p(r);
//	e = p(m - r);
//	return  c / (d*e);
//}
//int(*f)(int, int)=com;
//
//int main()
//{
//	cout << f(4, 2) << endl;
//	cout << f(6, 4) << endl;
//	cout << f(8, 7) << endl;
//	return 0;
//}


//
//int gcd1(int m, int n)//������
//{
//	int a ,g;
//	for (a = 1; a <=n; a++)
//	{
//		if (n%a == 0 && m%a == 0)
//			g = a;
//	}
//	return g;
//}
//int main()
//{
//	int m, n,tmp;
//	cout << "������Ҫ�����Լ����������������>> ";
//	cin >> m >> n;
//	if (m <= n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	cout << "���Լ����>>" << gcd1(m, n) << endl;;
//	return 0;
//}

//int gcd2(int x, int y)
//{
//	int a;
//	while (x%y != 0)
//	{
//		a= x % y;
//		x = y;
//		y = a;
//	}
//	return y;
//}
//int main()
//{
//	int m, n,tmp;	
//	cout << "������Ҫ�����Լ����������������>> ";
//	cin >> m >> n;
//	if (m <= n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	cout << "���Լ����>> " << gcd2(m, n) << endl;
//	return 0;
//
//}

//int gcd3(int x, int y)
//{
//	int tmp;
//	while (x != y)
//	{
//		tmp = x - y;
//		if (tmp<=y )
//		{
//			x = y;
//			y = tmp;
//		}
//	}
//	return x;
//}
//
//
//int main()
//{
//	int m, n, tmp;
//	cout << "������Ҫ�����Լ����������������>> ";
//	cin >> m >> n;
//	if (m <= n)
//	{
//		tmp = m;
//		m = n;
//		n = tmp;
//	}
//	cout << "���Լ����>> " << gcd3(m, n) << endl;
//	return 0;
//}
//int fsum(int, int)
//{
//	return 
//}
//

//int fsum(int x, int y)
//{
//	return x + y;
//}
//
//int fsum(int x, int y, int z)
//{
//	return x + y + z;
//}
//
//double fsum(double x, double y)
//{
//	return x + y;
//}
//
//double fsum(double x, double y, double z)
//{
//	return x + y + z;
//}
//
//int main()//������
//{
//	int e=0;
//	do
//	{
//		int e;
//		double a, b, c = 0;
//		cout << "��ѡ�� 1:�����������ĺ� 2:�����������ĺ� 3:exit" << endl;
//		cin >> e;
//		if (e == 1)
//		{
//			cin >> a >> b;
//			cout << fsum(a, b) << endl;;
//		}
//		else if (e == 2)
//		{
//			cin >> a >> b >> c;
//			cout << fsum(a, b, c) << endl;
//		}
//		else
//			break;
//	} while (e);
//	return 0;
//}

//
// inline int Cop(int x, int y, int z)//������
//{
//	int max;
//	x > y ? max = x : max = y;
//	max > z ? max : max = z;
//	return max;
//}
//
//int main()
//{
//	int num, num1, num2;
//	cout << "������Ҫ�Ƚϵ�������>> ";
//	cin >> num >> num1 >> num2;
//	cout<<"��������>> "<<Cop(num, num1, num2)<<endl;
//
//	return 0;
//}
////
//void dealy(int time = 1000)
//{
// 	cout << time << endl;
//	for (int a = 0; a < time; a++)
//	{
//
//	}
//
//}
//int main()//������
//{
//	dealy();
//	dealy(2000);
//	return 0;
//}

//int fib(int a)
//{
//	if (a == 1 || a == 2)
//		return 1;
//	else
//		return fib(a - 1) + fib(a - 2);
//}
//
//int main()//�ڰ���
//{
//	int n = 0;
//	cout << "������Ҫ���쳲�����������n>>";
//	cin >> n;
//	cout << "ǰn��쳲�������Ϊ:" << endl;
//	for (int a = 1; a <= n; a++)
//	{
//		fib(a);
//		cout << "\t" << fib(a);
//		if (a % 5 == 0)
//			cout <<endl;
//	}
//	return 0;
//}
//double Her(int a, double x)
//{
//	if (a == 0)
//		return 1;
//	else if (a == 1)
//		return 2 * x;
//	else
//		return 2 * x* Her(a - 1, x) - 2 * (a - 1)*Her(a - 2, x);
//
//}
//
//int main()//�ھ���
//{
//	double x;
//	int n;
//	cout << "������n��x��ֵ>>";
//	cin >> n >> x;
//	for (int a = 0; a < n; a++)
//	{
//		cout << "H(" << a << "," << x << ")" << "=" << Her(a, x) << endl;
//	}
//	return 0;
//}


//void  printTriangle(int i,int n)
//{
//	int a=0;
//	for (int a = 0; a <i - 1;a++)
//	{
//		cout << " ";
//	}
//	for (a=a-1; a < n - i; a++)
//	{
//		cout << "*";
//	}
//	cout << endl;
//}
//int main()//��ʮ��
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 1; i<= n; i++)
//	{
//		printTriangle(i,n);
//	}
//	return 0;
//}
//void  printTriangle( int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= n; j++)
//		{
//			if (i>j)
//				cout << " ";
//			else
//				cout << "*";
//		}
//		cout << endl;
//	}
//}
//
//int main()
//{
//	int n = 0;
//	cin >> n;
//	printTriangle( n);
//	return 0;
//}
void pr_rev(int x)
{
		if (x / 10 == 0)
			cout << x;
		else
		{
			cout << x % 10;
			pr_rev(x / 10);
		}
	
}

int main()
{
	int x = 0;
	cin >> x;
	pr_rev(x);
	return 0;
}