//Create a C++ class Number with integer data mem ber. Write necessary member functions 
//to overload the operator unary pre and post increment ' ++'.

#include<iostream>
using namespace std;

class Number 
{
    private:
        int num;
    public:
        void display() 
		{
            cout << "Number = " << num << endl;
        }
        Number operator++() 
		{ // pre-increment operator overloading
            ++num;
            return Number(num);
        }
        Number operator++(int) 
		{ // post-increment operator overloading
            int temp = num;
            num++;
            return Number(temp);
        }
};

int main() 
{
    Number n1, n2;
    ++n1; // pre-increment
    n1.display();
    n2.operator++(0); // post-increment
    n2.display();
    return 0;
}

