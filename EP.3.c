/*
|  + ���ϱ�  |  - ����  |  * ���ϱ�  |  /������  |   % ������  |

 a=b (b�� ���� a�� �־��(o) ,a�� b�̴�(x)
 a+=b (���ο�a�� ����a�� b�� ���Ѱ��̴�) { /=, -=, *=, %= �� ���� }

 a==b (a��b�̴�)
 a>b(a�� b����ũ��)
 a!=b (a�� b�� �����ʴ�)
 a>=b (a�� b���� ũ�ų� ����)
 ��ġ�Ҷ��� true�̸� 1�� ǥ�� false�̸� 0���� ǥ�õ�

 &&=��� ���� true�϶��� true(1)��� ǥ�õ� , &&�� �İ�� ��� ex) (a==b) && (a>b)
 ||
 ! ���� false�� true�� ǥ�õ� true�� false��, !�� ()�տ� ��� !()
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
	// ���� : ||�� �� 1�� �̻� ������ true�� �ߴ°ǰ���?

	int re = !(q != w);
	printf("!(q!=w)is %d\n",re); 

	int y;
	float x;
	double z;
	printf("size of int=%lu bytes\n", sizeof(y));
	printf("size of float=%lu bytes\n", sizeof(x));
	printf("size of double=%lu bytes\n", sizeof(z));
	//���� int,float,double�̸� ���� %d,%f,%lf�� ����ؾ��ϴµ� %lu�� ����ϴ� ������ �հ��� sizeof���� �׷��ǰ���?
	return 0;

}