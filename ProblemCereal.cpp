//Author: Anthony Foley 2313898
//CPSC-298-07
//cereal problem

#include <iostream>
using namespace std;

int main(int argc,char **argv) {
	const double metricTon=35273.92; // I want a metricton to be the same value
  double cereal;
  double metricCereal;
  double boxes;
  //Here I declare the values that I'll use later on..

  cout<<"Please enter the cereal mass in ounces: "<<endl;
  cin>>cereal;
  //Here I get the user input for the cereal weight

  metricCereal=cereal/metricTon; //This helps calculate the weight of the cereal in terms of metric tons
  boxes=metricTon/cereal; //This helps calculate how many boxes you'd need to have 1 ton

  cout<<"The cereal box weighs "<<metricCereal<<" in Metric tons."<<endl;
  cout<<"\n"<<"You will need "<<boxes<<" box(es) to have exactly one Metric ton."<<endl;

	return 0;
}
