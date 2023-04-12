//Write a C++ program to read two float numbers. Perform arithmetic binary operations 
//like , - , *, / on these numbers using Inline Function. Display resultant value with 
//a precision of two digits.

#include <iostream>
#include <iomanip>
using namespace std;
class opr
{
	public:
		inline float mul(float a, float b) //inline functions
		{
			return (a * b);
		}
		inline float add(float a, float b)
		{
			return (a + b);
		}
		inline float sub(float a, float b)
		{
			return (a - b);
		}
		inline float div(float a, float b)
		{
			return (a / b);
		}
};

int main()
{
	float p, p1; //p=point1 p1=point2 
	opr o;
	cout << "\nEnter value of a: ";
	cin >> p;
	cout << "\nEnter value of b: ";
	cin >> p1;
	cout << "\nAddition: " << setw(5); //setw is manipulator
	cout << o.add(p, p1);
	cout << "\nSubstraction: " << setw(5);
	cout << o.sub(p, p1);
	cout << "\nMultiplication: " << setw(5);
	cout << o.mul(p, p1);
	cout << "\nDivision of: " << setw(5);
	cout << o.div(p, p1);

	return (0);
}

