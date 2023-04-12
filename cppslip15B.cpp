//Create a C++ class MyMatrix and Write necessary member functions for the following:
//i.	To accept a Matrix
//ii.	To display a Matrix
//iii.	Overload unary ' -' operator to calculate transpose of a Matrix.
//iv.	Overload unary  '++' operator to increment matrix elements by 1. 

#include <iostream>
using namespace std;

const int MAX_ROWS = 100;
const int MAX_COLS = 100;

class MyMatrix {
private:
    int mat[MAX_ROWS][MAX_COLS];
    int rows, cols;

public:
    void input() 
	{
        cout << "Enter number of rows and columns: ";
        cin >> rows >> cols;

        cout << "Enter matrix elements:\n";
        for(int i = 0; i < rows; i++) 
		{
            for(int j = 0; j < cols; j++) 
			{
                cin >> mat[i][j];
            }
        }
    }

    void display() 
	{
        cout << "Matrix is:\n";
        for(int i = 0; i < rows; i++) 
		{
            for(int j = 0; j < cols; j++) 
			{
                cout << mat[i][j] << " ";
            }
            cout << "\n";
        }
    }

    void transpose() 
	{
        MyMatrix t;
        t.rows = cols;
        t.cols = rows;

        for(int i = 0; i < rows; i++) 
		{
            for(int j = 0; j < cols; j++) 
			{
                t.mat[j][i] = mat[i][j];
            }
        }

        cout << "Transpose is:\n";
        t.display();
    }

    void increment() 
	{
        for(int i = 0; i < rows; i++) 
		{
            for(int j = 0; j < cols; j++) 
			{
                mat[i][j]++;
            }
        }

        cout << "Matrix after incrementing elements by 1:\n";
        display();
    }
};

int main() 
{
    MyMatrix m;
    m.input();

    m.display();

    m.transpose();

    m.increment();

    return 0;
}
		

