#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<assert.h>
#include<cmath>
using namespace std;
#define len_name 6//编号，名字的长度
#define len_num   4
void reverse(char *p)
{
	int len = strlen(p);
	if (len == 0)
		return;
	else
	{
		char tmp = *(p);
		*(p) = *(p + len - 1);
		*(p + len - 1) = '\0';
		reverse(p+1);
		*(p + len - 1) = tmp;
	}
}

class City//构造城市类,用于构造一个城市
{
	char number[len_num+1];//城市的编号
	char name[len_name];//城市的名字
	int x;//城市的x坐标
	int y;//y坐标
public:
	City(char number1[len_num] = "1001", char name1[len_name] = "南京", int x = 0, int y = 0)//缺省构造函数,在构造City的时候如果给了初始值就调用。
	{
		strcpy(number, number1);
		strcpy(name, name1);
		City::x = x;
		City::y = y;
	}
	void show()//显示一个City的信息。
	{
		cout.setf(ios::left);//输出左对齐
		cout <<setw(10)<< number << setw(10) << name << setw(10) << x << setw(10) << y << endl;
	}
	void setnumber(int num)//没有在建立City的时候初始化时使用
	{
		int a = 0;
		while (a < len_num)
		{
			number[a] = num % 10 + 48;//将整形转为字符,例如将整形1转换为字符1
			a++;
			num /= 10;
		}
		number[a] = '\0';
		reverse(number);
	}
	void setName(const char *na)//设置City的名字
	{
		assert(na != NULL);
		strcpy(name, na);
	}
	void setPOsition(int xpos, int ypos)//设置x，y坐标
	{
		x = xpos;
		y = ypos;
	}
	char* getname()//读取City的名字
	{
		return name;
	}
	int getNum()//读取City的编号
	{
		int len = len_num-1;
		int sum = 0;
		for (; len >=0; len--)
		{
			sum += (int)((number[len] - 48)*pow(10, 3-len));
		}
		return  sum;
	}
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}

};


class Map
{
	City* cities;//创建一个指针，用于创建链表
	int curCounter;//线性表中城市的个数
	int maxCounter;//线性表的长度
public:
	Map(int maxc = 10)
	{
		cities = new City[maxc];//动态申请空间，用于存放City
		curCounter = 0;//目前没有City
		maxCounter = 10;
	}
	Map(Map& m)//拷贝构造函数
	{
		Map::cities = new City[m.maxCounter];
		for (int a = 0; a <m.maxCounter; a++)
		{
		 cities[a] = m.cities[a];
		}
	    curCounter = m.curCounter;
		maxCounter = m.maxCounter;
	}
	~Map()
	{
		if (cities)
		{
			delete[] cities;
		}
	}
	double Distance(int x1, int y1, int x2, int y2)
	{
		return (double)sqrt((x1 - x2)*(x1 - x2) + (y1 - y2)*(y1 - y2));
	}
	void AddCity(int num, const char *na, int x, int y)//添加一个城市
	{
		if (curCounter == maxCounter)
		{
			City *cities1=NULL;
 			cities1 = new City[maxCounter + 10];
			for (int a = 0; a < maxCounter; a++)//拷贝原线性表的内容
			{
				*(cities1 + a) = *(cities + a);
			}
			cities = cities1;
			delete[] cities;
			maxCounter += 10;
		}
		(*(cities + curCounter)).setName(na);
		(*(cities + curCounter)).setnumber(num);
		(*(cities + curCounter)).setPOsition(x,y);
		curCounter++;
	}


	void DeleteCity(int num)
	{
		char select = 0;
		for (int a = 0; a < curCounter; a++)
		{
			if ((cities + a)->getNum() == num)
			{
				cout << "即将删除的城市信息如下:" << endl;
				(cities + a)->show();
				cout << "是否删除此城市(Y/N)" << endl;
				cin >> select;
				if (select == 'Y')
				{
					for (; num < curCounter; num++)
					{
						*(cities + num - 1) = *(cities + num);
					}
					curCounter--;
				}
				return;
			}
		}
		cout << "无此城市信息" << endl;
	}

