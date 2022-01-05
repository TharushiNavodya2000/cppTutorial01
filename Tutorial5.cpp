#include<iostream>
using namespace std;
int main()
{
	int age;
	cout << "Enter the age :";
	cin >> age;

	if (age <= 18)
	{
		cout << "Child";
	}
	else
	{
		cout << "Adult";
	}

	return 0;

}