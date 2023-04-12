//Create a C++ class Marksheet with data members Seat_No, Student_Name, Class, 
//Subject_Name[],Int_Marks[], Ext_Marks[], Total[], Grand_Total, Percentage, Grade. 
//Write member function to accept Student information for 5 subjects. Calculate Total, 
//Grand_Total, Percentage, Grade and use setw(), setprecision() and setfill () to display 
//Marksheet.

#include <iostream>
#include <iomanip>
using namespace std;
class Marksheet 
{
    int Seat_No, Int_Marks[5], Ext_Marks[5], Total[5], Grand_Total;
    float Percentage;
    string Student_Name, Class, Subject_Name[5], Grade;

public:
    void getdata() 
	{
        cout << "Enter Seat No: "; cin >> Seat_No;
        cout << "Enter Student Name: "; cin >> Student_Name;
        cout << "Enter Class: "; cin >> Class;

        for(int i = 0; i < 5; i++) 
		{
            cout << "Enter Subject " << i + 1 << " Name: "; cin >> Subject_Name[i];
            cout << "Enter Internal Marks: "; 
			cin >> Int_Marks[i];
            cout << "Enter External Marks: "; 
			cin >> Ext_Marks[i];
            Total[i] = Int_Marks[i] + Ext_Marks[i];
            Grand_Total += Total[i];
        }

        Percentage = Grand_Total / 5.0;
        if (Percentage >= 90) Grade = "A+";
        else if (Percentage >= 80) Grade = "A";
        else if (Percentage >= 70) Grade = "B";
        else if (Percentage >= 60) Grade = "C";
        else if (Percentage >= 50) Grade = "D";
        else Grade = "F";
    }

    void display() 
	{
        cout << setw(40) << "MARKSHEET\n";
        cout << "Seat No: " << setw(20) << Seat_No << endl;
        cout << "Student Name: " << setw(16) << Student_Name << endl;
        cout << "Class: " << setw(23) << Class << endl << endl;
        cout << "SUBJECTS" << setw(10) << "INTERNAL" << setw(15) << "EXTERNAL" << setw(10) << "TOTAL\n";
        for (int i = 0; i < 5; i++) 
		{
            cout << Subject_Name[i] << setw(10) << Int_Marks[i] << setw(15) << Ext_Marks[i] << setw(10) << Total[i] << endl;
        }
        cout << "--------------------------------------------\n";
        cout << "Grand Total: " << setw(10) << Grand_Total << endl;
        cout << "Percentage: " << setw(11) << setprecision(2) << fixed << Percentage << "%" << endl;
        cout << "Grade: " << setw(16) << Grade << endl;
    }
};

int main() {
    Marksheet m;
    m.getdata();
    m.display();
    return 0;
}

