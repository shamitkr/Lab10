//point.cpp
#include <iostream>
using namespace std;
// class Point represents a two-dimensional point
class Point
{
	private://private data members x,y represent coordinates of the point
	int x,y;
	public:
	Point()//default class constructor(with no arguments)
	{
		x=0;
		y=0;
	}//class constructor sets X, Y to zero when no values are specified
	Point(int xval,int yval)//class constructor that sets the coordinates x,y to the values xval,yval
	{
		x=xval;
		y=yval;
	}//class constructor sets X, Y to given values xval, yval
	void Move(int dx,int dy)//member function for moving a point by dx,dy
	{
 		x+=dx;
		y+=dy;
	}//member function Move increases the x coordinate by dx and the y coordinate by dy
	//member functions for getting values of x,y
	int Get_x() const
	{
		return x;
	}// Get_x returns the value of the x coordinate
	int Get_y() const
	{
		return y;
	}//Get_y returns the value of the y coordinate
	void Set_x(int xval)
	{
		x=xval;
	}//Set_x sets the value of x coordinate to xval
	void Set_y(int yval)
	{
		y=yval;
	}//Set_y sets the value of y coordinate to yval 
	void print()//declaration of the member function print to print the coordinate
	{
		cout<<"("<<x<<","<<y<<")";
	}
}; 
class Rectangle 
{
	private:
	Point bottomLeft;
	Point topRight;
	Point topLeft;
	Point bottomRight; 
	public:
	Rectangle()
	{
		bottomLeft.Set_x(0);
		bottomLeft.Set_y(0);
		topRight.Set_x(1);
		topRight.Set_y(1);
		topLeft.Set_x(0);
		topLeft.Set_y(1);
		bottomRight.Set_x(1);
		bottomRight.Set_y(0);
	}
	Rectangle(Point p1,Point p2)
	{
		bottomLeft.Set_x(p1.Get_x());
		bottomLeft.Set_y(p1.Get_y());
		topRight.Set_x(p2.Get_x());
		topRight.Set_y(p2.Get_y());
		topLeft.Set_x(p1.Get_x());
		topLeft.Set_y(p2.Get_y());
		bottomRight.Set_x(p2.Get_x());
		bottomRight.Set_y(p1.Get_y());
	}
	void print()
	{
		cout<<"The four corners of the rectangle formed are ";
		bottomLeft.print();
		cout<<", ";
		bottomRight.print();
		cout<<", ";
		topLeft.print();
		cout<<", ";
		topRight.print();
		cout<<endl;
	}
	int area()
	{
		int s1=side1();
		int s2=side2();
		return s1*s2;
	}
	private:
	int side1()
	{
		int x1=bottomLeft.Get_x();
		int x2=bottomRight.Get_x();
		return x2-x1;
	}
	int side2()
	{
		int y1=bottomLeft.Get_y();
		int y2=topLeft.Get_y();
		return y2-y1;
	}
};	
//Testing classes Point and Rectangle*/
int main()
{
	//Declaring a point using default class constructor (x = y = 0):
	Point p1;
	cout<<"The x value for p1 is "<<p1.Get_x()<<endl;
	cout<<"The y value for p1 is "<<p1.Get_y()<<endl;
	//Declaring a point with coordinates x = 2, y = 3:	
 	Point p2(2,3);
	cout<<"The x value for p2 is "<<p2.Get_x()<<endl;
	cout<<"The y value for p2 is "<<p2.Get_y()<<endl;
	//Moving point p2 by (1, -1):
	p2.Move(1,-1);
 	cout<<"After movint the point:"<<endl;
	cout<<"The x value for p2 is "<<p2.Get_x()<<endl;
	cout<<"The y value for p2 is "<<p2.Get_y()<<endl;
	cout<<"Point p1 is ";
	p1.print();
	cout<<endl;
	cout<<"Point p2 is ";
	p2.print();
	cout<<endl;
//Lab 7 Exercises 4.2, 4.3. Testing of the class Rectangle goes here:  
	Rectangle rect1;
	rect1.print();
	cout<<"Area of the rectangle is "<<rect1.area()<<" square units\n";
	Rectangle rect2(p1,p2);
	rect2.print();
	cout<<"Area of the rectangle is "<<rect2.area()<<" square units\n";
  return 0;
}
