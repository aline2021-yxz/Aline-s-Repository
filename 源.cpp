#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include<string.h>//�ַ�����������
#include<windows.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>//ʹ��time����
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
//�ֽڣ�������еĵ�λ��bit-����λ����С����byte-�ֽڣ�kb=1024byte�� mb=1024kb��gb=1024mb��tb=1024gb��pb��
//1���ֽ���8������λ  10110011����һ���ֽ�          �ֽ�������˾��ByteDance��---����������ͷ����������Ƶ
                                                    //30w+
//�������Ӳ��---ͨ��
//���磬����
//1      0
//�����ƣ�0 1     ��2��1 1+1=10
//ʮ���ƣ�0 1 2 3 4 5 6 7 8 9
//������ת��ʮ����   ��λ��������ƽ��+ʮλ������һ�η�+��λ����
//
//int main()
//{
	  //����
	  //20
	//short age = 20;//���ڴ�����2���ֽ�=16����λ
	//float  weight = 95.6;//���ڴ�����4���ֽ�
	//����/����
	//�������  ����+����������ֵ such short age=45

	//return 0;

	//int num1 = 10;//ȫ�ֱ���;����������������

	//int main()
	//{
	//		int num2=5//�ֲ����������ڴ�������
	//		return 0;
	//	}
	//������ʹ��
	//�����������ĺ�
	//int main()
	//{
	//	int num1 = 0;
	//	int num2 = 0;
	//	int sum = 0; //c���Թ涨����������ǰ��涨
	//	scanf_s("%d%d",&num1, &num2);//���뺯��scanf  &ȡ��ַ���ţ������٣�
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
////github��ʲô                  ȥ����ע���˻�
//// such as��   QQ�ռ�            ��������ֿ�����c-code
//                    //             ÿ��д�����ϴ�������ֿ�
//// ���                             
//////��Ƭ�ϴ���QQ�ռ�����
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
//		const  int num= 3;//���泣��//const�ǳ����ԣ�num��constant���εĳ�������num����һ��������
//		 printf("%d\n", num);
//		 num = 8;
//		 printf("%d\n", num);
//	return 0;
//}
//����Ĵ������룺 int arr(����ĳ�����������const���εĳ�������) = {0}��
//ö�ٳ���
////ö��--һһ�о�
////ö�ٹؼ���--enum
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
////�ַ���+ת���ַ�+ע��
////��hello bit.\n"��������˫���������һ���ַ������ַ�����
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
//ת���ַ� ��\n���Ի��С� \?����д��������ʺ�ʱ��ֹ���Ǳ�����������ĸ�ʣ�vs���漰��
//\'��ʾ�ַ�������    \"��ʾһ���ַ����ڲ���˫����    \\��ֹ��ת��  
////\tˮƽ�Ʊ�� ��ӡ������һ�οհ�     \v�Ǵ�ֱ�Ʊ��
////   \dd��dd��8���ƣ���Ҫת����10�������ֶ�Ӧ�İ�˹����ֵ����Ӧ���ַ��������ַ������ַ�����ʱ��ҪС�ģ�����λ*8��0�η�ʮλ*8��1�η���   \xdd��dd������16��������
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
//}��2���ƣ�λ����
//��λ��    (&)   //010
                  //110   ���ǽ��а�λ�룬1���棬0�Ǽ٣����ǻ���Ļ���1 1����Ϊ1   1 0����Ϊ0
//��λ��    (|)    //010
                   //110    ���ǰ�λ��   0 1����Ϊ1  ��˼��ֻҪ��1���������1
//��λ��� ��^��   //010
                   //110    ���ǰ�λ��� ��Ӧ�Ķ�����λ��ͬ��Ϊ0    ������Ϊ1
