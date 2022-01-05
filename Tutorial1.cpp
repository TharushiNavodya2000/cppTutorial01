#include<iostream>
#include<cmath>
double calculateDCvoltagedrop(double L, double T);
using namespace std;
int main()
{
	double L;
	double T;
	double V;

	cout << "Enter time:";
	cin >> T;

	cout << "Enter length of circuit :";
	cin >> L;
	
	V = calculateDCvoltagedrop(L, T);

	if (V <= 25)
	{
		cout << "Calculate DC voltage drop is" << V << "impact is Small.";
	}
	else if (V <= 100)
	{
		cout << "Calculate DC voltage drop is" << V << "impact is Medium.";
	}
	else
	{
		cout << "Calculate DC voltage drop is" << V << "impact is High.";
	}
}
double calculateDCvoltagedrop(double L, double T)
{
	return L * sqrt(T * T);
}