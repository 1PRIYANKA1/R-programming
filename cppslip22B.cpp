//Define a class Product that contains data member as Prod_no, Prod_Name, Prod_Price. 
//Derive a class Discount (discount_in_Percentage) from class Product. A Customer buys 
//‘n’ products. Accept quantity for each product , calculate Total Discount and accordingly 
//generate Bill. Display the bill using appropriate Manipulators.

#include <iostream>
using namespace std;
class Product 
{
public:
    int id;
    string name;
    float price;

    void accept() 
	{
        cout << "Enter product id: ";
        cin >> id;
        cout << "Enter product name: ";
        cin >> name;
        cout << "Enter product price: ";
        cin >> price;
    }

    void display() 
	{
        cout << id << "\t" << name << "\t\t" << price << endl;
    }

    float getPrice() 
	{
        return price;
    }
};

class Discount : public Product 
{
public:
    int discount;

    void accept_D() 
	{
        cout << "Enter discount percentage: ";
        cin >> discount;
    }

    float getDiscount() 
	{
        return getPrice() * discount / 100.0;
    }
};

int main() 
{
    Discount product[10];
    int n;
    float total = 0, discnt = 0;

    cout << "Enter number of products: ";
    cin >> n;

    for (int i = 0; i < n; i++) 
	{
        cout << "Product " << i+1 << ":" << endl;
        product[i].accept();
        product[i].accept_D();
    }

    cout << "\n********** YOUR BILL **********\n";
    cout << "ID\tProduct Name\tPrice\tDiscount\n";

    for (int i = 0; i < n; i++) 
	{
        product[i].display();
        total += product[i].getPrice();
        discnt += product[i].getDiscount();
    }

    cout << "=====================================\n";
    cout << "Total: \t\t\t" << total << endl;
    cout << "Discount: \t\t\t" << discnt << endl;
    cout << "Total Bill Amount: \t\t" << total - discnt << endl;

    return 0;
}

