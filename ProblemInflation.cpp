//Author: Anthony Foley 2313898
//CPSC-298-07
//inflation problem

#include <iostream>
using namespace std;

int main(int argc,char **argv) {
  double itemCost=0;
  double inflation=0;
  double years=0;

  //Here I will ask the user the details of the cost, inflation % and period length
  cout<<"How much does the item cost?(in $)"<<endl;
  cin>>itemCost;
  cout<<"In how many years will the item be purchased?"<<endl;
  cin>>years;
  cout<<"What is the rate of inflation?"<<endl;
  cin>>inflation;

  inflation=1+(inflation/100);//This converts the inflation rate into a 1.0X rate so I can multiply it right away


  for (int i = 0; i < years; i++) { //this multiplies the inflation rate by however many years there is
    itemCost*=inflation;
  }
  cout<<"\n"<<"The item will cost $"<<itemCost<<" in "<<years<<" years."<<endl;





  return 0;
}
