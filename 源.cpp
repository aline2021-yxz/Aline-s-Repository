#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>//字符串操作函数
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>//使用time函数
//int main()
//{	
 //printf("%d", sizeof(short));
 //printf("%d", sizeof(int));
 //printf("%d", sizeof(long));
 //printf("%d", sizeof(long long));
 //printf("%d"), sizeof(float);
	//return 0;
//}  
//int main()
//{
	//long num = 10000;
	//	printf("%d", num);
	//	return 0;
//}
//int main()
//{
	//float f = 0.5;
	//printf("%f", f);
//	return 0;

//	return 0;
//
//字节：计算机中的单位，bit-比特位（最小），byte-字节，kb=1024byte， mb=1024kb，gb=1024mb，tb=1024gb，pb。
//1个字节是8个比特位  10110011就是一个字节          字节跳动公司（ByteDance）---抖音，今日头条，西瓜视频
                                                    //30w+
//计算机是硬件---通电
//正电，负电
//1      0
//二进制：0 1     逢2进1 1+1=10
//十进制；0 1 2 3 4 5 6 7 8 9
//二进制转换十进制   百位数×二的平方+十位×二的一次方+个位×二
//
//int main()
//{
	  //年龄
	  //20
	//short age = 20;//向内存申请2个字节=16比特位
	//float  weight = 95.6;//像内存申请4个字节
	//变量/常量
	//定义变量  类型+变量名＋赋值 such short age=45

	//return 0;

	//int num1 = 10;//全局变量;定义在主函数外面

	//int main()
	//{
	//		int num2=5//局部变量；放在大括号内
	//		return 0;
	//	}
	//变量的使用
	//计算两个数的和
	//int main()
	//{
	//	int num1 = 0;
	//	int num2 = 0;
	//	int sum = 0; //c语言规定变量必须在前面规定
	//	scanf_s("%d%d",&num1, &num2);//输入函数scanf  &取地址符号（不可少）
	//	sum = num1 + num2;
//	//	printf("sum=%d", sum);
////	//	return 0;
////	//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int num3 = 0;
//	int sum = 0;
//	scanf("%d%d%d", &num1, &num2, &num3);
//	sum = num1 + num2 + num3;
//	printf("sum=%d", sum);
//	return 0;
//}
//int main()
//{
//	int  num1 = 0;
//	int num2 = 0;
//	int sum = 0;
////	scanf_s("%d%d", &num1, &num2);
////	sum = num1 * num2;
////	printf("sum=%d",sum );
////	return 0;
////}
////github是什么                  去上面注册账户
//// such as：   QQ空间            创建代码仓库例如c-code
//                    //             每天写代码上传到代码仓库
//// 相册                             
//////照片上传到QQ空间的相册
////int main()
////{
////	printf("%d", sizeof(char));
////	return 0;
////}
////
////
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d", sum);
////	
//	return 0;
//}
//	 int main()
//{
//		const  int num= 3;//字面常量//const是常属性，num是constant修饰的常变量，num还是一个变量。
//		 printf("%d\n", num);
//		 num = 8;
//		 printf("%d\n", num);
//	return 0;
//}
//数组的创建代码： int arr(随机的常量（不能是const修饰的常变量）) = {0}；
//枚举常量
////枚举--一一列举
////枚举关键字--enum
//enum Sex
//{
//	MALL,//0
//	FEMALE,//1
//	SECRET//2
//};
//int main()
//{
//	printf("%d\n", MALL);
////	printf("%d\n", FEMALE);
////	printf("%d\n", SECRET);
////	return 0;
////}
////字符串+转义字符+注释
////“hello bit.\n"像这种由双引号引起的一串字符就是字符串。
////such as
//int main()
//{
//	char arr1[]="adc";
//	char arr2[] = {'a','b','c',0 };
//	printf("%s\n",arr1);
////	printf("%s\n",arr2);
////	return 0;
////}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a', 'b', 'c' };
//	//printf ("%d\n", strlen(arr1));
//	/*printf ("%d\n", strlen(arr2));*/
//	return 0;
//}
//转义字符 如\n可以换行。 \?在书写连续多个问号时防止他们被解析成三字母词（vs不涉及）
//\'表示字符常量’    \"表示一个字符串内部的双引号    \\防止被转义  
////\t水平制表符 打印出来是一段空白     \v是垂直制表符
////   \dd的dd是8进制，需要转换成10进制数字对应的阿斯克码值所对应的字符（在数字符串的字符个数时切要小心），个位*8的0次方十位*8的1次方。   \xdd的dd是两个16进制数字
//int main()
//{   
//
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum=%d", sum);
//
//	return 0;
//}（2进制）位操作
//按位与    (&)   //010
                  //110   他们进行按位与，1是真，0是假，他们互与的话：1 1互与为1   1 0互与为0
//按位或    (|)    //010
                   //110    他们按位或，   0 1互或为1  意思是只要有1或出来就是1
//按位异或 （^）   //010
                   //110    他们按位异或， 对应的二进制位相同则为0    相异则为1
