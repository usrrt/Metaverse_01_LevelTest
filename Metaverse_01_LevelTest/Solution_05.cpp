#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
	�ִ� ������ ũ�⸸ŭ�� �迭 0���� �ʱ�ȭ
	������ �ε����� �����鼭 �ش� ������ ���ý� 1�� �־��ش�
	1�� �ƴҽ� ��� ���� 1�̳����� �ٽ� ��������
*/

int main()
{
	srand(time(NULL));
	int maxNum;
	printf("�ִ밪 : ");
	scanf("%d", &maxNum);
	int repeatNum;
	printf("�������� : ");
	scanf("%d", &repeatNum);

	int arr[100] = { 0 };
	printf("��÷��ȣ : ");
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