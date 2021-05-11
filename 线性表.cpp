#include<iostream>
using namespace std;


class ListClass//整形线性表
{
	int *p;//指向线性表的指针
	int len;//线性表的长度
	int  elems;//线性表元素个数
public:
	ListClass(int a = 10)//不传参的话默认线性表的长度是10
	{
		len = a;
		elems = 0;//还没有元素传进来
		p = new int[a];//开辟参数大小的空间
	}
	~ListClass()//析构函数
	{
		if (p)
		{
			delete[]p;//释放空间
		}
	}
	void elemss(int a)//将数据传到链表当中去
	{
		if (elems == len)//如果线性表满了，那么开辟线性表，并将原来的线性表内容拷贝到新线性表中去.
		{
			int *p1 = NULL;
			p1 = new int[len += 10];//创建新的线性表
			for (int i = 0; i < len; i++)//拷贝原线性表的内容
			{
				*(p1 + i) = *(p + i);
			}
			p = p1;
			delete[]p;//将原来的线性表删,如果不删除的话析构函数是不会将其删除的，因为p指向的空间已经变了。
		}
		p[elems] = a;//插入元素
		elems++;
	}
	int lens()
	{
		return len;
	}
	int elem(int a)//返回线性表中第a个元素
	{
		return p[a - 1];
	}
};






int main()
{

	return 0;
}