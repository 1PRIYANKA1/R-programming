//Create a C++ class MyMatrix. Write a C++ program to accept and display a Matrix. 
//Overload binary '-' operator to calculate subtraction of two matrices

#include <iostream>
using namespace std;

class Matrix {
public:
    int r, c;
    int** data;
    Matrix(int rows, int cols) 
	{
        r = rows;
        c = cols;
        data = new int*[r];
        for (int i = 0; i < r; i++) 
		{
            data[i] = new int[c];
        }
    }
    void input() 
	{
        cout << "Enter matrix elements:\n";
        for (int i = 0; i < r; i++) 
		{
            for (int j = 0; j < c; j++) 
			{
                cin >> data[i][j];
            }
        }
    }
    void display() 
	{
        cout << "Matrix:\n";
        for (int i = 0; i < r; i++) 
		{
            for (int j = 0; j < c; j++) 
			{
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
    Matrix operator-(Matrix& m2) 
	{
        Matrix res(r, c);
        for (int i = 0; i < r; i++) 
		{
            for (int j = 0; j < c; j++) 
			{
                res.data[i][j] = data[i][j] - m2.data[i][j];
            }
        }
        return res;
    }
};

int main() 
{
    int r, c;
    cout << "Enter number of rows and columns: ";
    cin >> r >> c;
    
    Matrix m1(r, c);
    cout << "Enter first matrix:\n";
    m1.input();
    m1.display();

    Matrix m2(r, c);
    cout << "Enter second matrix:\n";
    m2.input();
    m2.display();

    Matrix res = m1 - m2;
    cout << "Subtracted matrix:\n";
    res.display();
    return 0;
}
}