//��λȡ�� ��~��  //010 //��λȡ����   101
// һ���Ⱥ��Ǹ�ֵ  �����Ⱥ����ж�
//���ϸ�ֵ�� +=     -=   &=   |=   ^=
//��Ŀ������ 
//˫Ŀ������
////��Ŀ������
//int main()
//{
//	int a = 000;
//	printf("%d\n", a);
//	printf("%d\n", !a);//     !��������� �������ɼ٣��Ѽٱ���档
//	return 0;
//}
//////sizeof������Ǳ��������ߵ����ſ���ʡ�ԣ�����������ռ�Ŀռ��С��
//int main()
//{
//	int arr[10] = {0 }; //����Ĵ�Сֻ��[n]�е�n��ֵ�йأ��ͱ���޹ء�
//	printf("%d", sizeof (arr));
//	//���������Ԫ�ظ���
//	//������ܴ�С/ÿ��Ԫ�صĴ�С
//	// sz= sizeof��arr��/sizeof��arr[0]��;
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
//	printf("�����ѧ\n");
//	int line = 0;
//	while (line<=1000)
//	{
//		printf("��֣��ú�ѧϰ\n");
//		line++;
//	}
//	if (line>=1000);
//	printf("�ɹ�\n");
//	return 0;
////}
//////ԭ�����λ�������Ƶ����λ�����䣬����λ��λȡ���õ����룬�����һ�õ����롣�����Ƕ����ƣ�
//����λ�����λ����  ��Ϊ1��Ϊ����    Ϊ0��Ϊ����
//1111111111111111111111111+1   
////10000000000000000000000000
////2^32-1
//int main()
//{
//	int a = 0;//int4���ֽڣ�32������λ00000000000000000000000000000000�ǲ��룬��ӡ����ԭ�룬������Ҫת��
//	int b = ~a;//                     11111111111111111111111111111111��~a�Ĳ���  Ϊ���� 
//	printf("%d\n", b);             // 11111111111111111111111111111110��~a�ķ��� 
//	//                                10000000000000000000000000000001��~a��ԭ��  �ɶ����ƿ��������Ǹ�һ
//	return 0;
//}
////int main()
////{
////	int a = 10;
////	//int b = a++;//����++����ʹ�ã���++����1��  --һ��  
//	int b = ++a;//��++����1������ʹ��  --һ��
//	printf("a=%d b=%d\n", a, b);
//
//	return 0;
//}
//��ϵ������ 
//   >= ���ڵ���       !=�жϲ�����   ==�жϵ���
//�߼�������  &&�߼���   ||�߼���   0��ʾ��   ��0 ��ʾ��     int a=1  int b=2  int c=a&&b  ��ӡ��cΪ1  ֻҪa��b��һ��Ϊ����ô�������Ǽ�0
//            // ||ֻҪab��һ��Ϊ���ǽ��������1
////����������   exp1?exp2:exp3;   ����exp1Ϊ�� ��ִ��2  ��Ϊ�� ��ִ��3
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
//	arr[4];//[]Ϊ�±����ò�����
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
//���ùؼ���    auto�Զ�
//int main()
//{
//	int a = 10;//�ֲ�����/�Զ�����  auto��ʡ��
//	return 0;
//}
////break     case   const    continue    defaultĬ��     do   double   else    enum  extern   goto  register    signed������int��  unsigned���޷���������Զ���������� struct���ṹ��ؼ��֣�  typedef�������ض��壩   union�������壩  volatile   while   switch    void(��)
////�����  �洢����                                                                                                                                                                     typedef unsigned int  u int//���Ǽ���unsigned int ʹ���� u int��Ч��һ��
////Ӳ��    �ڴ�     ���ٻ���  �Ĵ���  �����ٶ�Խ��Խ��
////CPU-���봦����
////int main()
////{
////	register  int a = 10;//�����ǽ��齫a����Ĵ����С�
////	return 0;
////}
//void test()     
//{
//	int a = 1; ����       static int a=1;//a��Ϊ��̬�ֲ�������a++��������  static���ξֲ��������ֲ��������������ڱ䳤����������
//	a++;
//	printf("a=%d\n", a); ����    ����static������
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
////static����ȫ�ֱ���
//int main()
////{
////
////	   //extern�����������ⲿ���ŵ�
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
//#define���峣���ͺ�
//#define MAX 100//����ı�ʶ������
//#define���Զ����-������
//����ӷ� 
//int max=Max��a��b��//����
//��ķ�ʽ  max=MAX��a��b��
//������
//Max ��int a��int b��
//{
////if��x>y��
//return x;
//else
//return y;
//}
//�꣺
//#define MAX��x��y����x>y?x:y��
//ָ��
//��β�����ַ 
//32λ   32����ַ��/������    ����͸���               2^32�η������������У�����2^32����ַ
//64λ          00000000000000000000000000000000
//      32λ    00000000000000000000000000000001
//              ....
//              11111111111111111111111111111111
////�ڴ����ֽ�Ϊ��λ
//int main()
////{
////	int a = 10;
////	int* p = &a;//a�����p���棬*�ǽ����ò�����    *p=20�����ǽ�p�е����ݣ�Ҳ����a���ĳ�20
////	printf("%p\n", p);//&ȡ��ַ��������֪��a���ڴ��д�ŵ�λ�� 
////	//��һ�ֱ�����������ŵ�ַ�� ����Ϊָ�����������p��
////	return 0;
////}
//int main()
//{
//	double a = 1.33;
//	double* pp = &a;
//	printf("%lf",* pp);
//printf("%d\n",sizeof(pp))    ֻҪ��ָ��������С����4��32λƽ̨����8��64λƽ̨��
//
//return 0
//
//}
////�ṹ��   �������Ӷ���  ���Լ��������������
//////struct �ṹ��ؼ���
//struct book
//{
//	char name[15];//C���Գ������
//	short price;//200
////};
//int main()
//{
//	//���ýṹ�����ʹ���һ�������͵Ľṹ�����
//	struct book b1 = { "C���Գ������",200 };
//	printf("������%s\n", b1.name);
//	printf("�۸�:%d\n", b1.price);
//	return 0;
//}
//    .   �ṹ�����.��Ա
//      ->    �ṹ��ָ��->��Ա   */
//struct Basketballshoes
//{
//	char name[20];
//	int price;
//};
//int main()
//{
//	struct Basketballshoes b1={ "ŷ��5��\n", 1300 };
//	printf("����Ь��%s", b1.name);
//	printf("�۸�%d", b1.price);
//	return 0;
//
//}
//��䣺��һ���ֺŸ����ľ��Ӿ���һ�����
//  ֻ��һ���ֺŵ�Ҳ����䣬�����
//��֧���(ѡ��ṹ)
//if  else
//�﷨�ṹ
//  if�����ʽ��
          //���


