#include <iostream>
/*
	��ĭ�� ���ҿ�����,
	���� ���� ������ ���
	
	���κ� �ݺ�Ƚ�� Ȧ��
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