#pragma once
#include <iostream>
#include "Components.h"
using namespace std;


class Car {
	shared_ptr <Body>          body;
	shared_ptr <Engine>        engine;
	shared_ptr <Brand>         brand;
	shared_ptr <Wheels>        wheels;
	shared_ptr <Transmission>  transmission;
	shared_ptr <Price>         price;
public:
	Car() {
		body = nullptr;
		engine = nullptr;
		brand = nullptr;
		wheels = nullptr;
		transmission = nullptr;
		price = nullptr;
	}
	virtual ~Car() {
	}
	shared_ptr <Body> GetBody() {
		return (body);
	}
	void SetBody(shared_ptr <Body> pBody) {
		body = (pBody);
	}
	shared_ptr < Engine> GetEngine() {
		return (engine);
	}
	void SetEngine(shared_ptr < Engine> pEngine) {
		engine = (pEngine);
	}
	shared_ptr < Brand> GetBrand() {
		return (brand);
	}
	void SetBrand(shared_ptr < Brand> pBrand) {
		brand = (pBrand);
	}
	shared_ptr <Wheels> GetWheels() {
		return (wheels);
	}
	void SetWheels(shared_ptr <Wheels> pWheels) {
		wheels = (pWheels);
	}
	shared_ptr <Transmission> GetTransmission() {
		return (transmission);
	}
	void SetTransmission(shared_ptr <Transmission> pTransmission) {
		transmission = (pTransmission);
	}
	shared_ptr <Price> GetPrice() {
		return (price);
	}
	void SetPrice(shared_ptr <Price> pPrice) {
		price = (pPrice);
	}
};