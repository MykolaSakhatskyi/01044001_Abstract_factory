#pragma once
#include <iostream>
#include "Car.h"
#include "Components.h"
#include "Factories.h"
using namespace std;


class CarConfigurator
{

	shared_ptr <ICarFactory> carFactory;
public:
	CarConfigurator() {
		carFactory = nullptr;
	}
	virtual ~CarConfigurator() {
	}
	shared_ptr <ICarFactory> GetCarFactory() {
		return (carFactory);
	}
	void SetCarFactory(shared_ptr <ICarFactory> carCurrentFactory) {
		carFactory = (carCurrentFactory);
	}

	void Configure(shared_ptr <Car> car)
	{
		car->SetBody((carFactory->CreateBody()));
		car->SetBrand((carFactory->CreateBrand()));
		car->SetWheels((carFactory->CreateWheels()));
		car->SetTransmission((carFactory->CreateTransmission()));
		car->SetEngine((carFactory->CreateEngine()));
		car->SetPrice((carFactory->CreatePrice()));
	}
};
