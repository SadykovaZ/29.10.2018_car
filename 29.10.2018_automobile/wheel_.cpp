#include "wheel_.h"
wheel_::wheel_(double diametr, string type)
{
	setDiametr(diametr);
	setType(type);
}

void wheel_::setDiametr(double diametr)
{
	if (diametr < 13)
		diametr = 13;
	this->diametr = diametr;
}

void wheel_::setType(string type)
{
	this->type = type;
}

double wheel_::getDiametr() const
{
	return this->diametr;
}

string wheel_::getType() const
{
	return this->type;
}

string wheel_::getInfo() const
{
	string res = "Diametr of wheel = ";
	res += to_string(this->diametr);
	res += "\n type of wheel = " + type;	
	return res;
}

ostream & operator<<(ostream & os, const wheel_ & obj)
{
	os << obj.getInfo();
	return os;
}
