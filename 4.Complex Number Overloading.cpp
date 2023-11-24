
#include <iostream>
using namespace std;
class complex
{
    int real, imag;

public:
    complex()
    {
        real = imag = 0;
    }
    void input();
    void display();
    complex operator+(complex x);
    complex operator-(complex y);
    friend istream &operator>>(istream &in, complex &res); 
    friend ostream &operator<<(ostream &out, complex &res);
    complex operator*(complex z);
};
complex complex ::operator*(complex z)
{
    complex res;
    res.real = (real * z.real) - (imag * z.imag);
    res.imag = (real * z.imag) + (imag * z.real);
    return res;
}
complex complex::operator+(complex x)
{
    complex res;
    res.real = x.real + real;
    res.imag = x.imag + imag;
    return res;
}
complex complex::operator-(complex y)
{
    complex res;
    res.real = real - y.real;
    res.imag = imag - y.imag;
    return res;
}
istream &operator>>(istream &in, complex &res) // as both class are stored in outer space & is necessary
{
    cout << "Enter the value real number " << endl;
    in >> res.real;
    cout << "Enter the value of imaginary number: " << endl;
    in >> res.imag;
    return in;
}
ostream &operator<<(ostream &out, complex &res) // as both class are stored in outer space & is necessary
{
    out << res.real;
    cout << " + ( ";
    out << res.imag;
    cout << " )i" << endl;
    return out;
}
void complex::input()
{
    cout << "Enter the value of real number= " << endl;
    cin >> real;
    cout << "Enter the value of imaginary number: " << endl;
    cin >> imag;
}
void complex::display()
{
    cout << real << " + " << imag << "i" << endl;
}
int main()
{
    complex c1, c2;
    cout << "Enter number for A" << endl;
    cin >> c1; //	c1.input();
    cout << "Enter number for B" << endl;
    cin >> c2; //	c2.input();
    int ch;
    while (1)
    {
        cout << "Choose the operation " << endl
             << "1. Add" << endl
             << "2. Subtract" << endl
             << "3. Multiply" << endl
             << "4. Exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
        {
            complex c3;
            c3 = c1 + c2; //	c3 = c1+c2; // c1.operator(c2);
            cout << "Result = ";
            cout << c3; // c3.display();
        }
        break;

        case 2:
        {
            complex c4;
            c4 = c1 - c2;
            cout << "Result = ";
            cout << c4; // c4.display();
        }
        break;
        case 3:
        {
            complex result;
            result = c1 * c2;
            cout << result << endl;
        }
        break;

        case 4:
            exit(0);

        default:
            cout << "Invalid Input!!" << endl;
        }
    }

    return 0;
}

