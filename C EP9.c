#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	double num1, num2, box;
	printf("ù��° ���� �Է��ϼ��� : ");
	scanf("%lf", &num1);
	printf("�ι�° ���� �Է��ϼ��� : ");
	scanf("%lf", &num2);
/*
	box = num1;
	num1 = num2;
	num2 = box;

	printf("�ٲ� �� ù��°�� :%.2lf\n", num1);
	printf("�ٲ� �� �ι����� : %.2lf\n", num2);
	*/
	num1 = num1 - num2;   
	num2= num1 + num2;  
	num1 = num2 - num1;
	printf("�ٲ��� ù��°�� = %.2lf\n", num1);
	printf("�ٲ��� �ι�°�� = %.2lf", num2);
	
	return 0;
}