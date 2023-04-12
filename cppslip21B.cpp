//Create a C++ class Complex Number with data members real and imaginary. Write
//necessary functions:
//i. To accept Complex Number using constructor.
//ii. To display Complex Number in format [x +iy].
//iii. To add two Complex Numbers by using friend function

#include <iostream>
using namespace std;
class Complex 
{
private:
    double real, imaginary;

public:
    void input() 
	{
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void display() 
	{
        cout << "[" << real << " + " << imaginary << "i]";
    }

    friend Complex add(Complex, Complex);
};

Complex add(Complex c1, Complex c2) 
{
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imaginary = c1.imaginary + c2.imaginary;
    return sum;
}

int main() 
{
    Complex c1, c2, sum;

    cout << "Enter first complex number: ";
    c1.input();

    cout << "Enter second complex number: ";
    c2.input();

    sum = add(c1, c2);

    cout << "The sum of the two complex numbers is: ";
    sum.display();

    return 0;
}

