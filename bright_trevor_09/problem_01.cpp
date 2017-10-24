//Trevor Bright
//CECS 130-02
//Assignment 09

#include <iostream>
#include <cmath>
using namespace std;

class Vector{
private:
	double x;
	double y;
	double z;
public:
	Vector(double x, double y, double z)
	{
		this->x = x;
		this->y = y;
		this->z = z;
	}
	void display()
	{
		cout << "(" << x << ", " << y << ", " << z << ")"<<endl;
	}
	double getLength()
	{
		return pow(pow(this->x, 2) + pow(this->y, 2) + pow(this->z, 2), 0.5);
	}
	Vector operator+(const Vector& vec)
	{
		Vector v = Vector(this->x + vec.x, this->y + vec.y, this->z + vec.z);
		return v;
	}
	bool operator==(Vector& vec)
	{
		if (abs(getLength())==abs(vec.getLength()))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};

int main()
{
	Vector vector1 = Vector(1,2,3);
	cout << "Vector 1: ";
	vector1.display();
	cout << "Length 1: "<< vector1.getLength() << endl;
	
	Vector vector2 = Vector(4,5,6);
	cout <<"Vector 2: ";
	vector2.display();
	cout<<"Length 2: "<<vector2.getLength()<< endl;
	
	vector1 = vector1+vector2;
	cout <<"Vector 3: ";
	vector1.display();
	cout<<"Length 3: " <<vector1.getLength()<<endl;
	
	return 0;	
}
