#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int g_val = 2021;
//int main()
//{
//	printf("1:%d\n", g_val);
//	printf("hele\n");
//	
//	printf("2:%d\n", g_val);
//	return 0;
//}
// 
// 
//extern int g_val;

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//	const int num = 10;
//	num = 20;
//	printf("%d\n", num);
//	return 0;
//}
//#define max 1000
//int main()
//{
//int n = max;
//printf("n = %d\n", n);
//return 0;
//}
//
//#include<string.h>
//int main()
//{
//	//char arr[] = "hello";
//	char arr1[]="abc";
//	char arr2[] = { 'a','b','c' };
//	printf("%s\n",arr1);
//	printf("%s\n",arr2);
//	int len = strlen("abc");
//	printf("%d\n", len);
//	return 0;

//
//#include <stdio.h>
//int main()
//{
//	printf("%s");
//	return 0;
//}
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("�������");
//	printf("��Ҫ�ú�ѧϰ��1/0������");
//	scanf("%d",&input);
//	if (input == 1)
//	{ 
//		printf("��offer\n");
//	}
//	else
//	{
//		printf("������\n");
//
//	}
//	return 0;
//
//}
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("д���룺%d\n",line);          
//		line++;
//	}
//	if (line == 30000)
//	{
//		printf("��offer\n");
//	}
//	return 0;
//}
//int main()
//{
//	int num1;
//	int num2;
//	scanf("%d%d", &num1, &num2);
//	int sum = num1 + num2;
//	printf("%d\n", sum);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
// }
//int main()
//{
//	int num1;
//	int num2; 
//	scanf("%d%d", &num1, &num2);
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int arr [10] = { 1,2,3,4,5,6,7,8,9,10 };
//	/*char ch[5] = { 'a','b','c' };*/
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d", arr[i]);
//		i++;
//	}
//	return 0;
//
//}
//int main()
//{
//	/*int a = 9 / 2;*/
//	float a = 9 / 2;
//	printf("%f\n",a);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = a << 1;
//	printf("%d\n",b);
//	return 0;
//} 
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = a++;
//	printf("%d\n", b);
//	printf("%d\n", a);
//	return 0;

//}
//#include<stdio.h>
//; int main()
//{
//	int a = (int)3.14;   //ǿ��ת��
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//
//	//if (a > b)
//	//max = a;
//
//	//else
//	//	max = b;
//	max = a>b ? a : b;
//	printf("%d\n", max);
//	return 0;
//}
//int main()
//{
//	unsigned int num = 100;
//
//	printf("%d\n");
//return 0;
//}
//#include <stdio.h>

//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}


#include<stdio.h>
//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}


//extern int Add(int x, int y);
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sunm=%d\n", sum);
//	return 0;
//}

//#define MAX 1000          //Ԥ����ָ��
//int main()
//{
//	printf("%d\n", MAX);
//	return 0;
//}

