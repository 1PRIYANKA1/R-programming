//Write a C++ class Seller (S_Name, Product_name, Sales_Quantity, Target_Quantity, Month,
// Commission). Each salesman deals with a separate product and is assigned a target for 
// a month. At the end of the month his monthly sales is compared with target and 
// commission is calculated as follows:
//o	If Sales_Quantity > Target_Quantity then commission is 25% of extra sales made + 10%
// of target.
//o	If Sales_Quantity = Target_Quantity then commission is 10% of target.
//o	Otherwise commission is zero.
//Display salesman information along with commission obtained. (Use array of objects)

#include <iostream>
using namespace std;

class Seller 
{
private:
    string s_name, product_name, month;
    int sales_quantity, target_quantity;
    float commission;
public:
    void set_info() 
	{
        cout << "Enter salesman name: "; cin >> s_name;
        cout << "Enter product name: "; cin >> product_name;
        cout << "Enter sales quantity: "; cin >> sales_quantity;
        cout << "Enter target quantity: "; cin >> target_quantity;
        cout << "Enter month: "; cin >> month;
        calculate_commission();
    }
    void display_info() 
	{
        cout << "Salesman name: " << s_name << endl;
        cout << "Product name: " << product_name << endl;
        cout << "Sales quantity: " << sales_quantity << endl;
        cout << "Target quantity: " << target_quantity << endl;
        cout << "Month: " << month << endl;
        cout << "Commission: " << commission << endl;
    }
private:
    void calculate_commission() 
	{
        int extra_sales = sales_quantity - target_quantity;
        if (extra_sales > 0) 
		{
            commission = 0.25 * extra_sales + 0.1 * target_quantity;
        } 
		else if (extra_sales == 0) 
		{
            commission = 0.1 * target_quantity;
        } 
		else 
		{
            commission = 0;
        }
    }
};

int main() 
{
    int n;
    cout << "Enter number of sellers: "; cin >> n;

    Seller sellers[n];
    for (int i = 0; i < n; i++) 
	{
        cout << "Enter details for seller #" << i+1 << endl;
        sellers[i].set_info();
    }

    cout << "\nSalesman information with commission:\n";
    for (int i = 0; i < n; i++) 
	{
        sellers[i].display_info();
        cout << endl;
    }

    return 0;
}


