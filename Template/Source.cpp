/*
Zachary Leyes

7/27/2023

Templates

1202 201
*/

using namespace std;

#include <iostream>

template <class T>
T half(T& a)
{
	return a / 2; 
}



int main()
{

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	cout << half(a) << endl;
	cout << half(b) << endl;
	cout << half(c) << endl;

	return 0;
}