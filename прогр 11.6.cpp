#include <iostream>
using namespace std;

int main()
{
	int n, k, f, a1, a2;
	cout << "Enter N (N > 0)" << endl;
	cin >> n;
	a1 = 1;
	a2 = 1;
	k = 2;
	while (n != a2)
	{
		f = a2;
		a2 += a1;
		a1 = f;
		k++;
	}
	cout << "K = " << k;
}