//按位取反 （~）  //010 //按位取反得   101
// 一个等号是赋值  两个等号是判断
//复合赋值符 +=     -=   &=   |=   ^=
//单目操作符 
//双目操作符
////三目操作符
//int main()
//{
//	int a = 000;
//	printf("%d\n", a);
//	printf("%d\n", !a);//     !反向操作符 ：把真变成假，把假变成真。
//	return 0;
//}
//////sizeof计算的是变量（两边的括号可以省略）或者类型所占的空间大小。
//int main()
//{
//	int arr[10] = {0 }; //数组的大小只和[n]中的n的值有关，和别的无关。
//	printf("%d", sizeof (arr));
//	//计算数组的元素个数
//	//数组的总大小/每个元素的大小
//	// sz= sizeof（arr）/sizeof（arr[0]）;
//	return 0;
//}
//int main()
//{
//	printf("%d", strlen("a,b,c\0"));
//
////	return 0;
////}
////
//int main()
//{
//	printf("进入大学\n");
//	int line = 0;
//	while (line<=1000)
//	{
//		printf("坚持，好好学习\n");
//		line++;
//	}
//	if (line>=1000);
//	printf("成功\n");
//	return 0;
////}
//////原码符号位（二进制的最高位）不变，其他位按位取反得到反码，反码加一得到补码。（都是二进制）
//符号位：最高位的数  若为1则为负数    为0则为正数
//1111111111111111111111111+1   
////10000000000000000000000000
////2^32-1
//int main()
//{
//	int a = 0;//int4个字节，32个比特位00000000000000000000000000000000是补码，打印的是原码，所以需要转换
//	int b = ~a;//                     11111111111111111111111111111111是~a的补码  为负数 
//	printf("%d\n", b);             // 11111111111111111111111111111110是~a的反码 
//	//                                10000000000000000000000000000001是~a的原码  由二进制可算出结果是负一
//	return 0;
//}
////int main()
////{
////	int a = 10;
////	//int b = a++;//后置++，先使用，后++（加1）  --一样  
//	int b = ++a;//先++（加1），后使用  --一样
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//关系操作符 
//   >= 大于等于       !=判断不等于   ==判断等于
//逻辑操作符  &&逻辑与   ||逻辑或   0表示假   非0 表示真     int a=1  int b=2  int c=a&&b  打印出c为1  只要a和b有一个为假那么输出结果是假0
//            // ||只要ab有一个为真那结果就是真1
////条件操作符   exp1?exp2:exp3;   若而exp1为真 则执行2  若为假 则执行3
//int main()     
//{
//	int a = 30;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	/*if (a > b)      
//		max = a;
//	else
//		max = b;*/
//	printf("%d\n", max);
//	return 0;
////}
//int main()
//{
//	int arr[10] = {0};
//	arr[4];//[]为下标引用操作符
//	return 0;
////}
//int Add(int x,int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 25;
//	int num2 = 0;
//	int sum = Add(num1,num2);
//	printf("%d",sum);
//	return 0;
//}
//常用关键字    auto自动
//int main()
//{
//	int a = 10;//局部变量/自动变量  auto被省略
//	return 0;
//}
////break     case   const    continue    default默认     do   double   else    enum  extern   goto  register    signed（就是int）  unsigned（无符号数，永远都是正数） struct（结构体关键字）  typedef（类型重定义）   union（共用体）  volatile   while   switch    void(空)
////计算机  存储数据                                                                                                                                                                     typedef unsigned int  u int//就是简化了unsigned int 使其变成 u int，效果一样
////硬盘    内存     高速缓存  寄存器  访问速度越来越快
////CPU-中央处理器
////int main()
////{
////	register  int a = 10;//仅仅是建议将a放入寄存器中。
////	return 0;
////}
//void test()     
//{
//	int a = 1; 创建       static int a=1;//a成为静态局部变量，a++后结果保留  static修饰局部变量，局部变量的生命周期变长，不会销毁
//	a++;
//	printf("a=%d\n", a); 销毁    加了static不销毁
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
////	}
////
////	return 0;
////}
////static修饰全局变量
//int main()
////{
////
////	   //extern是用来声明外部符号的
////	extern  int hhh;
////	printf("hhh=%d\n", hhh);
//
//	return 0;
////}
//extern int Add(int, int);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//////	return 0;
//////}
//////
////int main()
////{
////	unsigned int num = 1;   // 00000000000000000000000000000001
////	unsigned int num1 = ~num;//11111111111111111111111111111110
//////	printf("%d\n", num1);//    11111111111111111111111111111101
//////	return 0;              //  10000000000000000000000000000010
////////}
//int main()
//{
//	int b=0;
//	int dd = 0;
//	static int A = 0;
//	while (A <= 10)
//	{
//		A++;    
//		printf("%d\n", A >= 5 ? b : dd);
//		
//	}
//        
//	return 0;
//}
//#define定义常量和宏
//#define MAX 100//定义的标识符常量
//#define可以定义宏-带参数
//定义加法 
//int max=Max（a，b）//函数
//宏的方式  max=MAX（a，b）
//函数：
//Max （int a，int b）
//{
////if（x>y）
//return x;
//else
//return y;
//}
//宏：
//#define MAX（x，y）（x>y?x:y）
//指针
//如何产生地址 
//32位   32根地址线/数据线    正点和负电               2^32次方个二进制序列，产生2^32个地址
//64位          00000000000000000000000000000000
//      32位    00000000000000000000000000000001
//              ....
//              11111111111111111111111111111111
////内存以字节为单位
//int main()
////{
////	int a = 10;
////	int* p = &a;//a存放在p里面，*是解引用操作符    *p=20作用是将p中的内容（也就是a）改成20
////	printf("%p\n", p);//&取地址符，可以知道a在内存中存放的位置 
////	//有一种变量是用来存放地址的 被称为指针变量（例如p）
////	return 0;
////}
//int main()
//{
//	double a = 1.33;
//	double* pp = &a;
//	printf("%lf",* pp);
//printf("%d\n",sizeof(pp))    只要是指针变量其大小就是4（32位平台），8（64位平台）
//
//return 0
//
//}
////结构体   描述复杂对象  是自己创造出来的类型
//////struct 结构体关键字
//struct book
//{
//	char name[15];//C语言程序设计
//	short price;//200
////};
//int main()
//{
//	//利用结构体类型船舰一个该类型的结构体变量
//	struct book b1 = { "C语言程序设计",200 };
//	printf("书名：%s\n", b1.name);
//	printf("价格:%d\n", b1.price);
//	return 0;
//}
//    .   结构体变量.成员
//      ->    结构体指针->成员   */
//struct Basketballshoes
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	struct Basketballshoes b1={ "欧文5代\n", 1300 };
//	printf("篮球鞋：%s", b1.name);
//	printf("价格：%d", b1.price);
//	return 0;
//
//}
//语句：由一个分号隔开的句子就是一个语句
//  只有一个分号的也是语句，空语句
//分支语句(选择结构)
//if  else
//语法结构
//  if（表达式）
          //语句


