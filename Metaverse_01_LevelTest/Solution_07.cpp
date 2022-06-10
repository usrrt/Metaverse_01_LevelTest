#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
	2차원배열 생성 크기는 5 x 5
	1 ~ 25까지 난수생성
	중복방지를 위해 난수배열하나를 만들어 0으로 초기화
	난수배열 인덱스를 생성된 난수로하고 1로 만들어준다
	반복문을 돌려 난수할당하되 중복될경우 할당해주지않는다
	빙고판 완성

	inputNum과 빙고숫자가 일치할경우 0으로 만들어준다

	한줄 모두 0이 될경우 성공횟수 증가
	논리곱연산자를 사용해야될것같다


*/

int main()
{
	srand(time(NULL));
	int bingo[5][5] = { 0 };
	int noSameArr[30] = { 0 };

	for (size_t i = 0; i < 5; i++)
	{
		int j = 0;
		while (j < 5)
		{
			int bingoNum = 1 + rand() % 25;
			if (noSameArr[bingoNum] == 0)
			{
				bingo[i][j] = bingoNum;
				cout << bingo[i][j] << " ";
				++j;
			}
			noSameArr[bingoNum] = 1;
		}
		cout << endl;
	}

	int succece = 0;
	int inputNum = 0;
	int xPos = 0;
	int yPos = 0;

	while (1)
	{
		while (true)
		{
			if (bingo[yPos][xPos] == 0 && bingo[yPos][xPos + 1] == 0 && bingo[yPos][xPos + 2] == 0 && bingo[yPos][xPos + 3] == 0 && bingo[yPos][xPos + 4] == 0)
			{
				succece++;
			}
			else
			{
				break;
			}

		}

		system("cls");
		for (int i = 0; i < 5; i++)
		{
			for (int j = 0; j < 5; j++)
			{
				if (inputNum == bingo[i][j])
				{
					bingo[i][j] = 0;
				}

				cout << bingo[i][j] << "\t";

			}
			cout << endl;
		}
		cout << "현재 " << succece << "줄의 빙고가 완성되었습니다." << endl;
		cout << "숫자를 입력해 주세요: ";
		cin >> inputNum;

	}
}