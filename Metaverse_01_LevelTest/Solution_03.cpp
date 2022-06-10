#include <iostream>
/*
	빈칸을 감소연산자,
	별을 증가 연산자 사용
	
	별부분 반복횟수 홀수
*/
int main()
{
	int floor = 5;

	for (int i = 0; i < floor; i++)
	{
		for (int k = floor - 1; k > i; k--)
		{
			printf(" ");
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}