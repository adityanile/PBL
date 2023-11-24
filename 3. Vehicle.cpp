 #include <iostream>
using namespace std;
class vehicle
{
float mileage;
long long price;
public:
vehicle()
{
mileage = 0;
price = 0;
}
void input();
void display();
};
void vehicle::input()
{
cout << "Enter Mileage(km/lt): " << endl;
cin >> mileage;
cout << endl
<< "Enter Price : ";
cin >> price;
cout << endl;
}
void vehicle::display()
{
cout << "Mileage: " << mileage << endl;
cout << "Price : Rs " << price << endl;
}
class car : vehicle
{
long long ownership_cost;
int warranty, seating_capacity;
string fuel_type;
public:
car()
{
ownership_cost = 0;
warranty = 0;
seating_capacity = 0;
fuel_type = "-";
}
~car()
{
cout << " " << endl;
}
void input_car();
void display_car();
};
void car::input_car()
{
input();
cout << "Enter the ownership cost: " << endl;
cin >> ownership_cost;
cout << "Enter the warranty(by years): " << endl;
cin >> warranty;
cout << "Enter the seating capacity: " << endl;
cin >> seating_capacity;
cout << "Enter the fuel type (diesel or petrol): " << endl;
cin >> fuel_type;
}
void car::display_car()
{
display();
cout << "Ownership cost: Rs " << ownership_cost << endl;
cout << "Warranty(by years): " << warranty << endl;
cout << "Seating capacity: " << seating_capacity << endl;
cout << "Fuel type (diesel or petrol): " << fuel_type << endl;
}
class audi : car
{
string model_type;
public:
audi() {
model_type = "-";
}
~audi()
{
cout << " " << endl;
}
void input_audi();
void display_audi();
};
void audi::input_audi()
{
input_car();
cout << "Enter the model type of Car: " << endl;
cin >> model_type;
}
void audi::display_audi()
{
display_car();
cout << "Model type of the car: " << model_type << endl;
}
class ford : car
{
string model_type;
public:
ford()
{
model_type = "-";
}
~ford()
{
cout << " " << endl;
}
void input_ford();
void display_ford();
};
void ford::input_ford()
{
input_car();
cout << "Enter the model type of Car: " << endl;
cin >> model_type;
}
void ford::display_ford()
{
display_car();
cout << "Model type of the car: " << model_type << endl;
}
class bike : vehicle
{
int no_cylinders, no_gears;
string cooling_type, wheel_type;
float fuel_tank_size;
public:
bike()
{
no_cylinders = 0;
no_gears = 0;
cooling_type = "-";
wheel_type = "-";
fuel_tank_size = 0.0;
}
~bike()
{
cout << " " << endl;
}
void input_bike();
void display_bike();
};
void bike::input_bike()
{
input();
cout << "Enter the Number of cylinders: " << endl;
cin >> no_cylinders;
cout << "Enter the Number of Gears " << endl;
cin >> no_gears;
cout << "Enter the Cooling type(air, liquid or oil): " << endl;
cin >> cooling_type;
cout << "Enter the wheel type(alloys or spokes): " << endl;
cin >> wheel_type;
cout << "Enter the fuel tank size(in inches): " << endl;
cin >> fuel_tank_size;
}
void bike::display_bike()
{
display();
cout << "Number of cylinders: " << no_cylinders << endl;
cout << "Number of Gears " << no_gears << endl;
cout << "Cooling type(air, liquid or oil): " << cooling_type << endl;
cout << "Wheel type(alloys or spokes): " << wheel_type << endl;
cout << "Fuel tank size(in inches): " << fuel_tank_size << endl;
}
class bajaj : bike
{
string make_type;
public:
bajaj()
{
make_type = " ";
}
~bajaj()
{
cout << " " << endl;
}
void display_bajaj();
void input_bajaj();
};
void bajaj::input_bajaj()
{
input_bike();
cout << "Enter the make type: " << endl;
cin >> make_type;
}
void bajaj::display_bajaj()
{
display_bike();
cout << "The make type is " << make_type << endl;
}
class TVS : bike
{
string make_type;
public:
TVS()
{
make_type = " ";
}
~TVS()
{
cout << " " << endl;
}
void display_TVS();
void input_TVS();
};
void TVS::input_TVS()
{
input_bike();
cout << "Enter the make type: " << endl;
cin >> make_type;
}
void TVS::display_TVS()
{
display_bike();
cout << "The make type is " << make_type << endl;
}
int main()
{
cout << "WELCOME TO PRABHAS AUTOMOBILES" << endl
<< endl;
cout << "The details of vehicle:" << endl;
int ch;
cout << "Choose which vehicle you want: " << endl
<< "1. Car" << endl
<< "2. Bike" << endl;
cin >> ch;
switch (ch)
{
case 1:
{
int ch1;
cout << "Which Car do you want " << endl
<< "1. Ford" << endl
<< "2. Audi" << endl;
cin >> ch1;
switch (ch1)
{
case 1:
{
ford F;
F.input_ford();
cout << endl
<< "Displaying details of vehicle:" << endl
<< endl;
;
F.display_ford();
}
break;
case 2:
{
audi A;
A.input_audi();
cout << endl
<< "Displaying details of vehicle:" << endl
<< endl;
;
A.display_audi();
}
break;
default:
cout << "Invalid input!!" << endl;
}
}
break;
case 2:
{
int ch2;
cout << "Which Bike do you want " << endl
<< "1. Bajaj" << endl
<< "2. TVS" << endl;
cin >> ch2;
switch (ch2)
{
case 1:
{
bajaj b1;
b1.input_bajaj();
cout << endl
<< "Displaying details of vehicle:" << endl
<< endl;
b1.display_bajaj();
}
break;
case 2:
{
TVS T1;
T1.input_TVS();
cout << endl
<< "Displaying details of vehicle:" << endl
<< endl;
T1.display_TVS();
}
break;
default:
cout << "Invalid input!!" << endl;
}
}
break;
default:
cout << "Invalid input!!" << endl;
}
return 0;
 }

