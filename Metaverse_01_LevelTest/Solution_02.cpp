#include <iostream>
using namespace std;
/*
	num�� fixNum�� ���ϸ鼭
	num�� �ٲٰ� 
	�װ��� ������ fixNum�� ���Ͽ�
	�ٽ� num�� ���ο� ���� �ٲٸ� �ȴ�

	3�� �¼��� ���´�
*/
int main()
{
	int num = 3;
	int fixNum = 3;
	while (num < 1000)
	{
		cout << num << endl;
		num *= fixNum;
	}
}