//  或者


//  if（表达式）
          //语句1；
    //else
     //语句2



//或者
// if（表达式1）
//  //语句1
////else if（表达式2）
//// 语句2；
////else 
//// 语句3；
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("未成年\n");
//	else
////		printf("成年\n");
//////	return 0;
//////}
////int main()
////{
////	int a = 0;
////	while (a <= 100)
////	{		printf("%d\n", a);
////	a += 1;
////}
//////	return 0;
//////}
//int main()
//int a = 0; 
//	switch (a);//switch后面的变量必须是整形  char也可以
//	{
//	case1:
//		printf("hhhhh\n");
//	case0:
//		a++;
//		printf("%d\n", a);
//	}
//	return 0;
//}{
//	
////循环语句
//while循环   break   continue
//getchar    putchar=printf("%C\n, )
//int main()
//{
//	int ch= 0;      //输入缓冲区   getchar可以获取缓冲区里面的一个字符
//
//	while (( ch= getchar()) != EOF)//
//	{
//		putchar(ch);
//	}
//	return 0;
//}'
////for 循环  最全面的，完全可以只用它
////for（初始化变量；循环判断；调整变量）
////  循环语句；
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}  
//for(;;)  死循环
//for循环的初始化，判断和调整都可以判断
//但是：判断部分被省略那么视判断恒为真
////do...while循环 起码循环一次
//int main()
//{
//	int a = 0;
//	do
//	{
//		a++;
//		printf("%d\n", a);
//	} 
//	while (a <= 9);
////	return 0;
////}
//int main()//算n个数的阶乘。
//{
//    int z = 1;
//	int a =1;
//	int n = 0;
//	scanf("%d", &n);
//	for (a = 1;a<=n; a++)
//	{
//	  z=z*a;
//	}
//	printf("z=%d\n", z);
//	return 0;
////}
////折半查找算法，二分查找算法
//int main()
//{
//	int a = 1225;
//	printf("%d",a%=10); . 
////	return 0;
////}
//int main()
//{
//	int a = 0;
//	printf("开始游戏\n");
//	printf("请选择难度(0为简单，1为困难)\n");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 0:
//		printf("不会吧\n");
//		break;
//	case 1:
//		printf("厉害\n");
//		break;
//	}
//	return 0;
////}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 5;//找的元素是7, 7的下标是k
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数,也就是知道了右下标是sz-1
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
////}
//int main()
//{
//	char arr[] = { "welcome to bit!!!!!!!!!" };
//	char arr1[] = "#######################";
//	int left = 0;
//	int left1 = 0;
	//int right = strlen(arr) - 1;
	//int right1 = strlen(arr1) - 1;
//	while (left <=right)
//	{
//	arr1[left1] =arr[left];
//	arr1[right1] =arr[right];
//	system("cls");//执行系统命令的函数  cls是清空屏幕
//		printf("%s\n", arr1);
//		Sleep(1000);//1000毫秒有也就是1s
//		
//		left++;
//		right--; 
//		left1++;
//		right1--;
//	}
//	return 0;
//}
//}
////Sleep函数是休息几秒以毫秒为单位
//int main()
//{
//	int a =0;
//	int b = 1;
//	char password[20] = {0};
//	for (a = 0, b = 2; a < 3; a++, b--)
//	{
//		printf("请输入密码:");
//		scanf("%s", password);
//	if(strcmp(password,"12345")==0)//==不能用来判断两个字符串是否相等，应该用strcmp（passworld，“123456”）==0
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//			printf("可用机会: %d\n", b);
//		}
//	}
//		if (a == 3)
//		{
//			printf("登陆失败，账号冻结15分钟\n");
//		}
//	return 0;
//}
//#define MAX( x,y,z) (a>b>c?b>a>c?c>a>b?a:b:c)
//
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int max = 0;
//	scanf("%d%d%d", &a, &b, &c);
//    max = MAX (int a,int b,int c);
//	return 0;
////}
//int main()
//{
//	int a = 3;
//	for (a = 3; a < 101; a += 3)
//	{
//		printf("%d\n", a);
//	}
//
////	return 0;
////}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d", &a, &b);
//	for (a%b; b % (a%b) != 0; 1)
//	{
//		c = a%b;
//		a = b;
//		b = c;
//	}
//	printf("%d\n", c);
//	return 0;
//} 
//int main()//打印素数
//{
//	int a = 0;
//	int b = 2;
//	int count = 0;
//	for (a = 1; a < 101; a++)//从2往后的偶数都不可能是素数
//	{
//		for (b = 2; b <= sqrt (a); b++)//sqrt()意思是开平方
//		{
//			if (a%b== 0)
//				break;
//		}
//		if (b>sqrt(a))10
//		{
//			count++;
//			printf("%d\n", a);
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int a = 0;
//	for (a = 1; a < 101; a++)
//	{
//		if ((a%10 == 9) || (a/10 == 9))
//			printf("%d\n", a);
//		count++;
//	}
//
//
//	return 0;
//
//}'
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1,b=1; b <= a; b++)
//	{
//		printf( a*b);
//	}
//
//	return 0;
//}
//int main()//二分查找
//{
//	int mid = 0;
//	char a = 0;
//	scanf ("%d", &a);
//	char arr[] = {"I LOVE YOU"}; 
//	int left = 0;
//////	int right = strlen(arr) - 1;
//	while (left<=right)
//	{
//		mid = (left + right) / 2;
//		if (mid <a )
//		{
//			right--;
//		}
//		 else if (mid>a)
//		{
//			 left++;
//		}
//		if (mid = a)
//		{
//			printf("%d", mid);
//			break;
//		}
//
//	}
//
//	return 0;
//}
//int main()//打印乘法口诀
//{
//	int a = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		int b = 1;//a代表行，b代表列
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a*b);//打印完一行
//		}
//		printf("\n");//换行
//	}
//	return 0;
//}
//猜数字游戏

