#include <iostream>

using namespace std;

//void swap(int* a, int* b)
//{
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//
//	int* pA = &a;
//	int* pB = &b;
//
//	swap(pA, pB);
//	printf("a = %d\nb = %d\n", a, b);
//}

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main()
{
	int a, b;
	a = 10;
	b = 20;

	swap(a, b);
	cout << a << ", " << b << endl;
}