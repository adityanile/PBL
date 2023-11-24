#include <iostream>
using namespace std;
class shape
{

public:
    double a, b;
    //	shape()
    //	{
    //		a=b=0;
    //	}

    virtual void get_data() = 0;
    virtual void area() = 0;
};
class rectangle : shape
{
    double arr;

public:
    void area()
    {
        arr = a * b;
        cout << "\tArea of rectangle is: " << arr << endl << endl;
    }
    void get_data()
    {
        cout << "\tEnter length: ";
        cin >> a;
        cout << "\n\tEnter breadth: ";
        cin >> b;
    }
};
class triangle : shape
{
    double arr;

public:
    void area()
    {
        arr = 0.5 * a * b;
        cout << "\t\tArea of triangle is: " << arr << endl << endl;
    }
    void get_data()
    {
        cout << "\tEnter height: ";
        cin >> a;
        cout << "\n\tEnter breadth: ";
        cin >> b;
    }

};
int main()
{
    int ch;
    while (1)
    {
    	cout<<"\tCalculate Area"<<endl;
        cout << "\tChoose shape: \n1. Rectangle \t2. Triangle \t3. Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            rectangle r;
            r.get_data();
            r.area();
        }
        break;

        case 2:
        {
            triangle t;
            t.get_data();
            t.area();
        }
        break;

        case 3:
            exit(0);
            break;

        default:
            cout << "Invalid input" << endl;
        }
    }
    return 0;
}

