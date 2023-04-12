//Create a C++ class for inventory of Mobiles with data members Model, Mobile_Company, 
//Color, Price and Quantity. Mobile can be sold, if stock is available, otherwise purchase 
//will be made. Write necessary member functions for the following:
//i. To accept mobile details from user.
//ii. To sale a mobile. (Sale contains Mobile details &number of mobiles to be sold.)
//iii. To Purchase a Mobile. (Purchase contains Mobile details & number of mobiles to 
//be purchased)

#include <iostream>
#include <string>

using namespace std;

class Inventory 
{
public:
    string model, mobile_company, color;
    float price;
    int quantity;

    void accept() 
	{
        cout << "Enter model, mobile company, color, price, quantity: ";
        cin >> model >> mobile_company >> color >> price >> quantity;
    }

    void sale() 
	{
        int num;
        cout << "Enter number of mobiles to be sold: ";
        cin >> num;
        if (num > quantity) 
		{
            cout << "Insufficient stock" << endl;
        } else 
		{
            cout << "Sold " << num << " " << color << " " << mobile_company << " " << model << " mobiles" << endl;
            quantity -= num;
        }
    }

    void purchase() 
	{
        int num;
        cout << "Enter number of mobiles to be purchased: ";
        cin >> num;
        cout << "Purchased " << num << " " << color << " " << mobile_company << " " << model << " mobiles" << endl;
        quantity += num;
    }

    void display() 
	{
        cout << "Model: " << model << endl;
        cout     << "Mobile Company: " << mobile_company << endl;
        cout     << "Color: " << color << endl;
        cout     << "Price: " << price << endl;
        cout     << "Quantity: " << quantity << endl;
    }
};

int main() 
{
    Inventory mobile;
    mobile.accept();
    mobile.display();

    mobile.sale();
    mobile.display();

    mobile.purchase();
    mobile.display();

    return 0;
}