//void menu()//菜单  void表示不用return
//{
//	printf("************************\n");
//	printf("***1:play  0:exit ***** \n");
//	printf("************************\n");
//}
//void game()
//{
//	//srand((unsigned int)time(NULL));//需要一个变化的整数  时间戳：当前计算机的时间减去计算机的起始时间1970.1.1.0他是时刻都在变化的
//	int a= rand()%100+1;//rand():生产随机数  0-32767之间
//	//printf("%d\n", a);
//	int b = 0;
//	
//	while (1)
//	{
//		printf("请猜数字");
//		scanf("%d", &b);
//		if (b>a)
//			printf("猜大了\n");
//		else if (b<a)
//			printf("猜小了\n");
//		else
//		{
//			printf("你他妈的居然猜对了\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//需要一个变化的整数  时间戳：当前计算机的时间减去计算机的起始时间1970.1.1.0他是时刻都在变化的
//	do
//	{
//		menu();
//		printf("请选择:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//		}
//	} while (input);
//	return 0;
//}
//goto语句去到，回到，跳到
////关机程序
//int main()
//{
//
//	char arr[20] = {0};
//	//shutdown-s-t 60 设置60s后关机      shutdown-a 取消关机    cmd-命令行
//	system("shutdown -s -t 60");
//again:
//	printf("计算机将在60s后注销，若需取消请输入：我他妈是傻逼\n");
//	scanf("%s", arr);
//	if ((strcmp(arr, "我他妈是傻逼")) == 0)
//	{
//		printf("取消成功\n");
//		system("shutdown -a");
//		
//	}
//	else
//	{
//		printf("取消失败\n");
//		goto again;
//	}
//	return 0;
//
//}
//函数:库函数
//int main()
//{
//    char arr[] = { "aaa" };
//	char arr1[] = { "bbbbb" };
//	strcpy(arr1,arr);//strcpy-字符串拷贝  包括\0   前面放拷贝到的地方，后边放被拷贝的。前面的原内容被覆盖。因为\0是字符串的结束标志
//	printf("%s\n", arr1);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello nnn";
//	memset(arr, '#', 2);//第一个参数是改变的地址，第二个是改编成什么，第三个是改变几个字节 
//	printf("%s\n", arr);
//	return 0;
//}
//自定义函数 
//void swap(int *pa, int *pb)//交换数字
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a,&b);
//	swap(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}
//当实参传给行参时  形参其实是实参的一份临时拷贝，改变形参不会改变实参。
//传值调用 ，实参和形参没关系
//传址调用，改变形参就是改变实参   如果要改变实参那么必须传址
//void rec(int x)//尽量不要再函数部分打印，下面是错误示范
//{
//	int y = 1;
//	for (1; y <= x;y++)
//	{
//		if (x%y == 0)
//		{
//			break;
//		}
//	}
//	if (x ==y)
//		printf("是素数\n");
//	else
//		printf("不是素数\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	rec(a);//专业函数是 is_prime
//	return 0;
//} 
//判断闰年：能被4整除且不能被100整除     2：能被400整除
//is_leap_year
//int binary_search(int arr[]   , int k,int a)//这里的arr其实是一个指针，指针要么4个字节要么8个字节
//{
//	int mid = 0;
//	int left = 0;
//	int right = a;
//	for (1; left <= right; 1)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right--;
//		}
//		else if (arr[mid] < k)
//		{
//			left++;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//
//int main()
//{
// int arr[] = {1,2,3,4,5,6,7,8,9};
//	int a = 0;
//	int k = 7;
//    a = sizeof(arr) / sizeof(0) - 1;
//	 int ret= binary_search(arr, k, a);//传递的arr其实只是数组arr第一个元素的地址
//	 if (ret == -1)
//		 printf("找不到");
//	 else
//		 printf("找到了，下标是=%d", ret);
//	return 0;
//}
//函数嵌套和链式访问
//嵌套：函数套函数
//链式：把一个函数的返回值作为另一个函数的参数
//////int main()
//////{
//////	printf("%d", printf("%d", printf("%d", 43)));//printf函数的返回值是要打印的字符多少
//////	return 0;
//////}

