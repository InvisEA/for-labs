// Stepen.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int i=2;
	cin >> n;
	while (i<=sqrt(static_cast<double>(n)))
	{
		if (n % i == 0)
			cout << "Number is not prime";
		i++;
	}
	return 0;
}