	void saveCity();
	void ReadCity();
	void UpdateCity(int num)
	{
		for (int a = 0; a < curCounter; a++)
		{
			if ((cities + a)->getNum() == num)
			{
				char arr[len_num] = { 0 };
				int nums = 0;
				int x = 0;
				int y = 0;
				(*(cities + a)).show();
				cout << "请输入要修改的城市名称>>";
				cin >> arr;
				cout << endl;
				cout << "请输入要修改的城市编号>>";
				cin >> nums;
				cout << endl;
				cout << "请输入要修改的城市坐标>>";
				cin >> x >> y;

				(*(cities + a)).setName(arr);
				(*(cities + a)).setnumber(nums);
				(*(cities + a)).setPOsition(x, y);
				return;
			}

		}
		cout << "城市不存在"<< endl;
	}

	int FindCity(int num)//根据num查询城市的信息
	{
		(*(cities + num )).show();
		return 0;
	}
	void showCities()//输出全部的城市信息
	{
		cout.setf(ios::left);//输出左对齐
		cout <<setw(10)<< "城市编号" << setw(10) << "城市名称" << setw(10) << "城市坐标x" << setw(10) << "城市坐标y"<<endl;
		for (int a = 0; a < curCounter; a++)
		{
			(*(cities + a)).show();
				cout << endl;
		}
	}

	int GetCurCounter()
	{
		return  curCounter;
	}
	int GetPositionX(int num)
	{
		return (*(cities + num)).getX();
	}
	int GetPositionY(int num)
	{
		return (*(cities + num)).getY();
	}
	void ShowCity(int num)//输出指定城市的信息
	{
		cout << setw(10) << "城市编号" << setw(10) << "城市名称" << setw(10) << "城市坐标x" << setw(10) << "城市坐标y";
		(*(cities + num-1)).show();
		cout << endl;
	}
};

class Plane
{
	char number[len_num+1];
	char name[len_name];
	int x;
	int y;
	double weight;
public:
	Plane(const char *num1="0",const char *name1="0",int x1=EOF,int y1=EOF,double weight1=EOF)
	{
		assert(num1);
		strcpy(number, num1);
		strcpy(name, name1);
		x = x1;
		y = y1;
		weight = weight1;
	}
	void show()//显示飞机信息
	{
		cout << setw(10) << number << setw(10) << name << setw(10) << x << setw(10) << y << endl;
	}
	int CanBrake(double sp, double reDistance)
	{
		if (weight == EOF)
		{
			return EOF;
		}
		else if ((weight*sp / 5) < reDistance)
		{
			return 1;
		}
		else
		return 0;
	}
	void  ReadarFind(double radarRadius, Map& m)//雷达扫描城市
	{
		for (int a = 0; a < m.GetCurCounter(); a++)
		{
			if (m.Distance(m.GetPositionX(a), m.GetPositionY(a), x, y) <= radarRadius)
				m.FindCity(a);
		}
	}
	void SetPlane(int num,const char *na, double w, int xpos, int ypos)
	{
		int a = 0;
		while (a < len_num)
		{
			number[a] = num % 10 + 48;//将整形转为字符,例如将整形1转换为字符1
			a++;
			num /= 10;
		}
		number[a] = '\0';
		reverse(number);
		strcpy(name, na);
		weight = w;
		x = xpos;
		y = ypos;
	}
	double Getweight()
	{
		return weight;
	}

};