//int ADD(int x, int y)
//{
//	int c = 0;
//	c = x + y;
//	return c;
//
//}
//
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d", sum);
//
//	return 0;
//}
//函数递归:程序调用自身编程技巧
//int main()//最简单的递归
//{
//	printf("呵呵\n");
//	main();
//	return 0;
//}
//栈区；局部变量  函数形参                堆区                         静态区 ：全局变量    static修饰的变量
//栈溢出:每一次调用函数都会向栈区申请空间，直到没有空间溢出。
//void print(int b)
//{
//	if (b > 9)
//	{
//		print(b / 10);
//	}//最后一次调用完回到这里
//	printf("%d ", b % 10);
//}
//int main()//把一个数的每一位各自打印
//{
//	unsigned int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int max = 0;
//	int ret = 1;
//	scanf("%d", &max);
//	for (a = 1; a <= max;  a++)
//	{
//		ret = ret*a;
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int prp(int a, int b, int c)
//{
//	
//
//		return d;
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int min = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	min = prp(a, b, c);
//	printf("%d", min);
//	
//
//	return 0;
//}
//二维数组 int arr[行][列]
//数组作为函数参数
//冒泡排序：bubble_sort() 一趟冒泡排序会是一个元素到达它的位置，含n各元素的数组需要n—1次冒泡排vop
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		int z = 0;
//		for (z = 0; z < sz - 1-i; z++)
//		{
//			if (arr[z] >arr[z + 1])
//			{
//				int tmp = arr[z+1];
//				arr[z + 1] = arr[z];
//				arr[z] = tmp;
//			}
//		}
//
//	}
//
//}
//int main()
//{
//	int a = 0;
//	int arr[] = { 10,9,8,7,4,6,5,1,2,3,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	for (a = 0; a < sz ; a++)
//	{
//		printf("%d ", arr[a]);
//	}
//	return 0;
//}
////三子棋
//void menu()//打印菜单
//{
//	printf("**********************\n");
//	printf("****1.play  2.exit****\n");
//	printf("**********************\n");
//}
//void intl(char board[3][3], int ROW, int LINE)//初始化数组
//{
//	int b = 0;
//	int c = 0;
//	for (c = 0; c < 3; c++)
//	{
//		for (b = 0; b < 3; b++)
//		{
//			board[b][c] = ' ';//是数组的每一个元素都是空格
//		}
//	}
//}
//void set(char arr[3][3], int row, int line)//打印棋盘
//{
//	int f = 0;
//	int d = 0;
//	int e = 0;
//	for (e = 0; e < 3; e++)
//	{
//		for (d = 0; d < 3; d++)
//		{
//			if (d < 2)
//				printf(" %c|",arr[e][d]);
//			else
//				printf(" %c ",arr[e][d]);
//		}
//		printf("\n");
//		if (e < 2)
//		{
//			for (f = 0; f < 3; f++)
//			{
//				if (f < 2)
//					printf("--|");
//				else if (f = 2)
//					printf("---");
//			}
//		}
//		printf("\n");
//
//	}
//}
//void playermove(char board[3][3], int row, int line)
//{
//	int g = 0;
//	int h = 0;
//	while (1)
//	{
//		printf("玩家请输入坐标:");
//		scanf("%d%d", &g, &h);
//		if (g >= 1 && g <= row&&h >= 1 && h <= row)
//		{
//			if (board[g - 1][h - 1] == ' ')
//			{
//				board[g - 1][h - 1] = '*';
//				break;
//			}
//			else
//			{
//				printf("非法坐标");
//			}
//		}
//		else
//		{
//			printf("输入错误,请重新输入\n");
//		}
//	}
//}
//void computermove(char arr[3][3], int row, int line)
//{
//	while (1)
//	{
//		int x = rand() % 3;
//		int y = rand() % 3;
//		if (x >=0 && x < 3 && y >= 0 && y < 3)
//		{
//			if (arr[x][y] == ' ')
//			{
//				arr[x][y] = '#';
//				break;
//			}
//		}
//	}
//}
//int  isfull(char arr[3][3], int row, int line)
//{
//	int x = 0;
//	int n = 0;
//	for (x = 0; x < 3; x++)
//	{
//		for (n = 0; n < 3; n++)
//		{
//			if (arr[n][x] == ' ')//棋盘没满
//			{
//				return 3;
//			}
//		}
//	}
//	return 2;//满了 
//}
//int judge(char arr[3][3], int row, int line)//1为玩家   0为电脑   3表示继续
//{
//	int z = 0;
//	for (z = 0; z <3; z++)
//	{
//		if (arr[z][1] == arr[z][2] && arr[z][2] == arr[z][0] && arr[z][0] == '*'&&arr[z][1] != ' ')
//		{
//			return 1;
//			break;
//		}
//		else if (arr[z][1] == arr[z][2] && arr[z][2] == arr[z][0] && arr[z][0] == '#'&&arr[z][1] != ' ')
//		{
//			return 0;
//			break;
//		}
//		else if (arr[1][z] == arr[2][z] && arr[2][z] == arr[0][z] && arr[0][z] == '*'&&arr[1][z] != ' ')
//		{
//			return 1;
//			break;
//		}
//		else if (arr[1][z] == arr[2][z] && arr[2][z] == arr[0][z] && arr[0][z] == '#'&&arr[1][z] != ' ')
//		{
//			return 0;
//			break;
//		}
//		else if (arr[1][1] == arr[2][2] && arr[2][2] == arr[0][0] && arr[0][0] == '*'&&arr[1][1] != ' ' || arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[2][0] == '*'&&arr[2][0] != ' ')
//		{
//			return 1;
//			break;
//		}
//		else if (arr[1][1] == arr[2][2] && arr[2][2] == arr[0][0] && arr[0][0] == '#'&&arr[1][1] != ' ' || arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0] && arr[1][1] == '#'&&arr[1][1] != ' ')
//		{
//			return 0;
//			break;
//		} 
//		else if (2 == isfull(arr, row, line))
//		{
//			return 2;
//			break;
//		}
//	}
//	return 3;
//}
//
//
//void game()//创建游戏
//{
//	int w = 1;
//	char board[3][3] = { 0 };
//	intl (board, 3, 3);
//	set(board, 3, 3);//创建棋盘  
//	while (1)
//	{
//		playermove(board, 3, 3);//玩家下棋
//		set(board, 3, 3);
//		w = judge(board, 3, 3);
//		if (w !=3)
//		{
//			break;
//		}
//		computermove(board, 3, 3);
//		set(board, 3, 3);
//		w = judge(board, 3, 3);
//		if (w !=3)
//		{
//			break;
//		}
//	}
//	if (w == 1)
//	{
//		printf("玩家获胜\n");
//	}
//	else if (w == 0)
//	{
//
//
//		printf("电脑获胜\n");
//	}
//	else if (w == 2)
//	{
//		printf("平局\n");
//	}
//void  test()
//{
//	int a = 0;
//	do
//	{
//		
//		menu();
//		printf("请选择;");
//		scanf("%d", &a);
//		if (a == 1)
//		{
//			game();
//		}
//		else if (a == 2)
//		{
//			printf("退出游戏\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误,请重新选择\n");
//		}
//
//	} while (a);
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	test();
//	return 0;
//}
//int main()
//{
//	char arr[30];
//	gets(arr);
//	puts(arr);
//	printf("%%");
//	return 0;
//}
//int main()
//{
//	char a[10] = "china";
//	int i;
//	for (i = 0; i <= 4; i++)
//	{
//		a[i] += 1;
//	}
//	printf("%s", a);
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d", &n);
//	for (b = 0; b < n; b++)
//	{
//		if (b<4)
//		{
//			c++;
//		}
//		else if (b >= 4 && b<55)
//		{
//			main();
//		}
//		else if (b>55)
//		{
//			break;
//		}
//	}
//	printf("一共有牛：%d", c);
//	return 0;
//}
//int main()
//{
//	float heat;
//	double heat1;
//	scanf("%f", &heat);
//	heat1 = 5*(heat - 32) / 9;
//	printf("%0.2lf", heat1);
//}
//int main()
//{
//	int a, b, c, max;
//
//	scanf("%d%d%d", &a, &b, &c);
//	if (a >= b&&a >= c)
//	{
//		max = a;
//	}
//	else if (b >= a&&b >= c)
//	{
//		max = b;
//	}
//	else  if (c >= a&&c >= b)
//	{
//		max = c;
//	}
//	printf("%d\n", max);
//}
//int main()
//{
//	double x, y;
//	scanf("%lf", &x);
//	if (x<1)
//	{
//		y = x;
//	}
//	else if (x >= 1 && x<10)
//	{
//		y = 2*x - 1;
//	}
//	else
//	{
//		y = 3*x - 11;
//	}
//	printf("%0.lf", y);
//}
//int main()
//{
//	int a, b;
//	printf("请输入小于6位的整数");
//		scanf("%d", &a);
//	if (a/ 100000 == 0)
//	{
//		if (a / 10<1)
//		{
//			printf("1\n");
//		}
//		else if (a / 10<10)
//		{
//			printf("2\n");
//		}
//		else if (a / 10<100)
//		{
//			printf("3\n");
//		}
//		else if (a / 10<1000)
//		{
//			printf("4\n");
//		}
//		else if (a / 10<10000)
//		{ 
//			printf("5\n");
//		}
//		while (1)
//		{
//			 a= a % 10;
//			if (a/10==0)
//			{
//				printf("%d ", a);
//			}
//				while (1);
//		}000

