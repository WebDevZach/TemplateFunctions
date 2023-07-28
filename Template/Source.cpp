/*
Zachary Leyes

7/27/2023

Templates

1202 201
*/

using namespace std;

#include <iostream>

template <class T>
void swapVars(T& a, T& b)
{
	T temp; 

	temp = a;
	a = b;
	b = temp;
}



int main()
{

	double a = 7.0;
	float b = 5.0f;
	int c = 3;

	half(a);
	half(b);
	half(c);

	cout << a << endl;
	cout << b << endl;



	return 0;
}