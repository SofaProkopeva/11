#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cout << "Enter A, B (A > B > 0)" << endl;
	cin >> a >> b;
	while (a > b)
		a -= b;
	cout << a;
}