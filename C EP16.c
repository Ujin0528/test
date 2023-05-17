#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	/*
	 char mm;
	 printf("문자를 입력하세요\n");
	 scanf("%c",&mm);
		 if ((mm >= 'a' && mm <= 'z') || (mm >= 'A' && mm <= 'Z'))
		 {
			 printf("%c는 알파벳입니다.\n", mm);
			 if (mm >= 'a' && mm <= 'z')
				 printf("%c는 소문자입니다.\n", mm);
			 else if (mm>='A'&&mm<='Z')
				 printf("%c는 대문자입니다.\n", mm);
		 }
		 else
			 printf("%c는 알파벳이 아닙니다.\n",mm);
	*/
	char mn;
		printf("문자를 입력하세요");
		scanf("%c", &mn);
		if (isalpha(mn))
			printf("%c는 알파벳입니다.", mn);
		else
			printf("%c는 알파벳이아닙니다.", mn);
	return 0;
}