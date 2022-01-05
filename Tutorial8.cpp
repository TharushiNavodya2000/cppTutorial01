#include<iostream>
#include<cmath>
using namespace std;
double calculateHeartrate(int pulserate);
int main()
{
	string name;
	int age;
	float pulserate;

	cout << "Enter your name :";
	cin >> name;
	cout << "Enter your age :";
	cin >> age;
	cout << "Enter your pulse rate :";
	cin >> pulserate;

	cout << "Hello " << name << ", Your resting heart rate is " << calculateHeartrate(pulserate) << "level of activity";

	if (calculateHeartrate(pulserate) <= 60 && age <= 18)
	{
		cout << " Bellow normal";
	}
	else if(calculateHeartrate(pulserate) >=60 &&  calculateHeartrate(pulserate) <= 65 && age == 18)
	{
		cout << " normal";
	}
	else if (calculateHeartrate(pulserate) >= 64 && calculateHeartrate(pulserate) <=120 && age >=18 && age<=28)
	{
		cout << " above average";
	}
	else if (calculateHeartrate(pulserate) <= 120 &&  age > 28)
	{
		cout << " high";
	}
	else
	{
		cout << "non";
	}


}

double calculateHeartrate(int pulserate)
{
	double heartRate = sqrt(pulserate * 60 );
	return heartRate;

}