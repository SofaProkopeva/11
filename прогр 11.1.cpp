﻿#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "Enter A,B (0 < A < B)" << endl;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << i << " ";
	}
}