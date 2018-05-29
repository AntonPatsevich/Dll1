#include <iostream>
#include "Header.h"

using namespace std;
using namespace Ex;


double input(double R)
{
	
		cout << "Enter R";
		cin >> R;
		return R;
}
void output(double R)
{
	cout << "Result of translate: " << MTranslater::RadToDeg(R);
}
void main()
{
	double R = 0;
	int n = 0;
	R = input(R);
	output(R);
	system("pause");
}