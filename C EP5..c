//아스키코드찾기
#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	char code;
	printf("문자를 입력하세요");
	scanf("%c", &code);
	printf("입력하신 문자 %c의 아스키코드는 %d입니다", code,code);
	//printf("입력하신 문자 %c의 아스키코드는 %d입니다", code); 
	// ^ 이렇게 실행을 시켜도 실행이 되고 무엇을 쳐도 -1이 나오던데 왜그런건가요?
	

	return 0;
}