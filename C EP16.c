#include<stdio.h>
#pragma warning(disable:4996)
int main() {
	/*
	 char mm;
	 printf("���ڸ� �Է��ϼ���\n");
	 scanf("%c",&mm);
		 if ((mm >= 'a' && mm <= 'z') || (mm >= 'A' && mm <= 'Z'))
		 {
			 printf("%c�� ���ĺ��Դϴ�.\n", mm);
			 if (mm >= 'a' && mm <= 'z')
				 printf("%c�� �ҹ����Դϴ�.\n", mm);
			 else if (mm>='A'&&mm<='Z')
				 printf("%c�� �빮���Դϴ�.\n", mm);
		 }
		 else
			 printf("%c�� ���ĺ��� �ƴմϴ�.\n",mm);
	*/
	char mn;
		printf("���ڸ� �Է��ϼ���");
		scanf("%c", &mn);
		if (isalpha(mn))
			printf("%c�� ���ĺ��Դϴ�.", mn);
		else
			printf("%c�� ���ĺ��̾ƴմϴ�.", mn);
	return 0;
}