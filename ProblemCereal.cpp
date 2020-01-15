//Author: Anthony Foley 2313898
//CPSC-298-07
//cereal problem

#include <iostream>
using namespace std;

int main() {
	double metricTon;
  double cereal;
  double metricCereal;
  double boxes;

  metricTon=35273.92;

  cout<<"Please enter the cereal mass in ounces: "<<endl;
  cin>>cereal;

  metricCereal=cereal/metricTon;
  boxes=metricTon/cereal;

  cout<<"The cereal box weighs "<<metricCereal<<" in Metric tons."<<endl;
  cout<<"\n"<<"You will need "<<boxes<<" box(es) to have exactly one Metric ton."<<endl;

	return 0;
}
