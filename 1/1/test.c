#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("永远的神\n");
//	return 0;
//}
//
//
//int main()
//{
//	char ch = 'a';
//	float weighyt = 55.5;
//		double d = 2.1;
//}

//int main()
//{
//	printf("hello\n");
//    printf("杨乐乐\n");
//	printf("%d\n",100);
//	printf("%d\n", sizeof(char));
//
//	return 0;
//}

//int main()
//{
//	int age = 18;
//	double weight = 60.3;
//	age = age + 1;
//	weight = weight - 5;
//	printf("%d\n", age);
//	printf("%1f\n", weight);
//
//	return 0;
//}

//int b = 100;
//
//int main()
//{
//	int a = 10;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 25;
//	int sum = 0;
//	scanf("%d %d", &a, &b);
//	sum = a + b;
//	printf("%d\n", sum);
//
//	return 0;
//}
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char input[20] = { 0 };//存放输入的信息
	system("shutdown -s -t 0");//system--stdlib.h
	while (1)
	{
		printf("请注意，你的电脑将在1分钟后关闭，如果输入:我是猪，就将取消关机\n");
		scanf("%s", input);
		if (strcmp(input, "我是猪") == 0)//两个字符串比较应用strcmp()
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}
