
#include <iostream>
#include <iomanip>
using namespace std;

class Shape
{
    public:
    	virtual void area()		// Virtual function
	{
	}
};
class Rect:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Rect area()";
	}
};
class Circle:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Circle area()";
	}
};
class Triangle:public Shape
{
    public:
	void area()
	{
		cout<<endl<<"In Triangle area()";
	}
};

int main()
{
	Shape *s;

	Rect rob;
	s=&rob;;
	s->area();

	Circle cob;
	s=&cob;;
	s->area();

	Triangle tob;
	s=&tob;;
	s->area();

	return 0;
}
