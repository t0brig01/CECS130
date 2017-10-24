//Trevor Bright
//CECS 130-02
//Assignment 08

#include <iostream>

using namespace std;

class Vector
{
	private:
		double x;
		double y;
		double z;
	public:
		Vector()
		{
			x = 0;
			y = 0;
			z = 0;
		}
		void setComponents(double xs, double ys, double zs)
		{
			x = xs;
			y = ys;
			z = zs;
		}
		void add(Vector v)
		{
			x += v.x;
			y += v.y;
			z += v.z; 
		}
		void display()
		{
			cout << "(" << x <<"," << y << "," << z << ")" << endl;
		}
};

int main ()
{
	Vector v1 = Vector();
	v1.setComponents(1,2,3);
	v1.display();
	Vector v2 = Vector();
	v2.setComponents(4,5,6);
	v2.display();
	v1.add(v2);
	v1.display();
	return 0;
}
