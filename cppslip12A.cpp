//Write a C++ program to create a class Product  with data  members  Product_id, 
//Product_Name, Qty, Price. Write member functions to accept and display Product 
//informational so display number of objects created for Product class. (Use Static data member and Static member function) 

#include <iostream>
using namespace std;
class Product 
{
    private:
        static int count; // static data member to keep track of number of objects created
        int pid;
        string pname;
        int qty;
        float price;

    public:
        Product() 
		{ // constructor to increment count when object is created
            count++;
        }
        void accept() 
		{ // member function to accept product information from user
            cout << "Enter product id: ";
            cin >> pid;
            cout << "Enter product name: ";
            cin >> pname;
            cout << "Enter quantity: ";
            cin >> qty;
            cout << "Enter price: ";
            cin >> price;
        }
        void display() 
		{ // member function to display product information
            cout << "Product id: " << pid << endl;
            cout << "Product name: " << pname << endl;
            cout << "Quantity: " << qty << endl;
            cout << "Price: " << price << endl;
        }
        static void displayCount() 
		{ // static member function to display count
            cout << "Number of objects created: " << count << endl;
        }
};

int Product::count = 0; // initializing static data member

int main() 
{
    Product p1, p2, p3; // creating objects
    p1.accept(); 
    p2.accept(); 
    p3.accept(); 
    cout << "Product information for object 1:" << endl;
    p1.display(); 
    cout << "Product information for object 2:" << endl;
    p2.display(); 
    cout << "Product information for object 3:" << endl;
    p3.display(); 
    Product::displayCount(); // displaying number of objects created
    return 0;
}
