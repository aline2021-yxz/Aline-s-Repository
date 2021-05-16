#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<assert.h>
#include<cmath>
using namespace std;
#define len_name 6//��ţ����ֵĳ���
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

class City//���������,���ڹ���һ������
{
	char number[len_num+1];//���еı��
	char name[len_name];//���е�����
	int x;//���е�x����
	int y;//y����
public:
	City(char number1[len_num] = "1001", char name1[len_name] = "�Ͼ�", int x = 0, int y = 0)//ȱʡ���캯��,�ڹ���City��ʱ��������˳�ʼֵ�͵��á�
	{
		strcpy(number, number1);
		strcpy(name, name1);
		City::x = x;
		City::y = y;
	}
	void show()//��ʾһ��City����Ϣ��
	{
		cout.setf(ios::left);//��������
		cout <<setw(10)<< number << setw(10) << name << setw(10) << x << setw(10) << y << endl;
	}
	void setnumber(int num)//û���ڽ���City��ʱ���ʼ��ʱʹ��
	{
		int a = 0;
		while (a < len_num)
		{
			number[a] = num % 10 + 48;//������תΪ�ַ�,���罫����1ת��Ϊ�ַ�1
			a++;
			num /= 10;
		}
		number[a] = '\0';
		reverse(number);
	}
	void setName(const char *na)//����City������
	{
		assert(na != NULL);
		strcpy(name, na);
	}
	void setPOsition(int xpos, int ypos)//����x��y����
	{
		x = xpos;
		y = ypos;
	}
	char* getname()//��ȡCity������
	{
		return name;
	}
	int getNum()//��ȡCity�ı��
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
	City* cities;//����һ��ָ�룬���ڴ�������
	int curCounter;//���Ա��г��еĸ���
	int maxCounter;//���Ա�ĳ���
public:
	Map(int maxc = 10)
	{
		cities = new City[maxc];//��̬����ռ䣬���ڴ��City
		curCounter = 0;//Ŀǰû��City
		maxCounter = 10;
	}
	Map(Map& m)//�������캯��
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
	void AddCity(int num, const char *na, int x, int y)//���һ������
	{
		if (curCounter == maxCounter)
		{
			City *cities1=NULL;
 			cities1 = new City[maxCounter + 10];
			for (int a = 0; a < maxCounter; a++)//����ԭ���Ա������
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
				cout << "����ɾ���ĳ�����Ϣ����:" << endl;
				(cities + a)->show();
				cout << "�Ƿ�ɾ���˳���(Y/N)" << endl;
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
		cout << "�޴˳�����Ϣ" << endl;
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
				cout << "������Ҫ�޸ĵĳ�������>>";
				cin >> arr;
				cout << endl;
				cout << "������Ҫ�޸ĵĳ��б��>>";
				cin >> nums;
				cout << endl;
				cout << "������Ҫ�޸ĵĳ�������>>";
				cin >> x >> y;

				(*(cities + a)).setName(arr);
				(*(cities + a)).setnumber(nums);
				(*(cities + a)).setPOsition(x, y);
				return;
			}

		}
		cout << "���в�����"<< endl;
	}

	int FindCity(int num)//����num��ѯ���е���Ϣ
	{
		(*(cities + num )).show();
		return 0;
	}
	void showCities()//���ȫ���ĳ�����Ϣ
	{
		cout.setf(ios::left);//��������
		cout <<setw(10)<< "���б��" << setw(10) << "��������" << setw(10) << "��������x" << setw(10) << "��������y"<<endl;
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
	void ShowCity(int num)//���ָ�����е���Ϣ
	{
		cout << setw(10) << "���б��" << setw(10) << "��������" << setw(10) << "��������x" << setw(10) << "��������y";
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
	void show()//��ʾ�ɻ���Ϣ
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
	void  ReadarFind(double radarRadius, Map& m)//�״�ɨ�����
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
			number[a] = num % 10 + 48;//������תΪ�ַ�,���罫����1ת��Ϊ�ַ�1
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


int menu_select()//�˵�ѡ��
{
	int select = 0;
	char*menu[] = { "1.���ӳ�����Ϣ", "2.ɾ��������Ϣ", "3.�޸ĳ�����Ϣ", "4.���������Ϣ���ļ�", "5.���ļ���ȡ������Ϣ", "6.��ʾ���г�����Ϣ","7.���÷ɻ���Ϣ", "8.��ʾ�ɻ���Ϣ", "9.�ж���ɷɻ��Ƿ����ɲ��", "10.��ѯ�ɻ��״�뾶�����г�����Ϣ", "0.�˳�" };
	do
	{
		for (int a = 0; a <= 10; a++)
		{
			cout <<*( menu + a) << endl;
		}
		cout << "��ѡ����Ҫʹ�õĹ���>>";
		cin >> select;
	} while (select<0 || select>10);
	return select;
}

void appendCity(Map& mapObj)//���ӳ���
{
	int num = 0;
	char name[20] = {0};
	int x = 0, y = 0;
	cout << "��������еı��:";
	cin >> num;
	cout << endl;
	cout << "�������������:";
	cin >> name;
	cout << endl;
	cout << "��������е�x�����y����:";
	cin >> x >> y;
	mapObj.AddCity(num, name, x, y);
}

void delCity(Map& mapObj)//ɾ������
{
	int num = 0;
	cout << "������Ҫɾ���ĳ��б��";
	cin >> num;
	mapObj.DeleteCity(num);
}
void updCity(Map& mapObj)//�޸ĳ���:����Ӧ��ʹ�������ˣ��˷��˴�����ʱ��
{
	int num = 0;
	cout << "������Ҫ�޸ĳ��еı��";
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
	cout << "������ɻ��ı��";
	cin >> num;
	cout << "������ɻ�����";
	cin >> name;
	cout << "������ɻ���x,y����";
	cin >> x >> y;
	cout << "������ɻ�������(��)";
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
		cout << "��ǰ���κηɻ���Ϣ"<<endl;
}

void Brake(Plane& planeObj)
{
	double sp = 0;
	double reDistance = 0;
	cout << "�����뵱ǰ�ɻ����ٶ�:";
	cin >> sp;
	cout << "������ʣ���ܵ��ĳ���:";
	cin >> reDistance;
	switch (planeObj.CanBrake(sp, reDistance))
	{
	case 1:
		cout << "����ɲ��" << endl;
		break;
	case 0:
		cout << "����ɲ��" << endl;
		break;
	case -1:
		cout << "�޷ɻ���Ϣ,�޷��ж�" << endl;
		break;
	}
}

void RadarSearch(Plane& planeObj,Map& mapObj)
{
	double Rader = 0;
	cout << "�����뵱ǰ�ɻ����״�ɨ��뾶";
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
			cout << "�˳�ϵͳ" << endl;
			break;
		}
		if (select == 0)
			break;
		system("cls");
	}
	
	return 0;
}  