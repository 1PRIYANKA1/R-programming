//Write a C++ program to create a class Distance with data members meter and centimeter 
//to represent distance. Write a function Larger( )to return the larger of two distances. (Use this
//pointer)

#include<iostream>
using namespace std;

class Distance 
{
    private:
        int meter, centimeter;
    public:
        void input() 
		{
            cout << "Enter distance in meters: ";
            cin >> meter;
            cout << "Enter distance in centimeters: ";
            cin >> centimeter;
        }
        void display() 
		{
            cout << meter << "m " << centimeter << "cm" << endl;
        }
        Distance* Larger(Distance *d) 
		{
            if(meter > d->meter || (meter == d->meter && centimeter > d->centimeter)) {
                return this;
            }
            else 
			{
                return d;
            }
        }
};

int main() 
{
    Distance d1, d2;
    d1.input();
    d2.input();
    Distance *larger = d1.Larger(&d2);
    cout << "The larger distance is: ";
    larger->display();
    return 0;
}



