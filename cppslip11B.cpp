//Create a C++ class Weight with data members kilogram, gram. Write a C++ program using operator overloading to perform following functions:
//i.	 To accept weight.
//ii.	 To display weight in kilogram and gram format.
//iii.	 Overload += operator to add two weights.	

#include <iostream>
using namespace std;

class Weight 
{
    private:
        int kilogram;
        int gram;

    public:
        Weight() 
		{
            kilogram = 0;
            gram = 0;
        }

        // method to accept weight
        void accept() 
		{
            cout << "Enter weight in kg: ";
            cin >> kilogram;
            cout << "Enter weight in g: ";
            cin >> gram;
        }

        // method to display weight
        void display() 
		{
            cout << "Weight: " << kilogram << " kg " << gram << " g" << endl;
        }

        // overload += operator to add two weights
        Weight operator+=(const Weight& w) 
		{
            kilogram += w.kilogram;
            gram += w.gram;
            if (gram >= 1000) 
			{
                kilogram += gram / 1000;
                gram %= 1000;
            }
            return *this;
        }
};

int main() 
{
    Weight w1, w2, w3;
    
    // accept two weights
    cout << "Enter weight 1" << endl;
    w1.accept();
    cout << "Enter weight 2" << endl;
    w2.accept();

    // add the two weights using += operator
    w3 = w1;
    w3 += w2;

    // display the original weights and the sum of weights
    cout << "Weight 1: ";
    w1.display();
    cout << "Weight 2: ";
    w2.display();
    cout << "Sum of weights: ";
    w3.display();

    return 0;
}



//explanation:
//In this program, we define a Weight class with data members kilogram and gram. 
//We also define a constructor to initialize the Weight object with zero weight, 
//member function accept() to input the weight in kilogram and gram format, and a 
//display() function to output the weight in the same format.
//We then overload the += operator to add two Weight objects. The overloaded operator 
//modifies the left-hand Weight object by adding the right-hand Weight object to it. 
//We also handle the carry-over from the gram field to the kilogram field if the sum 
//of the two gram fields is greater than or equal to 1000.
//In the main() function, we create three Weight objects w1, w2, and w3. We input the
// weights for w1 and w2 using the accept() function, and then we set w3 equal to w1. 
// We then add w2 to w3 using the overloaded += operator. Finally, we output the 
// weights of w1, w2, and w3 using the display() function.
