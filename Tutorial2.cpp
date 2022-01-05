#include<iostream>
#include<iomanip>
using namespace std;
float CalCircleArea(float radious);
float CalRectangleArea(float width, float length);
float CalSquare(float length);
int main()
{
	cout << "Green Area :" <<setprecision(3)
		<<setiosflags(ios::fixed)
		<< (CalRectangleArea(28, 15) - (CalSquare(4) + CalCircleArea(5) + CalRectangleArea(3, 7)));
}
float CalCircleArea(float radious)
{
	return 22 / 7.0 * radious * radious;
}
float CalRectangleArea(float width, float length)
{
	return width * length;
}
float CalSquare(float length)
{
	return length * length;
}