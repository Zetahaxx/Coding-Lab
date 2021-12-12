/*Create a 'MATRIX' class of size m X n. Overload the ‘+’ operator to
Add Two MATRIX objects. Write a main function to implement it.*/
#include <iostream>
using namespace std;

class Matrix
{
    int a[5][5], r, c;

public:
    void get_input()
    {
        cout << "Enter the size of the row and column: " << endl;
        cin >> r >> c;
        cout << "Enter the elements: " << endl;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    Matrix()
    {     }

    void display()
    {
        cout << "The sum of the matrices is: " << endl;
        for(int i = 0; i < r; ++i)
        {
            for (int j = 0; j < c; ++j)
                cout << a[i][j] << "  ";
            cout<<endl;
        }
    }

    friend Matrix operator +(Matrix, Matrix);
    friend bool check(Matrix, Matrix);
};

Matrix operator +(Matrix m1, Matrix m2)
{
    Matrix t;
    t.r = m1.r;
    t.c = m1.c;
    for (int i = 0; i < m1.r; i++ )
    {
        for (int j = 0; j < m1.c; j++ )
            t.a[i][j] = m1.a[i][j] + m2.a[i][j];
    }
    return t;
}

bool check(Matrix m1, Matrix m2)
{
    if(m1.r == m2.r && m1.c == m2.c)
        return true;
    else
        return false;
}


int main()
{
    Matrix m1, m2, m3;
    m1.get_input();
    m2.get_input();
    if(check(m1, m2))
    {
        m3 = m1 + m2;
        m3.display();
    }
    else
        cout << "Matrices don't have equal rows and columns.";
    return 0;
}