//
//	}
//	else
//	{
//		printf("input error");
//	}
//}
//int main()
//{
//	printf("%d\n", sizeof());
//
//	return 0;
//}
//      &&     只要左边出现假的那么右边的都不会再算    || 只要左边出现真那么后边就不算了
//struct stu//构建结构体类型
//{//里面写要说的对象包含的属性
//	char name[20];
//	int price;
//};
//
//int main()
//{
//	struct stu s1 = { "欧文四代", 1500 };
//	struct stu* p = &s1;//结构体指针
//	printf("%s\n", p->name);//指针->属性
//	return 0;
//}
//正数的源码和反码相同
//指针就是地址，任何一个值只要存放到指针中就按地址来算，指针的大小不是4（32x）个字节就是8（64x）个字节
//两个16进制是8个二进制位也就是一个字节
//指针类型决定了指针解引用时能访问的字节大小  例如 int*可以访问4个字节   char*只能访问1个字节
//指针加减整数  指针类型决定了指针走一步多远（指针的步长）单位为字节   例如 int* p + 1其实是加4    char* p + 1是加1
//野指针：不知道指向哪里的，指向是随机的，指针未初始化会导致野指针的出现   指针如果慢慢变大直到越界也会导致野指针   指针指向的空间被释放了也会导致野指针



