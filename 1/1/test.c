#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	printf("��Զ����\n");
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
//    printf("������\n");
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
	char input[20] = { 0 };//����������Ϣ
	system("shutdown -s -t 0");//system--stdlib.h
	while (1)
	{
		printf("��ע�⣬��ĵ��Խ���1���Ӻ�رգ��������:�������ͽ�ȡ���ػ�\n");
		scanf("%s", input);
		if (strcmp(input, "������") == 0)//�����ַ����Ƚ�Ӧ��strcmp()
		{
			system("shutdown -a");
			break;
		}
	}

	return 0;
}
