#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	double num1, num2, box;
	printf("첫번째 수를 입력하세요 : ");
	scanf("%lf", &num1);
	printf("두번째 수를 입력하세요 : ");
	scanf("%lf", &num2);
/*
	box = num1;
	num1 = num2;
	num2 = box;

	printf("바꾼 후 첫번째수 :%.2lf\n", num1);
	printf("바꾼 후 두번수 : %.2lf\n", num2);
	*/
	num1 = num1 - num2;   
	num2= num1 + num2;  
	num1 = num2 - num1;
	printf("바뀐후 첫번째수 = %.2lf\n", num1);
	printf("바뀐후 두번째수 = %.2lf", num2);
	
	return 0;
}
