#include <iostream>

using namespace std;

/*
	�������� ����
	temp�� ���� ���� �־�
	���ǹ� ������ �ٲ��ش�

*/

void sortArray(int* arr, int n)
{
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i + 1] < arr[i])
			{
				int temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}

	for (int k = 0; k < n; k++)
	{
		cout << arr[k] << " ";
	}
}

int main()
{
	int arr[5] = { 5, 2, 4, 1, 3 };

	sortArray(arr, 5);
}
