//Create a C++ class 
//	class Matrix
//{
//	int **p;
// int r, c;
//public:
//		//member functions
//
//}
//Write necessary member functions to:
//I.	Accept Matrix elements
//II.	Display Matrix elements.
//III.	Calculate transpose of a Matrix.
//(Use constructor and destructor)

#include <iostream>
using namespace std;

class Matrix 
{
private:
    int **p;
    int rows, cols;

public:
    // Constructor
    Matrix(int r, int c) 
	{
        rows = r;
        cols = c;
        p = new int*[rows];
        for (int i = 0; i < rows; ++i) {
            p[i] = new int[cols];
        }
    }

    // Destructor
    ~Matrix() 
	{
        for (int i = 0; i < rows; ++i) 
		{
            delete[] p[i];
        }
        delete[] p;
    }

    // Member functions
    void acceptElements() 
	{
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < rows; ++i) 
		{
            for (int j = 0; j < cols; ++j) 
			{
                cin >> p[i][j];
            }
        }
    }

    void displayElements() 
	{
        cout << "Matrix elements:\n";
        for (int i = 0; i < rows; ++i) 
		{
            for (int j = 0; j < cols; ++j) 
			{
                cout << p[i][j] << "\t";
            }
            cout << endl;
        }
    }

    Matrix transpose() 
	{
        Matrix temp(cols, rows);
        for (int i = 0; i < rows; ++i) 
		{
            for (int j = 0; j < cols; ++j) 
			{
                temp.p[j][i] = p[i][j];
            }
        }
        return temp;
    }
};

