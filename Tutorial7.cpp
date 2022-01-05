#include<iostream>
using namespace std;
int main()
{
	int Type;
	double Salary;
	double OtHours;

	cout << "Enter the type:";
	cin >> Type;
	cout << "Enter the Ot Hours :";
	cin >> OtHours;
	cout << "Salary :";
	if (Type == 1)
	{
		Salary = OtHours * 1000;
	}
	else if (Type == 2)
	{
		Salary = OtHours * 1500;
	}
	else if (Type == 3)
	{
		Salary = OtHours * 1700;
	}
	else
	{
		Salary = 0;
	}
	cout << Salary << endl;

	return 0;
}