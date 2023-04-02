/*
|  + 더하기  |  - 빼기  |  * 곱하기  |  /나누기  |   % 나머지  |

 a=b (b의 값을 a에 넣어라(o) ,a는 b이다(x)
 a+=b (새로운a는 원래a에 b를 더한값이다) { /=, -=, *=, %= 도 동일 }

 a==b (a는b이다)
 a>b(a는 b보다크다)
 a!=b (a와 b는 같지않다)
 a>=b (a는 b보다 크거나 같다)
 일치할때는 true이면 1로 표시 false이면 0으로 표시됨

 &&=모든 식이 true일때만 true(1)라고 표시됨 , &&은 식가운데 사용 ex) (a==b) && (a>b)
 ||
 ! 식이 false면 true로 표시됨 true면 false로, !는 ()앞에 사용 !()
  */
#include<stdio.h>
#pragma()
int main()
{
	int a = 5,c;
	c = a;
		printf("%d\n", c);
	c += a;
	printf("%d\n", c);
	c /= a;
	printf("%d\n", c);

	int q = 8, w = 5, e = 6;
	printf("%d == %d is %d\n", q, w, q == w);
	int nob = q != e;
	printf("%d != %d is %d\n", q, e, nob);
	
	int result = (q = w) || (w < e) ||(q>e);
	printf("(q=w)||(w<e)||(q>e)is %d\n", result);
	// 질문 : ||는 값 1개 이상만 맞으면 true로 뜨는건가요?

	int re = !(q != w);
	printf("!(q!=w)is %d\n",re); 

	int y;
	float x;
	double z;
	printf("size of int=%lu bytes\n", sizeof(y));
	printf("size of float=%lu bytes\n", sizeof(x));
	printf("size of double=%lu bytes\n", sizeof(z));
	//질문 int,float,double이면 각각 %d,%f,%lf를 사용해야하는데 %lu를 사용하는 이유는 먼가요 sizeof여서 그런건가요?
	return 0;

}