//define   �����
//#define ADD(X,Y) (X+Y)
//int main()
//{
//	printf("%d\n",4*ADD(2, 3));
//
//	return 0;
//}
// ָ��
//int main()
//{
//	int a = 10;
//	printf("%p\n", &a);
//	int* pa = &a;                   //pa�Ǵ�ŵ�ַ�ģ���C���������ָ��
//	return 0;                          //��ʽ int*pa  
//
//}
//int main()
//{
//	int a = 10;
//	int* pa = &a;            //*�����ò�����/*pa����ͨ��pa��ĵ�ַ�ҵ�a
//	*pa = 20;
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int main()
//	{
//		int a = 10;
//		int* pa = &a;            //*�����ò�����/*pa����ͨ��pa��ĵ�ַ�ҵ�a
//		*pa + 20;
//		printf("%d\n", a);
//		return 0;
//	}
//int main()
//{
//	printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(short*));
//	printf("%d\n", sizeof(int*));
//	printf("%d\n", sizeof(long*));
//	printf("%d\n", sizeof(long long*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(float*));
//	return 0;
//}
#include<stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//	
//};
//int main()
//{
//	struct Stu s = { "����",20,85.5 };
//	printf("%s %d %lf\n", s.name, s.age, s.score);
//	return 0;
//
//}
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//struct Book
//{
//	char name[20];
//	float price;
//	char id[30];
//
//};
//int main()
//{
//	struct Stu s = { "����",20,85.5 };
//	
//	printf("1:%s %d %lf\n", s.name, s.age, s.score);
//	struct Stu* ps = &s;
//	printf("2:%s %d %lf\n", (*ps).name,(*ps).age,(*ps).score);
//	printf("3:%s %d %lf\n", ps->name,ps->age,ps->score);
//	return 0;
//
//}
//if ���
//int main()
//{
//	int age = 15;
//	if (age >= 18)
//		printf("����\n");
//	else
//	{
//		printf("δ����\n");
//		printf("����̸����\n");
//	}
//	return 0;
//}
//int main()
//{
//	int age = 60;
//	if (age < 18)
//        printf("����\n");
//	else if ( age>=18 && age<26)
//	    printf("����\n");
//	else if(age>=26 && age<40)
//		printf("����\n");
//	else if (age >= 40 && age < 60)
//		printf("����\n");
//	else if (age >= 60 && age < 80)
//		printf("�ϲ���\n");
//
//	return 0;
//}
//int main()
//{
//	int num = 3;
//	if (num == 5)
//		printf("hehe\n");
//	else
//		printf("hello\n");
//
//	return 0;

//}
//int main()
//{
//	int num = 3;
//	if (5=num)
//		printf("hehe\n");
//	else
//		printf("hello\n");
//
//	return 0;
//
//}
//int main()
//{
//	int num = 15;
//	if (num % 2 == 1)
//		printf("����\n");
//	else
//		printf("ż��\n");
//	return 0;
//
//}
// 100���ڵ�����
//int main()
//{
//	int i = 0;
//	for(i=1;i<100;i++)
//	{
//	 if (i % 2 == 1)
//	
//			printf("%d\n", i);
//
//		
//	}
//	return 0;
//
//}
//int main()
//{
//	for(int i = 1; i <= 100; i+=2)
//	
//		printf("%d ", i);
//	return 0;
//}
//int main()
//{
//	for (int i = 1; i <= 100; i += 2)
//
//		printf("%d ", i);
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		printf("����1 \n");
//		break;
//	case 2:
//		printf("����2 \n");
//		break;
//	case 3:
//		printf("����3 \n");
//		break;
//	}
//	return 0;
//
//}
//int main()
//{
//	int day = 0;     
//	scanf("%d", &day);              //��0��ʼ�Լ�����
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������ \n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ�� \n");
//		break;
//	}
//	
//	return 0;
//}
//int main()
//{
//	int day = 5;   //�̶���ֵ
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������ \n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ�� \n");
//		break;
//	}
//
//	return 0;
//}
// 
//int main()
//{
//int day = 0;
//scanf("%d", &day);
//switch (day)
//{
//case 1:
//case 2:
//case 3:
//case 4:
//case 5:
//	printf("������ \n");
//	break;
//case 6:
//case 7:
//	printf("��Ϣ�� \n");
//	break;
//default:                //������
//	printf("�������\n");
//}
//
//return 0;
//}

//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:
//			n++;
//		case 2:m++; n++;
//			break;
//		}
//	case 4:
//		m++;
//		break;
//	defalut:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//	return 0;
//}
// ѭ�����
//int main()      
//{
//	int i = 1;
//	while (i <=10)
//	{
//		printf(" %d",i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			break;
//		printf(" %d", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;
//		printf(" %d", i);
//		
//	}
//	i++;
//	return 0;
//}
//int main()
//{
//	int ch = getchar();
//	//printf("%c\n", ch);
//	putchar(ch);
//	return 0;
//
//}