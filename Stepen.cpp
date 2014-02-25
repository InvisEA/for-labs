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
	is_prime=true;
	cin >> n;
	while (i<=sqrt(static_cast<double>(n)))
	{
		if (n % i == 0)
		{
			is_prime=false;
		}
		i++;
	}
	if (is_prime)
	cout << "Number is prime";
	else 
	cout << "Number is not prime";
	return 0;
}

