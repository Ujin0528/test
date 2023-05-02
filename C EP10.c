#include<stdio.h>
#pragma warning(disable:4996)

int main() {
	//3항 연산자를 이용한 짝수 홀수 판단프로그램
	/*int num;
	do {
		printf("짝수 홀수 판단 프로그램\n");
		printf("숫자를 입력하세요('0'프로그램 종료) : ");
		scanf("%d", &num);
		if (num==0)
			break;
		(num % 2 == 0 ? printf("짝수입니다.\n") : printf("홀수입니다.\n"));

	} while (1);
	printf("프로그램을 종료합니다."); */
	 
	//if else를 사용한 짝수 홀수 판단프로그램
	int num;
		printf("숫자를 입력하세요 : ");
		scanf("%d", &num);
		if (num % 2 == 0) {
			printf("짝수입니다.\n");
		}
		else {
			printf("홀수입니다.\n");
		}
		return 0;
}