//int main()    //母牛的故事
//{
//	int n;
//	int gap = 0;
//	int count = 1;
//	scanf("%d", &n);
//	for (gap ; gap < n; gap++)
//	{
//		int b = 0;
//		if (gap < 4)
//		{
//			count++;
//		}
//		else
//		{
//			gap++;
//			return  
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int /*		printf("B\n");
//	else if (score >= 70 && score < 80)
//	{
//		printf("C\n");
//	}
//	else if (score >= 60 && score < 70)
//		printf("D\n");
//	else if (score < 60)
//		printf("E\n");
//	else if (score>100)
//	{
//		printf("输入错误\n");
//	}
//
//	return 0;
//}*/main()
//{
//	int score = 0;
//	printf("请输入成绩\n");
//	scanf("%d", &score);
//	if (score >= 90&&score<100)
//	{
//		printf("A\n");
//	}
//	else if (score >= 80 && score < 90)
//
//int main()//按高位到底位打印数字，一般是创建数组，将数字的每一位都存放到数组中，然后打印
//{
//	int num = 0;
//	int a, b, k, d ,f;
//	int e = 1;
//	int count = 1;
//	printf("请输入一个不大于五位的数<<");
//	scanf("%d", &num);
//	f = num;
//	while (num /10)
//	{
//		count++;
//		num = num / 10;
//	}
//	for (d = 0; d < count-1; d++)
//	{
//		e = e * 10;
//	}
//	for (b = 0; f / 10 != 0; e/10)
//	{
//		f = f / e;
//		printf("%d ",f);
//
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int N = 0;
//	int f;
//	int c = 0;
//	int arr[10] = { 0 };
//	scanf("%d", &N);
//	for (a = 0; a < N; a++)
//	{
//		int b = 0;
//		for (b = 1; b < a; b++)
//		{
//			if (a % b == 0)
//			{
//				arr[c] = b;
//				c++;
//			}
//		}
//		int d = 0;
//		int sum = 0;
//		for (d = 0; d < c; d++)
//		{
//			sum = sum + arr[d];
//		}
//			if (sum == a)
//			{
//				printf("%d  ", a);
//				printf(" its factors are ");
//				
//				for (f = 0; f <= c; f++)
//				{
//					printf("%d ", arr);
//				}
//			}
//	}
//
//	return 0;
//} 
//sizeof返回值是无符号数（符号位加入计算中），其他类型的数和他比较都会先化成无符号数
//int main()
//{
//	int*p;//局部变量不初始化，指针里面放的是一个随机值
//	*p = 20;
//
//	return 0;
//}

//
//int  count_bit_one(unsigned int a)//求二进制中1的个数（补码）  //对数字进行   %2     /2  操作获得二进制补码的每一位 
//{
//	int count = 0;
//	while (a)
//	{
//		if (a % 2 == 1)
//		{
//			count++;
//		}
//		a = a / 2;
//	}
//	return count;
//}
//
//
//
//
//int main()
//{
//	 int a = 0;
//	scanf("%d", &a);
//    int count =	count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}
//
//int  count_bit_one(int a)//求二进制中1的个数（补码）  将补码右移与1，就可以算得
//	int i;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((a >> i) & 1 == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//
//
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}
//int  count_bit_one(int a)//1100  &  1011  =1000  去掉了一个1；
//{
//
//	int count = 0;
//	while (a)
//	{
//		a = a&(a - 1);
//		count++;
//	}
//	return count;
//}
//
//
//
// int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("%d\n", count);
//	return 0;
//}
//求2个数字的二进制中有多少个位数不同；使用异或相同为0，不同为1，然后统计二进制中一的个数
//一般与数字有关的题目都要涉及：移位操作，与操作（一般是1与1）
//递归   

