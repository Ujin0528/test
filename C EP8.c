#include<stdio.h>

int main()
{
	int a;
	long b;
	long long c;
	double d;
	long double e;

	printf("int�� ������ :%zu\n", sizeof(int));
	printf("long�� ������ :%zu\n", sizeof(long));
	printf("long long�� ������ :%zu\n", sizeof(long long));
	printf("double�� ������ :%zu\n", sizeof(double));
	printf("long double�� ������ :%zu\n", sizeof(long double));
	/*https://www.programiz.com/c-programming/examples/keyword-long �� ����Ʈ������ long double�� 16bytes �ε������غ��� 8bytes��
     visual studio�� ����ؼ� �׷��ǰ���?*/
	return 0;
}