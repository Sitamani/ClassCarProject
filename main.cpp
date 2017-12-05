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

const int LotSpase = 10;
Car Lot[LotSpase];

void setcarData(Car &theCar);
void displaycarData(Car &theCar);

int main()
{
	for (int i = 0; i < LotSpase; i++)
	{
		setcarData(Lot);
		displaycarData(car);
	}
}
//~~DEBUGSTOP~~
//TODO: Make and array to store 10 cars 
//gets the make and model
void setcarData(Car &theCar)
{
	cout << "plese input a Make of the car.\n";
	getline(cin, theCar.Make);
	cout << "plese input a Model of the car.\n";
	getline(cin, theCar.Model);
	cout << "plese input a Year of the car.\n";
	cin >> theCar.Year;
	cout << "is your car a new car.\n Yes=1:\n No=0\n";
	cin >> theCar.newcar;
	cout << "plese input a estmaed Price of the car.\n";
	cin >> theCar.Price;
}
//Displays the in put info
void displaycarData(Car &theCar)
{
	cout << "Make:" << theCar.Make << endl;
	cout << "Model:" << theCar.Model << endl;
	cout << "Year:" << theCar.Year<< endl;
	cout << "Price:" << theCar.Price << endl;
	if (theCar.newcar = 1)
	{
		cout << "the car is new";
	}
	else if (theCar.newcar = 0)
	{
		cout << "the car is not new";
	}
}
