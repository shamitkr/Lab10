#include <iostream>
using namespace std;
class ZooAnimal  
{
	private:
        char *name;
        int cageNumber;
        int weightDate;
        int weight;
        public:
	void Create(char* nname,int num,int date,int wt)//create function
	{
		name=nname;
		cageNumber=num;
		weightDate=date;
		weight=wt;
	}		
        void Destroy()//destroy function
	{
		delete []name;
	}
        char* reptName()//member function to return the animal's name
	{
		return name;
	}
	//if declared outside the class the function header would be 
	//int ZooAnimal::daysSinceLastWeighted(int today)
        int daysSinceLastWeighed(int today)//member function to return the number of days since the animal was last weighed
	{
		int startday,thisday=0;
		thisday=today/100*30+(today-(today/100)*100);
		startday=weightDate/100*30+(weightDate-(weightDate/100)*100);
		if(thisday<startday) 
		thisday+=360;
		return(thisday-startday);
	}
};
int main()
{
	ZooAnimal bozo;
        bozo.Create("Bozo",408,1027,400);
	cout<<"This animal's name is "<<bozo.reptName()<<endl;
        bozo.Destroy();
	return 0;
}
