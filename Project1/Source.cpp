#include <iostream>
#include "Header.h"

using namespace std;
using namespace Ex;


void input(int n, double R)
{
	cout << "Enter n: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter R";
		cin >> R;
	}
}
void output(int n,double R)
{
	cout << "Result of translate: " << MTranslater::RadToDeg(R, n);
}
void main()
{
	input(n, R);
	output(n,R);
	system("pause");
}