#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int num1;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num1);
	if (num1 % 2 == 0) {
		printf("짝수입니다.");
	}
	else
		printf("홀수입니다.\n");
		
	int num2;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num2);
	
	(num2 % 2 == 0) ? printf("짝수입니다.") : printf("홀수입니다."); //a?b:c : a가 맞다면b, 아니면 c를 실행
		return 0;
}