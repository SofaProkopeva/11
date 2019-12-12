#include <iostream>
using namespace std;

int main()
{
	double s, p;
	int m;
	cout << "Enter P (0<P<25)" << endl;
	cin >> p;
	p *= 0.01;
	m = 0;
	s = 1000;
	while (s <= 1100)
	{
		m++;
		s += s * p;
	}
	cout << "Sum = " << s << ", k = " << m;
}