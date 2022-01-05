#include<iostream>
using namespace std;
int main()
{
	int day;

	cout << "Value of the day :";
	cin >> day;

	switch (day)
	{
	case 1: {
		cout << "Day of the week :Monday" << endl
			<< "Good bye";
	}
	case 2: {
		cout << "Day of the week :Tuesday" << endl
			<< "Good bye";
	}
	case 3: {
		cout << "Day of the week :Wednesday" << endl
			<< "Good bye";
	}
	case 4: {
		cout << "Day of the week :Thursday" << endl
			<< "Good bye";
	}
	case 5: {
		cout << "Day of the week :Friday" << endl
			<< "Good bye";
	}
	case 6: {
		cout << "Day of the week :Saturday" << endl
			<< "Good bye";
	}
	case 7: {
		cout << "Day of the week :Sunday" << endl
			<< "Good bye";
	}
	default:
	{
		cout << "Invalid day" << endl;
	}
	}

	return 0;

}