//  ����


//  if�����ʽ��
          //���1��
    //else
     //���2



//����
// if�����ʽ1��
//  //���1
////else if�����ʽ2��
//// ���2��
////else 
//// ���3��
//int main()
//{
//	int age = 10;
//	if (age < 18)
//		printf("δ����\n");
//	else
////		printf("����\n");
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
//	switch (a);//switch����ı�������������  charҲ����
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
////ѭ�����
//whileѭ��   break   continue
//getchar    putchar=printf("%C\n, )
//int main()
//{
//	int ch= 0;      //���뻺����   getchar���Ի�ȡ�����������һ���ַ�
//
//	while (( ch= getchar()) != EOF)//
//	{
//		putchar(ch);
//	}
//	return 0;
//}'
////for ѭ��  ��ȫ��ģ���ȫ����ֻ����
////for����ʼ��������ѭ���жϣ�����������
////  ѭ����䣻
//int main()
//{
//	int a = 0;
//	for (a = 1; a <= 10; a++)
//	{
//		printf("%d\n", a);
//	}
//	return 0;
//}  
//for(;;)  ��ѭ��
//forѭ���ĳ�ʼ�����жϺ͵����������ж�
//���ǣ��жϲ��ֱ�ʡ����ô���жϺ�Ϊ��
////do...whileѭ�� ����ѭ��һ��
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
//int main()//��n�����Ľ׳ˡ�
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
////�۰�����㷨�����ֲ����㷨
//int main()
//{
//	int a = 1225;
//	printf("%d",a%=10); . 
////	return 0;
////}
//int main()
//{
//	int a = 0;
//	printf("��ʼ��Ϸ\n");
//	printf("��ѡ���Ѷ�(0Ϊ�򵥣�1Ϊ����)\n");
//	scanf("%d", &a);
//	switch (a)
//	{
//	case 0:
//		printf("�����\n");
//		break;
//	case 1:
//		printf("����\n");
//		break;
//	}
//	return 0;
////}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 5;//�ҵ�Ԫ����7, 7���±���k
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���,Ҳ����֪�������±���sz-1
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
//			printf("�ҵ��ˣ��±���%d\n", mid);
//			break;
//		}
//	}
//	if (left>right)
//	{
//		printf("�Ҳ���\n");
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
//	system("cls");//ִ��ϵͳ����ĺ���  cls�������Ļ
//		printf("%s\n", arr1);
//		Sleep(1000);//1000������Ҳ����1s
//		
//		left++;
//		right--; 
//		left1++;
//		right1--;
//	}
//	return 0;
//}
//}
////Sleep��������Ϣ�����Ժ���Ϊ��λ
//int main()
//{
//	int a =0;
//	int b = 1;
//	char password[20] = {0};
//	for (a = 0, b = 2; a < 3; a++, b--)
//	{
//		printf("����������:");
//		scanf("%s", password);
//	if(strcmp(password,"12345")==0)//==���������ж������ַ����Ƿ���ȣ�Ӧ����strcmp��passworld����123456����==0
//		{
//			printf("��½�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//			printf("���û���: %d\n", b);
//		}
//	}
//		if (a == 3)
//		{
//			printf("��½ʧ�ܣ��˺Ŷ���15����\n");
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
//int main()//��ӡ����
//{
//	int a = 0;
//	int b = 2;
//	int count = 0;
//	for (a = 1; a < 101; a++)//��2�����ż����������������
//	{
//		for (b = 2; b <= sqrt (a); b++)//sqrt()��˼�ǿ�ƽ��
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
//int main()//���ֲ���
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
//int main()//��ӡ�˷��ھ�
//{
//	int a = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		int b = 1;//a�����У�b������
//		for (b = 1; b <= a; b++)
//		{
//			printf("%d*%d=%-2d ", a, b, a*b);//��ӡ��һ��
//		}
//		printf("\n");//����
//	}
//	return 0;
//}
//��������Ϸ

