#include <iostream>
using namespace std;

template <typename T>
T funct(T a[], int start, int stop, T an=0)
{
	int s = an;
	for (int i = start; i <= stop; ++i)
	{
		s += a[i];
	}
	return s;
}

int main()
{
	int a[] = { 1,2,3,4,5,6,7,8,9 }, s;
	s = funct<int>(a, 3, 7);
	cout << s;
	return 0;
}
