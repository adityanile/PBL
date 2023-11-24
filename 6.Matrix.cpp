#include <iostream>
using namespace std;
class matrix
{
    int r1, r2, c1, c2;
    string l;
    int **a;
    int **b;

public:
    matrix(int R1, int C1, int R2, int C2)
    {

        r1 = R1;
        r2 = R2;
        c1 = C1;
        c2 = C2;
        a = new int *[r1];
        b = new int *[r2];

        for (int i = 0; i < r1; i++)
        {
            a[i] = new int[c1];
        }
        for (int i = 0; i < r2; i++)
        {

   b[i] = new int[c2];
        }
        l = "---------------------------------------------------------\n";
    }
    void input();
    void display();
    void access(int r, int c);
    void add();
    void sub();
};
void matrix::access(int r, int c)
{
    string *msg;
    try
    {
        if (r >= r1 || c >= c1)
            throw msg;
        else
            cout << "Referred element is found " << a[r][c] << endl;
    }
    catch (string *msg)
    {
        cout << "Referred element cannot be accessed, exception handled" << endl;
        return;
    }
}
void matrix::input()
{
    cout << l;
    cout << "Enter input for Matrix A " << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Enter for A" << i << j << endl;
            cin >> a[i][j];
        }
    }
    cout << l;
    cout << "Enter input for Matrix B " << endl;
 for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Enter for B" << i << j << endl;
            cin >> b[i][j];
        }
    }
}
void matrix::display()
{
    cout << l;
    cout << "\tMatrix A" << endl;
    for (int i = 0; i < r1; i++)
    {
        cout << "| ";
        for (int j = 0; j < c1; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << l;
    cout << "\tMatrix B" << endl;
    for (int i = 0; i < r2; i++)
    {
        cout << "| ";
        for (int j = 0; j < c2; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << l;
}
void matrix::add()
{
    string msg;
    try
    {
        if (r1 == r2 && c1 == c2)
        {
            int addition[r1][c1];
            for (int i = 0; i < r1; i++)
            {

   for (int j = 0; j < c1; j++)
                {
                    addition[i][j] = a[i][j] + b[i][j];
                }
            }
            cout << "\tAddition matrix" << endl;
            for (int i = 0; i < r1; i++)
            {
                cout << "| ";
                for (int j = 0; j < c1; j++)
                {
                    cout << addition[i][j] << " ";
                }
                cout << "|\n";
            }
        }
    }
    catch (string &msg)
    {
        cout << "Exception occurred. \nMatrix cannot be added as different rows and cols " << endl;
    }
}
void matrix::sub()
{
    string msg;
    try
    {
        if (r1 == r2 && c1 == c2)
        {
            int subs[r1][c1];
            for (int i = 0; i < r1; i++)
            {

                for (int j = 0; j < c1; j++)
                {
                    subs[i][j] = a[i][j] - b[i][j];
                }
            }
            cout << "\tSubtraction matrix" << endl;
            for (int i = 0; i < r1; i++)
            {
                cout << "| ";
                for (int j = 0; j < c1; j++)
                {
                    cout << subs[i][j] << " ";
               }
                cout << "|\n";
            }
        }
    }
    catch (string &msg)
    {
        cout << "Exception occurred. \nMatrix cannot be subtracted as different rows and cols " << endl;
    }
}
int main()
{
    int r1, r2, c1, c2;
    cout << "Enter the size of both matrices" << endl;
    cout << "R1: ";
    cin >> r1;
    cout << "C1: ";
    cin >> c1;
    cout << "R2: ";
    cin >> r2;
    cout << "C2: ";
    cin >> c2;
    matrix M(r1, c1, r2, c2);

    string space = "---------------------------------------------------------\n";
    while (1)
    {
        int ch;
        cout << space << space;
        cout << "Enter the choice:" << endl;
        cout << "1. Input values \n2. Display both matrices \n3.Add \n4. Subtract \n5. Access element by index \n6. Exit" << endl;
        cin >> ch;
        cout << space;
        switch (ch)
        {
        case 1:
            M.input();
            break;

        case 2:
            M.display();
            break;
     case 3:
            M.add();

            break;

        case 4:
            M.sub();
            break;

        case 5:
        {
            int rows, cols;
            cout << "Enter the rows and cols: ";
            cin >> rows >> cols;
            M.access(rows, cols);
        }
        break;

        case 6:
            exit(0);

        default:
            cout << "Invalid input please try again." << endl;
        }
    }
    return 0;
}
