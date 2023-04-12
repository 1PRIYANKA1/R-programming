//Create a class Clock that contains integer data members as hours, minutes and seconds. 
//Write a C++ program to perform following member functions: void setclock(int, int, 
//int ) to set the initial time of clock object. Void showclock() to display the time 
//in hh:min:sec format. Write a function tick( ) which by default increment the value 
//of second by 1 or according to user specified second. The clock uses 24 hours format.

#include <iostream>
using namespace std;
class Clock 
{
    int hours, minutes, seconds;

public:
    void setclock(int h, int m, int s) 
	{
        hours = h;
        minutes = m;
        seconds = s;
    }

    void showclock() 
	{
        cout << hours << ":" << minutes << ":" << seconds << endl;
    }

    void tick(int sec = 1) 
	{
        seconds += sec;
        minutes += seconds / 60;
        hours += minutes / 60;

        seconds %= 60;
        minutes %= 60;
        hours %= 24;
    }
};

int main() 
{
    Clock c;
    c.setclock(11, 59, 55);
    c.showclock();
    c.tick();
    c.showclock();
    c.tick(5);
    c.showclock();
    return 0;
}

