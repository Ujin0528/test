#include<stdio.h>
#pragma warning(disable:4996)

int main(){
	/*
	int i, n;                                
	printf("���Ͻô� ���� �Է��ϼ���");         
	scanf("%d",&n);                    //n=����ڰ� �Է��� ��

	for (i = 1; i <= 10; i++) {           //i�� 10���� Ŀ���� ���� �ݺ�
		printf("%d * %d = %d\n",n,i,n*i);  // n(��)�� ���� i�� 1�� Ŀ��
	}
	*/
	int i, n, range;
	printf("���Ͻô� ���� �Է��ϼ���");
	scanf("%d", &i);

	do {
		printf("������ �Է����ּ���");
		scanf("%d", &range);
	} while (range <= 0);            //q������ �����Ǵ� 0�ϰ�� �����Է� �޴°��� �ݺ�

	for (n = 1; n <= range; n++)         //{i�� * 1} ���� {i�� * range} ���� �ݺ� 1~range
		printf("%d * %d = %d\n", i, n, i * n);

	return 0;
}