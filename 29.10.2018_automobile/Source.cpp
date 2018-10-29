#include"car_.h"
#include<iostream>


using namespace std;
void main()
{
	
	car_ c("audi",colors::GREEN);
	
	//string cl=c.getColor();
	//cl.clear();

	c.getEngine().setVolume(2.8);
	cout<<c.getWheel(0).getInfo();
	c.setColor(colors::GREEN);
	cout << c;

	car_ newCar("hyundai");
	newCar = c;
	cout << newCar;
	system("pause");
}