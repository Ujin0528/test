#include<stdio.h>
#include <ctype.h>
#pragma warning(disable:4996)

int main(){
	char AB;
	int so, dae;
	printf("���ĺ��� �Է��ϼ��� : ");
	scanf("%c", &AB);
	so = (AB == 'a' || AB == 'e' || AB == 'i' || AB == 'o' || AB == 'u');
	dae = (AB == 'A' || AB == 'E' || AB == 'I' || AB == 'O' || AB == 'U');

	if (!isalpha(AB))
		printf("���ĺ��� �ƴմϴ�.");
	else if (so || dae) {
		printf("%c�� �����Դϴ�.",AB);
	}
	else {
		printf("%c�� �����Դϴ�.",AB);
	}
	return 0;
}