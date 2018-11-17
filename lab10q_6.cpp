#include <iostream>
using namespace std;
enum scale {ounces, kilograms};
class ZooAnimal  
{
	private:
        char *name;
        int cageNumber;
        int weightDate;
        int weight;
	ZooAnimal* mother;
        public:
        void Create(char*,int,int,int); // create function
        void Destroy(); // destroy function 
	void isMotherOf(ZooAnimal* ptr)
	{
		mother=ptr;
	}
        void changeWeight(int pounds);
        void changeWeightDate(int today)
	{
		weightDate=today;
	}
        char* reptName();
        int reptWeight();
        void reptWeight(scale which);
        inline int reptWeightDate()
	{
		return weightDate;
	}
        int daysSinceLastWeighed(int today)
	{
		weightDate=today;
	}
};
