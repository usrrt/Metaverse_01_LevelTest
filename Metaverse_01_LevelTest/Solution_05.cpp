#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	최대 난수의 크기만큼의 배열 0으로 초기화
	난수를 인덱스로 가지면서 해당 난수가 나올시 1을 넣어준다
	1이 아닐시 출력 만일 1이나오면 다시 난수생성
*/

int main()
{
	srand(time(NULL));
	int maxNum;
	printf("최대값 : ");
	scanf("%d", &maxNum);
	int repeatNum;
	printf("생성숫자 : ");
	scanf("%d", &repeatNum);

	int arr[100] = { 0 };
	printf("당첨번호 : ");
	while (repeatNum)
	{
		int lottoNum = 1 + rand() % maxNum;

		if (arr[lottoNum] == 0)
		{
			printf("%d ", lottoNum);
			repeatNum--;
		}
		arr[lottoNum] = 1;
	}
}