//                          |   |   
//                       ---|---|---
//                          |   |
//                       ---|---|---
//                          |   |
//
//void menu()
//{
//	printf("###############################################################\n");
//	printf("#######################    1：Play    2：Exit     #############\n"); 
//	printf("###############################################################\n");
//}
//
//void init(char board[3][3],int line,int row)//使数组中含有的元素全变为空格
//{
//	int a = 0;
//	int b = 0;
//	for (a = 0; a < 3; a++)
//	{
//	
//		for (b = 0; b < 3; b++)
//		{
//			board[a][b] = ' ';
//		}
//	}
//}
//void Printboard(char board[3][3], int line, int row)
//{
//	int c = 0;
//	for (c = 0; c < 3; c++)
//	{
//		int d = 0;
//		for (d = 0; d < 3; d++)
//		{
//			if (d<2)
//			{
//				printf(" %c |", board[c][d]);
//			
//			}	
//			if (d==3)
//			{
//				printf(" %c  ", board[c][d]);
//			}
//		}
//		printf("\n");
//		if (c <2)
//		{
//			int e = 0;
//			for (e = 0; e < 3; e++)
//			{
//				if (e < 2)
//					printf("---|");
//				if (e == 2)
//					printf("----");
//			}
//			printf("\n");
//		}
//	}
//	printf("\n");
//}
//void Playermove(char board[3][3], int line, int row)
//{
//	int f = 0;
//	int g = 0;
//	printf("Please  player select the coordinations\n");
//	
//	while (1)
//	{
//		scanf("%d%d", &f, &g);
//		if (f > 0 && f < 4 && g>0 && g < 4)
//		{
//			if (board[f - 1][g - 1] == ' ')
//			{
//				board[f - 1][g - 1] = '#';
//				break;
//			}
//			else
//			{
//				printf("Error:   please  selects again\\n");
//			}
//		}
//		else
//		{
//			printf("Error:  please  select again\n");
//		}
//	}
//} 
//int Isfull(char board[3][3], int line, int row)
//{
//	int l = 0;
//	for (l = 0; l < 3; l++)
//	{
//		int m = 0;
//		for (m = 0; m < 3; m++)
//		{
//			if (board[l][m] == ' ')
//			{
//				return 3;
//			}
//		}
//		
//	}
//	return 2;
//}
//int Ifwin(char board[3][3], int line, int row)
//{
//	int z = 0;
//		for (z = 0; z <3; z++)
//		{
//			if (board[z][1] == board[z][2] && board[z][2] == board[z][0] && board[z][0] == '*'&&board[z][1] != ' ')
//			{
//				return 1;
//				break;
//			}
//			else if (board[z][1] == board[z][2] && board[z][2] == board[z][0] && board[z][0] == '#'&&board[z][1] != ' ')
//			{
//				return 0;
//				break;
//			}
//			else if (board[1][z] == board[2][z] && board[2][z] == board[0][z] && board[0][z] == '*'&&board[1][z] != ' ')
//			{
//				return 1;
//				break;
//			}
//			else if (board[1][z] == board[2][z] && board[2][z] == board[0][z] && board[0][z] == '#'&&board[1][z] != ' ')
//			{
//				return 0;
//				break;
//			}
//			else if (board[1][1] == board[2][2] && board[2][2] == board[0][0] && board[0][0] == '*'&&board[1][1] != ' ' || board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] == '*'&&board[2][0] != ' ')
//			{
//				return 1;
//				break;
//			}
//			else if (board[1][1] == board[2][2] && board[2][2] == board[0][0] && board[0][0] == '#'&&board[1][1] != ' ' || board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] == '#'&&board[1][1] != ' ')
//			{
//				return 0;
//				break;
//			} 
//			else if (2 ==Isfull(board, 3, 3))
//			{
//				return 2;
//				break;
//			}
//		}
//		return 3;
//}
//
//void Computermove(char arr[3][3], int line, int row)
//{
//	while (1)
//	{
//		int x = rand() % 3;
//		int y = rand() % 3;
//		if (x >=0 && x < 3 && y >= 0 && y < 3)
//		{
//			if (arr[x][y] == ' ')
//			{
//				arr[x][y] = '*';
//				break;
//			}
//		}
//	}
//}
//
//
//
//void Game()
//{
//	char board[3][3] = {0};
//	init (board,3,3);
//
//	while (1)
//	{
//		Playermove(board, 3, 3);
//		Printboard(board, 3, 3);
//		int z = Ifwin(board, 3, 3);
//		if (z == 0)
//		{
//			printf("Player is win\n");
//			break;
//		}
//		else if (z == 1)
//		{
//			printf("Computer is win\n");
//			break;
//		}
//		else if (z == 2)
//		{
//			printf("No body win\n");
//			break;
//		}
//
//		Computermove(board, 3, 3);
//		Printboard(board, 3, 3);
//		 z = Ifwin(board, 3, 3);
//		if (z == 0)
//		{
//			printf("Player is win\n");
//			break;
//		}
//		else if (z == 1)
//		{
//			printf("Computer is win\n");
//			break;
//		}
//		else if (z == 2)
//		{
//			printf("No body win\n");
//			break;
//		}
//
//		
//		
//		
//	}
//}
//	void test()
//	{
//		int a = 0;
//		do
//		{
//			
//			menu();
//			printf("Please select:<");
//			scanf("%d", &a);
//			if (a == 1)
//			{
//				Game();
//			}
//			else if (a == 2)
//			{
//				printf("Exit\n");
//				break;
//			}
//			else
//			{
//				printf("error\n");
//			}
//	
//		} while (a);
//	}
//
//	int main()
//	{
//		srand((unsigned int)time(NULL));
//		test();
//		return 0;
//	}
//int main()
//{
//	int b;
//	int count = 0;
//	int a = 0;
//	int in = 0;
//	int arr[5] = { 0 };
//	printf("请输入一个小于六位的整数\n");
//	scanf("%d", &in);
//	if (in <= 99999)
//	{
//		while (in)
//		{
//			arr[a] = in % 10;
//			in= in / 10;
//			count++;
//			a++;
//		}
//		printf("%d\n", count);
//	}
//	for (b = 0; b < a; b++)
//	{
//		printf("%d ", arr[b]);
//	}
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int c = 0;
//	int d = 0;
//	a > b ? d= a : d = b;
//	a=d;
//	b = c;
//	c = a % b;
//	for (1; 1; 1)
//	{
//		
//		 if (a%b== 0)
//		 {
//			 printf("%d\n", b);
//			 break;
//		 }
//		 a = b;
//		 b = a%b;
//	}
//
//	return 0;
//}
//int judge(int a)//水仙花数
//{
//	int d = 0;
//	int ret = 0;
//	int c = a % 10;
//	int f = 1;
//	for (d = 0; d <3; d++)
//	{
//		f = f*c;
//	}
//	ret = f;
//	if (a / 10 != 0)
//	{
//		a = a / 10;
//		return ret + judge(a);
//	}
//	else
//	{
//		return a*a*a;
//	}
//}
//
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int e = 0;
//	for (a = 1; a < 1000; a++)
//	{
//		 e = judge(a);
//		 if (e == a)
//		 {
//			 printf("%d ", e);
//		 }
//	}
//	return 0;
//}
//int main()
//{
//	char input[20];
//	gets (input);
//	printf("%s", input);
//
//	return 0;
//}
//struct stu//结构体的类型，在还没有创建变量的时候还没有占内存 
//{
//   char name [20];
//   int age;
//}s1;              s1是全局变量
//int main()
//{
     //struct std s；  
//}
//数组的元素必须是相同类型的变量
//实参传值给形参不仅需要时间还需要开辟一份相同的空间，而传址不需要。所以在结构体传参的时候采用传址更好。