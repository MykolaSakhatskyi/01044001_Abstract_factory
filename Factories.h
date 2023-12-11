#pragma once
#include <iostream>
#include "Components.h"
using namespace std;



class ICarFactory {
public:
	virtual shared_ptr <Body>          CreateBody() = 0;
	virtual shared_ptr <Engine>        CreateEngine() = 0;
	virtual shared_ptr <Brand>         CreateBrand() = 0;
	virtual shared_ptr <Wheels>        CreateWheels() = 0;
	virtual shared_ptr <Transmission>  CreateTransmission() = 0;
	virtual shared_ptr <Price>         CreatePrice() = 0;
};


class NissanCarStandartFactory : public ICarFactory {
public:
	shared_ptr <Body> CreateBody()
	{
		return (make_shared <Sedan>());
	}
	shared_ptr <Engine> CreateEngine()
	{
		return  (make_shared < Gasoline>());
	}
	shared_ptr < Brand> CreateBrand()
	{
		return  (make_shared < Nissan>());
	}
	shared_ptr < Wheels> CreateWheels()
	{
		return  (make_shared < Michelin17>());
	}
	shared_ptr < Transmission> CreateTransmission()
	{
		return  (make_shared < Manualy>());
	}
	shared_ptr < Price> CreatePrice()
	{
		return  (make_shared < NissanStandartPrice>());
	}
};

class NissanCarElectricFactory : public ICarFactory {
public:
	shared_ptr <Body> CreateBody()
	{
		return (make_shared <Sedan>());
	}
	shared_ptr <Engine> CreateEngine()
	{
		return  (make_shared < Electric>());
	}
	shared_ptr < Brand> CreateBrand()
	{
		return  (make_shared < Nissan>());
	}
	shared_ptr < Wheels> CreateWheels()
	{
		return  (make_shared < Bridgestone18>());
	}
	shared_ptr < Transmission> CreateTransmission()
	{
		return  (make_shared < Automatic>());
	}
	shared_ptr < Price> CreatePrice()
	{
		return  (make_shared < NissanMaxPrice>());
	}
};

class AudiCarStandartFactory : public ICarFactory {
public:
	shared_ptr < Body> CreateBody()
	{
		return  (make_shared < Crossover>());
	}
	shared_ptr < Engine> CreateEngine()
	{
		return  (make_shared < Diesel2>());
	}
	shared_ptr < Brand> CreateBrand()
	{
		return  (make_shared <Audi>());
	}
	shared_ptr < Wheels> CreateWheels()
	{
		return  (make_shared < Bridgestone20>());
	}
	shared_ptr < Transmission> CreateTransmission()
	{
		return  (make_shared < Manualy>());
	}
	shared_ptr < Price> CreatePrice()
	{
		return  (make_shared < AudiStandartPrice>());
	}
};

class AudiCarMAXFactory : public ICarFactory {
public:
	shared_ptr < Body> CreateBody()
	{
		return  (make_shared < Crossover>());
	}
	shared_ptr < Engine> CreateEngine()
	{
		return  (make_shared < Diesel3>());
	}
	shared_ptr < Brand> CreateBrand()
	{
		return  (make_shared <Audi>());
	}
	shared_ptr < Wheels> CreateWheels()
	{
		return  (make_shared < Michelin22>());
	}
	shared_ptr < Transmission> CreateTransmission()
	{
		return  (make_shared < Automatic>());
	}
	shared_ptr < Price> CreatePrice()
	{
		return  (make_shared < AudiMaxPrice>());
	}
};
