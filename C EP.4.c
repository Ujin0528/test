#include<stdio.h>
#pragma warning(disable:4996)
//�� ���ڸ� ���ϴ� ���α׷�
int main()
{
	double num1, num2,product;
	printf("�� ���ڸ� �Է��ϼ��� : ");
	scanf("%lf %lf",&num1, &num2);
	product = num1 * num2;
	printf("�� ���� ���� %.2lf�Դϴ�", product); //%a.b lf ���� a�� ���� �ڸ��� b�� �Ҽ��� b�ڸ��� �� �ǹ� 

	return 0;

}