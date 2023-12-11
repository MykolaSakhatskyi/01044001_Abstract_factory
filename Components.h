#pragma once
#include<iostream>
#include<string>
using namespace std;


class Components {
public:
	virtual string ToString() = 0;
	virtual ~Components() {};
};


class Body : public Components {
};

class Wheels : public Components {
};

class Brand : public Components {
};

class Engine : public Components {
};

class Transmission : public Components {
};

class Price : public Components {
};

class Gasoline : public Engine
{
public:
	string ToString()
	{
		return "Gasoline - capacity 1.6 liters";
	}
};

class Audi : public Brand
{
public:
	string ToString()
	{
		return "Audi";
	}
};

class Sedan : public Body
{
public:
	string ToString()
	{
		return "Sedan";
	}
};

class Diesel2 : public Engine
{
public:
	string ToString()
	{
		return "Diesel - capacity 2.0 liters";
	}
};

class Diesel3 : public Engine
{
public:
	string ToString()
	{
		return "Diesel - capacity 3.2 liters";
	}
};

class Electric : public Engine
{
public:
	string ToString()
	{
		return "Electric";
	}
};

class Bridgestone20 : public Wheels
{
public:
	string ToString()
	{
		return "Bridgestone 20 inches";
	}
};

class Bridgestone18 : public Wheels
{
public:
	string ToString()
	{
		return "Bridgestone 18 inches";
	}
};

class Nissan : public Brand
{
public:
	string ToString()
	{
		return "Nissan";
	}
};
class Crossover : public Body
{
public:
	string ToString()
	{
		return "Crossover";
	}
};

class Automatic : public Transmission
{
public:
	string ToString()
	{
		return "Automatic";
	}
};

class Michelin17 : public Wheels
{
public:
	string ToString()
	{
		return "Michelin 17 inches";
	}
};

class Michelin22 : public Wheels
{
public:
	string ToString()
	{
		return "Michelin 22 inches";
	}
};

class Manualy : public Transmission
{
public:
	string ToString()
	{
		return "Manualy";
	}
};

class AudiStandartPrice : public Price
{
public:
	string ToString()
	{
		return "33000 $";
	}
};

class AudiMaxPrice : public Price
{
public:
	string ToString()
	{
		return "38000 $";
	}
};

class NissanStandartPrice : public Price
{
public:
	string ToString()
	{
		return "41000 $";
	}
};

class NissanMaxPrice : public Price
{
public:
	string ToString()
	{
		return "47000 $";
	}
};
