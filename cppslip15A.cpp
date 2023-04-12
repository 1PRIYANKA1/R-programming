//Write a C++ program to create a class Machine with data members Machine_Id, 
//Machine_Name, Price. Create and initialize all values of Machine object by using 
//parameterized constructor and copy constructor. Display details of Machine using setw()
//and set precsion(). 	

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
class Machine 
{
private:
    int machine_id;
    string machine_name;
    float price;

public:
    Machine(int id, string name, float p) 
	{
        machine_id = id;
        machine_name = name;
        price = p;
    }

    Machine(const Machine& other) 
	{
        machine_id = other.machine_id;
        machine_name = other.machine_name;
        price = other.price;
    }

    void display() 
	{
        cout << "Machine ID: " << machine_id << endl;
        cout << "Machine Name: " << machine_name << endl;
        cout << "Price:" << fixed << setprecision(2) << price << endl;
    }
};

int main() 
{
    Machine machine1(1, "Lathe", 5000.0), machine2(machine1);
    machine1.display();
    machine2.display();
}

