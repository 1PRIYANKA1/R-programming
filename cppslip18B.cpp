//Create a C++ base class Media. Derive two different classes from it, class NewsPaper 
//with data members N_Name, N_Editor, N_Price, No_of_Pages and class Magazine with data 
//members M_Name,M_Editor, M_Price. Write a C++ program to accept and display 
//information of both NewsPaper and Magazine. (Use pure virtual function)

#include<iostream>
#include<string>
using namespace std;

// Abstract base class
class Media 
{
    protected:
        string name;
        string editor;
        float price;
    public:
        virtual void input() = 0; // pure virtual function
        virtual void display() = 0; // pure virtual function
};

// Derived class Newspaper
class Newspaper : public Media 
{
    private:
        string n_name;
        int no_of_pages;
    public:
        void input() 
		{
            cout << "Enter newspaper name: ";
            cin >> n_name;
            cout << "Enter editor name: ";
            cin >> editor;
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter number of pages: ";
            cin >> no_of_pages;
        }
        void display() 
		{
            cout << "Newspaper name: " << n_name << endl;
            cout << "Editor name: " << editor << endl;
            cout << "Price: " << price << endl;
            cout << "Number of pages: " << no_of_pages << endl;
        }
};

// Derived class Magazine
class Magazine : public Media 
{
    private:
        string m_name;
        int issue_num;
    public:
        void input() 
		{
            cout << "Enter magazine name: ";
            cin >> m_name;
            cout << "Enter editor name: ";
            cin >> editor;
            cout << "Enter price: ";
            cin >> price;
            cout << "Enter issue number: ";
            cin >> issue_num;
        }
        void display() 
		{
            cout << "Magazine name: " << m_name << endl;
            cout << "Editor name: " << editor << endl;
            cout << "Price: " << price << endl;
            cout << "Issue number: " << issue_num << endl;
        }
};

int main() 
{
    // Declare objects of derived classes
    Newspaper n;
    Magazine m;
    
    // Input and display information for Newspaper
    cout << "Newspaper details:\n";
    n.input();
    n.display();
    
    // Input and display information for Magazine
    cout << "Magazine details:\n";
    m.input();
    m.display();
    
    return 0;
}