//void menu()//�˵�  void��ʾ����return
//{
//	printf("************************\n");
//	printf("***1:play  0:exit ***** \n");
//	printf("************************\n");
//}
//void game()
//{
//	//srand((unsigned int)time(NULL));//��Ҫһ���仯������  ʱ�������ǰ�������ʱ���ȥ���������ʼʱ��1970.1.1.0����ʱ�̶��ڱ仯��
//	int a= rand()%100+1;//rand():���������  0-32767֮��
//	//printf("%d\n", a);
//	int b = 0;
//	
//	while (1)
//	{
//		printf("�������");
//		scanf("%d", &b);
//		if (b>a)
//			printf("�´���\n");
//		else if (b<a)
//			printf("��С��\n");
//		else
//		{
//			printf("������ľ�Ȼ�¶���\n");
//			break;
//		}
//	}
//}
//
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//��Ҫһ���仯������  ʱ�������ǰ�������ʱ���ȥ���������ʼʱ��1970.1.1.0����ʱ�̶��ڱ仯��
//	do
//	{
//		menu();
//		printf("��ѡ��:");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ�����\n");
//		}
//	} while (input);
//	return 0;
//}
//goto���ȥ�����ص�������
////�ػ�����
//int main()
//{
//
//	char arr[20] = {0};
//	//shutdown-s-t 60 ����60s��ػ�      shutdown-a ȡ���ػ�    cmd-������
//	system("shutdown -s -t 60");
//again:
//	printf("���������60s��ע��������ȡ�������룺��������ɵ��\n");
//	scanf("%s", arr);
//	if ((strcmp(arr, "��������ɵ��")) == 0)
//	{
//		printf("ȡ���ɹ�\n");
//		system("shutdown -a");
//		
//	}
//	else
//	{
//		printf("ȡ��ʧ��\n");
//		goto again;
//	}
//	return 0;
//
//}
//����:�⺯��
//int main()
//{
//    char arr[] = { "aaa" };
//	char arr1[] = { "bbbbb" };
//	strcpy(arr1,arr);//strcpy-�ַ�������  ����\0   ǰ��ſ������ĵط�����߷ű������ġ�ǰ���ԭ���ݱ����ǡ���Ϊ\0���ַ����Ľ�����־
//	printf("%s\n", arr1);
//
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello nnn";
//	memset(arr, '#', 2);//��һ�������Ǹı�ĵ�ַ���ڶ����Ǹı��ʲô���������Ǹı伸���ֽ� 
//	printf("%s\n", arr);
//	return 0;
//}
//�Զ��庯�� 
//void swap(int *pa, int *pb)//��������
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
//��ʵ�δ����в�ʱ  �β���ʵ��ʵ�ε�һ����ʱ�������ı��ββ���ı�ʵ�Ρ�
//��ֵ���� ��ʵ�κ��β�û��ϵ
//��ַ���ã��ı��βξ��Ǹı�ʵ��   ���Ҫ�ı�ʵ����ô���봫ַ
//void rec(int x)//������Ҫ�ٺ������ִ�ӡ�������Ǵ���ʾ��
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
//		printf("������\n");
//	else
//		printf("��������\n");
//}
//int main()
//{
//	int a = 0;
//	scanf("%d",&a);
//	rec(a);//רҵ������ is_prime
//	return 0;
//} 
//�ж����꣺�ܱ�4�����Ҳ��ܱ�100����     2���ܱ�400����
//is_leap_year
//int binary_search(int arr[]   , int k,int a)//�����arr��ʵ��һ��ָ�룬ָ��Ҫô4���ֽ�Ҫô8���ֽ�
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
//	 int ret= binary_search(arr, k, a);//���ݵ�arr��ʵֻ������arr��һ��Ԫ�صĵ�ַ
//	 if (ret == -1)
//		 printf("�Ҳ���");
//	 else
//		 printf("�ҵ��ˣ��±���=%d", ret);
//	return 0;
//}
//����Ƕ�׺���ʽ����
//Ƕ�ף������׺���
//��ʽ����һ�������ķ���ֵ��Ϊ��һ�������Ĳ���
//////int main()
//////{
//////	printf("%d", printf("%d", printf("%d", 43)));//printf�����ķ���ֵ��Ҫ��ӡ���ַ�����
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
//�����ݹ�:������������̼���
//int main()//��򵥵ĵݹ�
//{
//	printf("�Ǻ�\n");
//	main();
//	return 0;
//}
//ջ�����ֲ�����  �����β�                ����                         ��̬�� ��ȫ�ֱ���    static���εı���
//ջ���:ÿһ�ε��ú���������ջ������ռ䣬ֱ��û�пռ������
//void print(int b)
//{
//	if (b > 9)
//	{
//		print(b / 10);
//	}//���һ�ε�����ص�����
//	printf("%d ", b % 10);
//}
//int main()//��һ������ÿһλ���Դ�ӡ
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
//��ά���� int arr[��][��]
//������Ϊ��������
//ð������bubble_sort() һ��ð���������һ��Ԫ�ص�������λ�ã���n��Ԫ�ص�������Ҫn��1��ð����vop
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
////������
//void menu()//��ӡ�˵�
//{
//	printf("**********************\n");
//	printf("****1.play  2.exit****\n");
//	printf("**********************\n");
//}
//void intl(char board[3][3], int ROW, int LINE)//��ʼ������
//{
//	int b = 0;
//	int c = 0;
//	for (c = 0; c < 3; c++)
//	{
//		for (b = 0; b < 3; b++)
//		{
//			board[b][c] = ' ';//�������ÿһ��Ԫ�ض��ǿո�
//		}
//	}
//}
//void set(char arr[3][3], int row, int line)//��ӡ����
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
//		printf("�������������:");
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
//				printf("�Ƿ�����");
//			}
//		}
//		else
//		{
//			printf("�������,����������\n");
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
//			if (arr[n][x] == ' ')//����û��
//			{
//				return 3;
//			}
//		}
//	}
//	return 2;//���� 
//}
//int judge(char arr[3][3], int row, int line)//1Ϊ���   0Ϊ����   3��ʾ����
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
//void game()//������Ϸ
//{
//	int w = 1;
//	char board[3][3] = { 0 };
//	intl (board, 3, 3);
//	set(board, 3, 3);//��������  
//	while (1)
//	{
//		playermove(board, 3, 3);//�������
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
//		printf("��һ�ʤ\n");
//	}
//	else if (w == 0)
//	{
//
//
//		printf("���Ի�ʤ\n");
//	}
//	else if (w == 2)
//	{
//		printf("ƽ��\n");
//	}
//void  test()
//{
//	int a = 0;
//	do
//	{
//		
//		menu();
//		printf("��ѡ��;");
//		scanf("%d", &a);
//		if (a == 1)
//		{
//			game();
//		}
//		else if (a == 2)
//		{
//			printf("�˳���Ϸ\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����,������ѡ��\n");
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
//	printf("һ����ţ��%d", c);
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
//	printf("������С��6λ������");
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
//      &&     ֻҪ��߳��ּٵ���ô�ұߵĶ���������    || ֻҪ��߳�������ô��߾Ͳ�����
//struct stu//�����ṹ������
//{//����дҪ˵�Ķ������������
//	char name[20];
//	int price;
//};
//
//int main()
//{
//	struct stu s1 = { "ŷ���Ĵ�", 1500 };
//	struct stu* p = &s1;//�ṹ��ָ��
//	printf("%s\n", p->name);//ָ��->����
//	return 0;
//}
//������Դ��ͷ�����ͬ
//ָ����ǵ�ַ���κ�һ��ֵֻҪ��ŵ�ָ���оͰ���ַ���㣬ָ��Ĵ�С����4��32x�����ֽھ���8��64x�����ֽ�
//����16������8��������λҲ����һ���ֽ�
//ָ�����;�����ָ�������ʱ�ܷ��ʵ��ֽڴ�С  ���� int*���Է���4���ֽ�   char*ֻ�ܷ���1���ֽ�
//ָ��Ӽ�����  ָ�����;�����ָ����һ����Զ��ָ��Ĳ�������λΪ�ֽ�   ���� int* p + 1��ʵ�Ǽ�4    char* p + 1�Ǽ�1
//Ұָ�룺��֪��ָ������ģ�ָ��������ģ�ָ��δ��ʼ���ᵼ��Ұָ��ĳ���   ָ������������ֱ��Խ��Ҳ�ᵼ��Ұָ��   ָ��ָ��Ŀռ䱻�ͷ���Ҳ�ᵼ��Ұָ��



