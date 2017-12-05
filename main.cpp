#include <iostream>
#include <string>
using namespace std;
struct Car
{
	string Make;
	string Model;
	int Year;
	bool newcar;
	double Price;
};

//Array to store 10 cars.
const int LotSpace = 10;
Car Lot[LotSpace];

//FUNCTIONS
void setcarData(Car &theCar);
void displaycarData(Car &theCar);

int main()
{
	for (int i = 0; i < LotSpace; i++)
	{
		setcarData(Lot[i]);
		displaycarData(Lot[i]);
	}
	return 0;
}
//~~DEBUGSTOP~~
//Get user input to set car data.
void setcarData(Car &theCar)
{
	cout << "\nPlease input a make of the car.\n";
	getline(cin, theCar.Make);
	cout << "Please input a model of the car.\n";
	getline(cin, theCar.Model);
	cout << "Please input a year of the car.\n";
	cin >> theCar.Year;
	cout << "Is your car a new car?\n Yes=1:\n No=0\n";
	cin >> theCar.newcar;
	cout << "Please input the estimated price of the car.\n";
	cin >> theCar.Price;
}
//Displays the input info
void displaycarData(Car &theCar)
{
	cout << "Make:" << theCar.Make << endl;
	cout << "Model:" << theCar.Model << endl;
	cout << "Year:" << theCar.Year<< endl;
	cout << "Price:" << theCar.Price << endl;
	if (theCar.newcar = 1)
	{
		cout << "The car is new.";
	}
	else if (theCar.newcar = 0)
	{
		cout << "The car is not new.";
	}
}
