//Create a C++ class Marksheet with data members Seat_No, Student_Name, Class, 
//Subject_Name[], Int_Marks[], Ext_Marks[], Total[], Grand_Total, Percentage, Grade. 
//Write member function to accept Student information for 5 subjects. Calculate Total, 
//Grand_Total, Percentage, Grade and use setwO, setprecisionO and setfillQ to display
//Marksheet.
#include <iostream>
#include <iomanip>
using namespace std;

class Marksheet 
{
  int Seat_no, Int_marks[5], Ext_marks[5], Total[5], G_Total;
  float Percentage;
  string Student_name, Class, Subject_name[5], Grade;

public:
 void getdata() {
  cout << "Enter Seat No: "; cin >> Seat_no;
  cout << "Enter Student Name: "; cin >> Student_name;
  cout << "Enter Class: "; cin >> Class;

  G_Total = 0; 

  for(int i = 0; i < 5; i++) {
    cout << "Enter Subject " << i + 1 << " Name: "; cin >> Subject_name[i];
    cout << "Enter Internal Marks: "; cin >> Int_marks[i];
    cout << "Enter External Marks: "; cin >> Ext_marks[i];
    Total[i] = Int_marks[i] + Ext_marks[i];
    G_Total += Total[i];
  }

  float total_marks = 500; 
  float ob_marks = G_Total; 

  Percentage = 0; 

  Percentage = (ob_marks / total_marks) * 100;
  if (Percentage >= 90) Grade = "A+";
  else if (Percentage >= 80) Grade = "A";
  else if (Percentage >= 70) Grade = "B";
  else if (Percentage >= 60) Grade = "C";
  else if (Percentage >= 50) Grade = "D";
  else Grade = "F";
}
  void display() 
  {
    cout << setw(25) << "*=-=-MARKSHEET-=-=*\n";
    cout << "Seat No: " << setw(2) << Seat_no << endl;
    cout << "Student Name: " << setw(1) << Student_name << endl;
    cout << "Class: " << setw(4) << Class << endl << endl;
    cout << "SUBJECTS" << setw(10) << "INTERNAL" << setw(10) << "EXTERNAL" << setw(10) << "TOTAL\n";
    for (int i = 0; i < 5; i++) 
    {
      cout << Subject_name[i] << setw(10) << Int_marks[i] << setw(15) << Ext_marks[i] << setw(10) << Total[i] << endl;
    }
    cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-\n";
    cout << "Grand Total: " << setw(3) << G_Total << endl;
    cout << "Percentage: " << setw(5) << setprecision(2) << fixed << Percentage << "%" << endl;
    cout << "Grade: " << setw(2) << Grade << endl;
  }
};

int main() 
{
  Marksheet m;
  m.getdata();
  m.display();
  return 0;
}


