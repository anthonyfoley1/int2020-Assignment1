//Author: Anthony Foley 2313898
//CPSC-298-07
//employee pay problem

#include <iostream>
using namespace std;

int main(int argc,char **argv) {
  const int wage=16;
  const int overtimeWage=24;
  const int medical=10;
  const double social=0.06;
  const double federal=0.14;
  const double state=0.05;
  double grossPay=wage*0;
  double netPay=0;
  double overtime=0;
  double taxes=0;
  double hours;
  //Here I declare all of the variables that I will need later on..

  cout<<"\n"<<"How many hours did you work this week?"<<endl;
  cin>>hours;
  grossPay=hours*wage;
  //Here I ask the user for their work week..

  if (hours>40) { //this is used to see if I need to calculate overtime wages
    overtime=(hours-40)*overtimeWage;
    grossPay=overtime+(40*wage);
  }

  else { //if the work week doesn't exceed 40, then I can assume no overtime wage
    grossPay=hours*wage;
  }

  taxes=medical+(social*grossPay)+(federal*grossPay)+(state*grossPay);
  cout<<"Your gross pay is: $"<<grossPay<<endl;
  cout<<"You've been withheld $"<<medical<<" for medical insurance."<<endl;
  cout<<"You've been withheld $"<<social*grossPay<<" for social security taxes."<<endl;
  cout<<"You've been withheld $"<<federal*grossPay<<" for federal income taxes."<<endl;
  cout<<"You've been withheld $"<<state*grossPay<<" for state income taxes."<<endl;
  cout<<"\n"<<"Your total taxes are:  $"<<taxes<<endl;
  cout<<"Your net pay is:  $"<<grossPay-taxes<<endl;
  //I simply multiple the tax rates by the gross rate then subract them from the total



    return 0;
  }
