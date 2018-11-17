#include <iostream>
using namespace std;
class Box 
{
   public:
	double length;//data memeber to store the length of a box
        double breadth;//data memeber to store the breadth of a box
        double height;//data member to store the height of a box
        //member functions
        double getVolume(void)
	{
		return length*breadth*height;
	}
        void setLength(double len)
	{
  	        length=len;
	}
        void setBreadth(double bre)
	{
		breadth=bre;
	}
        void setHeight(double hei)
	{
 	        height = hei;
	}
};
// Main function for the program
int main() 
{
   Box Box1;//an object Box1 of type Box is declared
   Box Box2;//an object Box2 of type Box is declared
   double volume = 0.0;//variable to store the volume of a box
   //specifications of Box1
   Box1.setLength(6.0); 
   Box1.setBreadth(7.0); 
   Box1.setHeight(5.0);
   //specifications of Box2
   Box2.setLength(12.0); 
   Box2.setBreadth(13.0); 
   Box2.setHeight(10.0);
   volume=Box1.getVolume();//volume of Box1 is determined
   cout<<"Volume of Box1 is "<<volume<<"cubic units\n";//and printed
   volume=Box2.getVolume();//volume of Box2 is determined
   cout<<"Volume of Box2 is "<<volume<<"cubic units\n";//and printed
   return 0;
}
