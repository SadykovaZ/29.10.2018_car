#include "car_.h"
car_::car_(string model, colors color, int year, double engine_volume, int engine_countCylinder, string engine_type, double wheel_diametr, string wheel_type)
{
	setModel(model);
	setColor(color);
	setYear(year);
	engine_ tmp(engine_volume,  engine_countCylinder, engine_type);
	setEngine(tmp);
	wheel_ wheel_tmp(wheel_diametr, wheel_type);
	for (size_t i = 0; i < 4; i++)
	{
		setWheel(wheel_tmp,i);
	}	
}
void car_::setModel(string CarModel)
{
	this->model = CarModel;
}
void car_::setColor(colors c)
{
	this->color = c;
}
void car_::setYear(int CarYear)
{
	this->year = CarYear;
}
void car_::setEngine(engine_ & engine)
{
	this->engine = engine;
}
void car_::setWheel(wheel_ & wheel, int index)
{
	wheels[index] = wheel;	
}
engine_ car_::getEngine() const
{
	return this-> engine;
}
engine_& car_::getEngine()
{
	return this->engine;
}
wheel_ car_::getWheel(int index) const
{
	return wheels[index];
}
wheel_& car_::getWheel(int index) 
{
	return wheels[index];
}

string car_::getCarInfo() const
{
	string res = "Car model = " + this->model;
	res += "\n car color = " ;
	switch (color)
	{
	case WHITE:
		res+= "white";
		break;
	case RED:
		res += "red";
		break;
	case GREEN:
		res += "green";
		break;
	case BLACK:
		res += "black";
		break;	
	}
	res += "\ car year = " + to_string(this->year);
	res += "\n" + engine.getInfo();
	for (int i = 0; i < 4; i++)
	{
		res += "\n" + wheels[i].getInfo();
	}
	return res;
}
ostream & operator<<(ostream & os, const car_ & obj)
{
	os << obj.getCarInfo();
	return os;
}
