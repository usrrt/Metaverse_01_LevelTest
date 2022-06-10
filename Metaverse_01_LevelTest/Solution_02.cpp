#include <iostream>
using namespace std;
/*
	num에 fixNum을 곱하면서
	num을 바꾸고 
	그곳에 고정된 fixNum을 곱하여
	다시 num을 새로운 수로 바꾸면 된다

	3의 승수가 나온다
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

