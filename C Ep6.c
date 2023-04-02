//6.몫과 나머지 계산하는 프로그램 만들기
#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	int num1, num2, 몫, 나머지;
	printf("몫과 나머지를 계산하는 프로그램\n");
	printf("첫번째 수를 입력해주세요");
	scanf("%d", &num1);
	printf("두번째 수를 입력해주세요");
	scanf("%d", &num2);
	
	몫 = num1 / num2;
	나머지 = num1 % num2;
	 
	printf("몫 =%d",몫);
	printf("나머지 =%d", 나머지);

	return 0;
}