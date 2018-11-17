#include <iostream>
using namespace std;
class Box 
{
   public:
      double length;//data member to store the length of a box
      double breadth;//data member to store the breadth of a box
      double height;//data memebr to store the height of a box
};
int main() 
{
   Box Box1;//an object Box1 of type Box is declared
   Box Box2;//an object Box2 of type Box is declared
   double volume=0.0;//variable to store the volume of a box
   //specifications of Box1
   Box1.height=5.0; 
   Box1.length=6.0; 
   Box1.breadth=7.0;
   //specifications of Box2
   Box2.height=10.0;
   Box2.length=12.0;
   Box2.breadth=13.0;
   volume=Box1.height*Box1.length*Box1.breadth;//volume of Box1 is determined
   cout<<"Volume of Box1:"<<volume<<"cubic units\n";//and printed
   volume=Box2.height*Box2.length*Box2.breadth;//volume of Box2 is determined
   cout<<"Volume of Box2:"<<volume<<"cubic units\n";//and printed
   return 0;
}
