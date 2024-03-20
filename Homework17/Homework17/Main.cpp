#include <iostream>
#include <string>
#include <cmath>

//Self class
class SelfClass
{
	//Private field
private:
	int value;
	std::string desc;
public:
	//Constructor
	SelfClass(int value = 0, std::string desc = "") : value(value), desc(desc) {}
	//Getters
	int getValue()	{ return value;	}
	std::string getDesc() { return desc; }
};
//class Vector
class Vector
{
public:
	Vector()
	{}
	Vector(double _x, double _y, double _z) : x(_x), y(_y), z(_z)
	{}
	void Show()
	{
		std::cout << "\n" << x << " " << y << " " << z;
	}
	//call back length Vector where A(0,0,0) and B(x,y,z)
	double length()
	{
		return sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	}
private:
	double x = 0;
	double y = 0;
	double z = 0;
};


int main()
{
	//create test element class
	SelfClass sc(15, "testString");
	//output data console
	std::cout << "Value: " << sc.getValue() << std::endl << "Description: " << sc.getDesc() << std::endl;
	//Create element class vector
	Vector v(2, 4, 3);
	//print all coordinates
	v.Show();
	//print length vector
	std::cout << std::endl << v.length();
	return 0;
}