int menu_select()//菜单选择
{
	int select = 0;
	char*menu[] = { "1.增加城市信息", "2.删除城市信息", "3.修改城市信息", "4.保存城市信息到文件", "5.从文件读取城市信息", "6.显示所有城市信息","7.设置飞机信息", "8.显示飞机信息", "9.判断起飞飞机是否可以刹车", "10.查询飞机雷达半径内所有城市信息", "0.退出" };
	do
	{
		for (int a = 0; a <= 10; a++)
		{
			cout <<*( menu + a) << endl;
		}
		cout << "请选择您要使用的功能>>";
		cin >> select;
	} while (select<0 || select>10);
	return select;
}

void appendCity(Map& mapObj)//增加城市
{
	int num = 0;
	char name[20] = {0};
	int x = 0, y = 0;
	cout << "请输入城市的编号:";
	cin >> num;
	cout << endl;
	cout << "请输入城市名称:";
	cin >> name;
	cout << endl;
	cout << "请输入城市的x坐标和y坐标:";
	cin >> x >> y;
	mapObj.AddCity(num, name, x, y);
}

void delCity(Map& mapObj)//删除城市
{
	int num = 0;
	cout << "请输入要删除的城市编号";
	cin >> num;
	mapObj.DeleteCity(num);
}
void updCity(Map& mapObj)//修改城市:忘记应该使用引用了，浪费了大量的时间
{
	int num = 0;
	cout << "请输入要修改城市的编号";
	cin >> num;
	mapObj.UpdateCity(num);
}

void SaveToFile(Map& mapObj);
void ReadFromFile(Map& mapObj);
void showAllCities(Map& mapObj)
{
	mapObj.showCities();
}
void Addplane(Plane& planeObj)
{
	int num= {0};
	char name[20] = { 0 };
	int x=0;
	int y = 0;
	double weight = 0;
	cout << "请输入飞机的编号";
	cin >> num;
	cout << "请输入飞机名称";
	cin >> name;
	cout << "请输入飞机的x,y坐标";
	cin >> x >> y;
	cout << "请输入飞机的重量(吨)";
	cin >> weight;
	planeObj.SetPlane(num, name, weight,x,y);
}

void ShowPlane(Plane& planeObj)
{
	if (planeObj.Getweight() != EOF)
	{
		planeObj.show();
	}
	else
		cout << "当前无任何飞机信息"<<endl;
}

void Brake(Plane& planeObj)
{
	double sp = 0;
	double reDistance = 0;
	cout << "请输入当前飞机的速度:";
	cin >> sp;
	cout << "请输入剩余跑道的长度:";
	cin >> reDistance;
	switch (planeObj.CanBrake(sp, reDistance))
	{
	case 1:
		cout << "可以刹车" << endl;
		break;
	case 0:
		cout << "不能刹车" << endl;
		break;
	case -1:
		cout << "无飞机信息,无法判断" << endl;
		break;
	}
}

void RadarSearch(Plane& planeObj,Map& mapObj)
{
	double Rader = 0;
	cout << "请输入当前飞机的雷达扫描半径";
	cin >> Rader;
	planeObj.ReadarFind(Rader,mapObj);
}


int main()
{
	Map mapObj;
	Plane planeObj;
	int select = 0;

	for (;;)
	{
		switch (select = menu_select())
		{
		case 1:
			appendCity(mapObj);
			system("pause");
			break;
		case 2:
			delCity(mapObj);
			system("pause");
			break;
		case 3:
			updCity(mapObj);
			system("pause");
			break;
		case 4:
		//	SaveToFile(mapObj);
			system("pause");
			break;
		case 5:
		//	ReadFromFile(mapObj);
			system("pause");
			break;
		case 6:
			showAllCities(mapObj);
			system("pause");
			break;
		case 7:
			Addplane(planeObj);
			system("pause");
			break;
		case 8:
			ShowPlane(planeObj);
			system("pause");
			break;
		case 9:
			Brake(planeObj);
			system("pause");
			break;
		case 10:
			RadarSearch(planeObj,mapObj);
			system("pause");
			break;
		case 0:
			cout << "退出系统" << endl;
			break;
		}
		if (select == 0)
			break;
		system("cls");
	}
	
	return 0;
}  