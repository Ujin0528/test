//�ƽ�Ű�ڵ�ã��
#include<stdio.h>
#pragma warning (disable:4996)

int main()
{
	char code;
	printf("���ڸ� �Է��ϼ���");
	scanf("%c", &code);
	printf("�Է��Ͻ� ���� %c�� �ƽ�Ű�ڵ�� %d�Դϴ�", code,code);
	//printf("�Է��Ͻ� ���� %c�� �ƽ�Ű�ڵ�� %d�Դϴ�", code); 
	// ^ �̷��� ������ ���ѵ� ������ �ǰ� ������ �ĵ� -1�� �������� �ֱ׷��ǰ���?
	

	return 0;
}