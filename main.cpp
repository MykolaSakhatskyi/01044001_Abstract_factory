#include<iostream>
#include "Components.h"
#include "CarConfigurator.h"
#include "Car.h"
#include <memory>
using namespace std;

void PrintPcConfiguration(const string& configName, shared_ptr <Car> car) {
	cout << "---------- " << configName << " ----------" << endl;
	cout << "Brand: " << car->GetBrand()->ToString() << endl;
	cout << "Body: " << car->GetBody()->ToString() << endl;
	cout << "Engine: " << car->GetEngine()->ToString() << endl;
	cout << "Wheels: " << car->GetWheels()->ToString() << endl;
	cout << "Transmission: " << car->GetTransmission()->ToString() << endl;
	cout << "Price: " << car->GetPrice()->ToString() << endl;
}

int main() {
	{
		shared_ptr <CarConfigurator> configurator = make_shared<CarConfigurator>();

		shared_ptr <Car> car1 = make_shared<Car>();
		configurator->SetCarFactory(make_shared<NissanCarStandartFactory>());
		configurator->Configure((car1));
		PrintPcConfiguration("Nissan standart configuration", car1);

		shared_ptr <Car> car2 = make_shared<Car>();
		configurator->SetCarFactory(make_shared <NissanCarElectricFactory>());
		configurator->Configure(car2);
		PrintPcConfiguration("Nissan electric configuration", (car2));

		shared_ptr <Car> car3 = make_shared<Car>();
		configurator->SetCarFactory(make_shared <AudiCarStandartFactory>());
		configurator->Configure(car3);
		PrintPcConfiguration("Audi standart configuration", (car3));

		shared_ptr <Car> car4 = make_shared<Car>();
		configurator->SetCarFactory(make_shared <AudiCarMAXFactory>());
		configurator->Configure(car4);
		PrintPcConfiguration("Audi MAX configuration", (car4));
	}
	return 0;
}