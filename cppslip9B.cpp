//Create a base class Student with data members Roll_No, Name. Derives two classes from it, class   Theory with data members M l ,M2, M3, M4 and class Practical with data members Pl, P2. Class Result (Total_Marks, Percentage, Grade) inherits both Theory and Practical classes. (Use concept of Virtual Base Class and protected access specifiers)
//   Write a C++ menu driven program to perform the following functions:
//i.	 Accept Student Information
//ii.	Display Student Information
//iii.	Calculate Total_marks, Percentage and Grade.

#include <iostream>
#include <string>

using namespace std;

class Student 
{
protected:
    int rollNo;
    string name;

public:
    void accept() 
	{
        cout << "Enter Roll No: ";
        cin >> rollNo;
        cout << "Enter Name: ";
        cin >> name;
    }

    void display() 
	{
        cout << "Roll No: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Theory : virtual public Student 
{
protected:
    int m1, m2, m3, m4;

public:
    void acceptMarks() 
	{
        cout << "Enter marks for four subjects:" << endl;
        cin >> m1 >> m2 >> m3 >> m4;
    }

    void displayMarks() 
	{
        cout << "Marks for four subjects: " << m1 << " " << m2 << " " << m3 << " " << m4 << endl;
    }

    int TotalMarks() 
	{
        return m1 + m2 + m3 + m4;
    }
};

class Practical : virtual public Student 
{
protected:
    int p1, p2;

public:
    void acceptMarks() 
	{
        cout << "Enter marks for two practicals:" << endl;
        cin >> p1 >> p2;
    }

    void displayMarks() 
	{
        cout << "Marks for two practicals: " << p1 << " " << p2 << endl;
    }

    int TotalMarks() 
	{
        return p1 + p2;
    }
};

class Result : public Theory, public Practical 
{
private:
    int totalMarks;
    float percentage;
    char grade;

public:
    void calculateResult() 
	{
        totalMarks = Theory::TotalMarks() + Practical::TotalMarks();
        percentage = totalMarks / 6;
        if (percentage >= 90)
            grade = 'A';
        else if (percentage >= 80)
            grade = 'B';
        else if (percentage >= 70)
            grade = 'C';
        else if (percentage >= 60)
            grade = 'D';
        else if (percentage >= 50)
            grade = 'E';
        else
            grade = 'F';
    }

    void displayResult() 
	{
        cout << "Total marks: " << totalMarks << endl;
        cout << "Percentage: " << percentage << "%" << endl;
        cout << "Grade: " << grade << endl;
    }
};

int main() 
{
    Result r;
    r.accept();
    r.Theory::acceptMarks();
    r.Practical::acceptMarks();
    r.calculateResult();
    r.display();
    r.Theory::displayMarks();
    r.Practical::displayMarks();
    r.displayResult();

    return 0;
}