//int main()    //ĸţ�Ĺ���
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
//		printf("�������\n");
//	}
//
//	return 0;
//}*/main()
//{
//	int score = 0;
//	printf("������ɼ�\n");
//	scanf("%d", &score);
//	if (score >= 90&&score<100)
//	{
//		printf("A\n");
//	}
//	else if (score >= 80 && score < 90)
//
//int main()//����λ����λ��ӡ���֣�һ���Ǵ������飬�����ֵ�ÿһλ����ŵ������У�Ȼ���ӡ
//{
//	int num = 0;
//	int a, b, k, d ,f;
//	int e = 1;
//	int count = 1;
//	printf("������һ����������λ����<<");
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
//sizeof����ֵ���޷�����������λ��������У����������͵��������Ƚ϶����Ȼ����޷�����
//int main()
//{
//	int*p;//�ֲ���������ʼ����ָ������ŵ���һ�����ֵ
//	*p = 20;
//
//	return 0;
//}

//
//int  count_bit_one(unsigned int a)//���������1�ĸ��������룩  //�����ֽ���   %2     /2  ������ö����Ʋ����ÿһλ 
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
//int  count_bit_one(int a)//���������1�ĸ��������룩  ������������1���Ϳ������
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
//int  count_bit_one(int a)//1100  &  1011  =1000  ȥ����һ��1��
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
//��2�����ֵĶ��������ж��ٸ�λ����ͬ��ʹ�������ͬΪ0����ͬΪ1��Ȼ��ͳ�ƶ�������һ�ĸ���
//һ���������йص���Ŀ��Ҫ�漰����λ�������������һ����1��1��
//�ݹ�   

//                          |   |   
//                       ---|---|---
//                          |   |
//                       ---|---|---
//                          |   |
//
//void menu()
//{
//	printf("###############################################################\n");
//	printf("#######################    1��Play    2��Exit     #############\n"); 
//	printf("###############################################################\n");
//}
//
//void init(char board[3][3],int line,int row)//ʹ�����к��е�Ԫ��ȫ��Ϊ�ո�
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
//	printf("������һ��С����λ������\n");
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
//int judge(int a)//ˮ�ɻ���
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
//struct stu//�ṹ������ͣ��ڻ�û�д���������ʱ��û��ռ�ڴ� 
//{
//   char name [20];
//   int age;
//}s1;              s1��ȫ�ֱ���
//int main()
//{
     //struct std s��  
//}
//�����Ԫ�ر�������ͬ���͵ı���
//ʵ�δ�ֵ���ββ�����Ҫʱ�仹��Ҫ����һ����ͬ�Ŀռ䣬����ַ����Ҫ�������ڽṹ�崫�ε�ʱ����ô�ַ���á