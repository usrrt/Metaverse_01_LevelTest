#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

/*
	2�����迭 ���� ũ��� 5 x 5
	1 ~ 25���� ��������
	�ߺ������� ���� �����迭�ϳ��� ����� 0���� �ʱ�ȭ
	�����迭 �ε����� ������ �������ϰ� 1�� ������ش�
	�ݺ����� ���� �����Ҵ��ϵ� �ߺ��ɰ�� �Ҵ��������ʴ´�
	������ �ϼ�

	inputNum�� ������ڰ� ��ġ�Ұ�� 0���� ������ش�

	���� ��� 0�� �ɰ�� ����Ƚ�� ����
	���������ڸ� ����ؾߵɰͰ���


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
		cout << "���� " << succece << "���� ���� �ϼ��Ǿ����ϴ�." << endl;
		cout << "���ڸ� �Է��� �ּ���: ";
		cin >> inputNum;

	}
}