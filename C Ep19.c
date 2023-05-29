#include<stdio.h>
#pragma warning(disable:4996)

int main(){
	/*
	int i, n;                                
	printf("원하시는 단을 입력하세요");         
	scanf("%d",&n);                    //n=사용자가 입력한 값

	for (i = 1; i <= 10; i++) {           //i가 10보다 커질때 까지 반복
		printf("%d * %d = %d\n",n,i,n*i);  // n(단)은 고정 i는 1씩 커짐
	}
	*/
	int i, n, range;
	printf("원하시는 단을 입력하세요");
	scanf("%d", &i);

	do {
		printf("범위를 입력해주세요");
		scanf("%d", &range);
	} while (range <= 0);            //q범위가 음수또는 0일경우 범위입력 받는것을 반복

	for (n = 1; n <= range; n++)         //{i단 * 1} 부터 {i단 * range} 까지 반복 1~range
		printf("%d * %d = %d\n", i, n, i * n);

	return 0;
}