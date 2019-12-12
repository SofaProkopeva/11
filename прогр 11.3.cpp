#include <iostream>
using namespace std;

int main()
{
	int s, k, n;
	cout << "Enter N (N > 0)" << endl;
	cin >> n;
	s = 0;
	k = 0;
	while (s < n)
	{
		k++;
		s += k;
	}
	cout << "k=" << k << ", sum=" << s;
}