#include<iostream>
using namespace std;


class ListClass//�������Ա�
{
	int *p;//ָ�����Ա��ָ��
	int len;//���Ա�ĳ���
	int  elems;//���Ա�Ԫ�ظ���
public:
	ListClass(int a = 10)//�����εĻ�Ĭ�����Ա�ĳ�����10
	{
		len = a;
		elems = 0;//��û��Ԫ�ش�����
		p = new int[a];//���ٲ�����С�Ŀռ�
	}
	~ListClass()//��������
	{
		if (p)
		{
			delete[]p;//�ͷſռ�
		}
	}
	void elemss(int a)//�����ݴ���������ȥ
	{
		if (elems == len)//������Ա����ˣ���ô�������Ա�����ԭ�������Ա����ݿ����������Ա���ȥ.
		{
			int *p1 = NULL;
			p1 = new int[len += 10];//�����µ����Ա�
			for (int i = 0; i < len; i++)//����ԭ���Ա������
			{
				*(p1 + i) = *(p + i);
			}
			p = p1;
			delete[]p;//��ԭ�������Ա�ɾ,�����ɾ���Ļ����������ǲ��Ὣ��ɾ���ģ���Ϊpָ��Ŀռ��Ѿ����ˡ�
		}
		p[elems] = a;//����Ԫ��
		elems++;
	}
	int lens()
	{
		return len;
	}
	int elem(int a)//�������Ա��е�a��Ԫ��
	{
		return p[a - 1];
	}
};






int main()
{

	return 0;
}