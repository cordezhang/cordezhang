#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�Ƚϴ�С
//#include<stdio.h>
//int get_max(int x, int y)
//{
//	int z = 0;
//	if (x > y)
//	{
//		z = x;
//	}
//	else
//	{
//		z = y;
//	}
//	return z;
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	//�����ĵ���
//	printf("%d\n", max);
//	return 0;
//}

//void Swap(int*pa,int*pb)
//{
//	int z = 0;
//	z = *pa;
//	*pa = *pb;
//	*pb = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("����ǰ:a=%d b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("������:a=%d b=%d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("% d\n");
//		}
//	}
//	return 0;
//}
// �ж�����
//һ������Ĭ�Ϸ���int
//int is_leap_year(int x)
//{
//	if ((x % 100 != 0) && (x % 4 == 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int y = 0;
//	for (y = 1000; y <= 2000; y++)
//	{
//		if (is_leap_year(y) == 1)
//		{
//			printf("%d ",y);
//		}
//	}
//	return0;
//}

//2�ֲ���
//int find(int a[],int b[],int s)
//{
//	int left = 0;
//	int right = s - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] > b)
//		{
//			right = mid - 1;
//		}
//		else if (a[mid] < b)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int key = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = find(arr,key,sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���\n");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n",ret);
//	}
//	return 0;
//}
//void add(int* p)
//{
//	(*p)++;//*PΪʲôҪ���ʺ�
//}
//int main()
//{
//	int num = 0;
//	add(&num);
//	printf(" %d\n", num);
//	add(&num);
//	printf(" %d\n", num);
//	return 0;
//}
//Ƕ�׵���
//void test3()
//{
//	printf("hehe\n");
//}
//int test2()
//{
//	test3();
//	return 0;
//}
//int main()
//{
//	test2();
//	return 0;
//}
//
//#include<string.h>
//int main()
//{
//	//int len = strlen("abc");//strlen���ַ�����
//
//	//��ʽ����
//	//printf("%d\n", strlen("abc"));
//	char arr1[20] = { 0 };
//	char arr2[] = "hello";
//	//strcpy(arr1, arr2);
//	printf("%s\n", strcpy(arr1, arr2));//��ʽ����
//	//printf("%s\n", arr1);
//	
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	��Ҫ��������add(�����ں�
//	int add(int, int);
//
//	int c = add(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//�����Ķ���
//int add(int x, int y)
//{
//	return x + y;
//}
//#include"add.h"//�ӷ�
//#include"sub.h"//����
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//int c = add(a, b);
//	int c = sub(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//�����ĵݹ�

//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//}
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
////�ݹ�
//	print(num);
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n",my_strlen(arr) );
//	return 0;
//}
//#include<stdio.h>
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//쳲���������
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}
//1��100�����ж��ٴ�9����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum +=flag* 1.0 / i;
//		flag = -flag;
//	}
//	printf("%5f\n", sum);//��5��1
//	return 0;
//}
//int main()
//{
//	int i = 1;       //i��
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;     //j��
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%d ",i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void test(int* pa, int* pb)
//{
//	*pa = 1;
//	*pb = 2;
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	test(&a, &b);
//	printf("%d %d", a, b);
//	return 0;
//}
// 
//void print(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)//��
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)//��
//		{
//			printf("%d*%d=%d ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}
//void reverse_string(char* str)
//{
//	int left = 0;
//	int right = strlen(str) - 1;//strlen���󳤶�
//	while (left<right)//����Ԫ��
//	{
//		char tmp = str[left];
//		str[left] = str[right];//����Ҳ��ָ��
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//void reverse_string(char* str)
//{
//	char tmp = *str;
//	int len = strlen(str);
//	*str = *(str + len - 1);
//	*(str + len - 1) = '\0';
//	if (strlen(str + 1) >= 2)
//	{
//		reverse_string(str + 1);
//	}
//	*(str + len - 1) = tmp;
//}
//	
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//��1729ÿ������֮��(�ݹ飩
//int digitsum(int x)
//{
//	if (x > 9)
//	{
//		return digitsum(x / 10) + x % 10;
//	}
//	else
//		return x;
//}
//int main()
//{
//	int a = 1729;
//	int sum = digitsum(a);
//	printf("%d\n", sum);
//	return 0;
//}
//n��k�η�
//int shulei(int x, int y)
//{
//	if (y == 0)
//		return 1;
//	else if (y > 0)
//	return x * shulei(x, y - 1);
//	else
//		return 1.0 / (shulei(x, -y));
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = shulei(n, k);
//	printf("%d\n", ret);
//	return 0;
//}
// ����
//int main()
//{
//	char arr[] = 'abcd';//char�������ͣ� arr�������ƣ�[]�������
//	int ch[] = 'abcd';//int�������ͣ� ch�������ƣ�[]�������
//	return 0;
//}
//int main()
//{
	//int a = 0;//��ʼ��
	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };//��ȫ��ʼ��
	//int  arr[10] = { 1,2,3,4,5 };//����ȫ��ʼ��

	//int arr2[] = { 1,2,3,4,5 };//�൱����һ�е�[5]
	//int arr2[5] = { 1,2,3,4,5 };
	//char ch1[] = "bit";//b,i,t,\0
	//char ch2[] = { 'b','i','t' };//Ѱ��\0
	
	//*printf("%s\n",ch1);
	//printf("%s\n",ch*/2);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;    //=��ֵ
//	int i = 0;
//	printf("%d\n",sizeof(arr));
//	printf("%d\n", sizeof(arr[5]));
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	//printf("%d\n", arr[5]);
//	//printf("%d\n", arr[5]);
//	return 0;
//}
//%p��ӡ��ַ
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d]=%p\n", i, &arr[i]);
//	}
//	return 0;
//}
// һά����
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int* p = arr;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		*p++;
//	}
//	return 0;
//}
