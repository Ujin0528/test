#include<stdio.h>
#include <ctype.h>
#pragma warning(disable:4996)

int main(){
	char AB;
	int so, dae;
	printf("알파벳을 입력하세요 : ");
	scanf("%c", &AB);
	so = (AB == 'a' || AB == 'e' || AB == 'i' || AB == 'o' || AB == 'u');
	dae = (AB == 'A' || AB == 'E' || AB == 'I' || AB == 'O' || AB == 'U');

	if (!isalpha(AB))
		printf("알파벳이 아닙니다.");
	else if (so || dae) {
		printf("%c는 모음입니다.",AB);
	}
	else {
		printf("%c는 자음입니다.",AB);
	}
	return 0;
}