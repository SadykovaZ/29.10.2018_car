#pragma once
#include"engine_.h"
#include"wheel_.h"
enum colors {
	WHITE,
	BLACK,
	RED,
	GREEN
};
class car_
{
	engine_ engine;
	wheel_ wheels[4];
	string model;
	colors color;
	int year;
public:
	car_(string model = "BMW", colors c=colors::WHITE, int year= 2002, double engine_volume = 1.8, int engine_countCylinder = 4, string engine_type = "gas", double wheel_diametr = 14, string wheel_type = "summer");
	void setModel(string CarModel);
	void setColor(colors c);
	void setYear(int CarYear);
	void setEngine(engine_& engine);
	void setWheel(wheel_& wheel, int index);
	string getModel() const { return this->model; }
	colors getColor() const { return this->color; }
	int getYear() const { return this->year; }
	engine_ getEngine() const;
	engine_& getEngine();
	wheel_ getWheel(int index) const;
	wheel_&getWheel(int index);
	string getCarInfo() const;

};
ostream&operator<<(ostream&os, const car_&obj);
