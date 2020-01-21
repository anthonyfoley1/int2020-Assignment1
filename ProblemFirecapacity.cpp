//Author: Anthony Foley 2313898
//CPSC-298-07
//fire capacity problem

#include <iostream>
using namespace std;


int main(int argc,char **argv) {
// Here I declare the 2 variables I need use to see if the room is big enough
  int roomCapacity;
  int people;

// Here I ask the user for the room capacity and the # of people in attendence
  cout<<"\n"<<"Please enter the room's capacity: "<<endl;
  cin>>roomCapacity;
  cout<<endl;
  cout<<"Please enter how many people are going to attend:  "<<endl;
  cin>>people;
  cout<<endl;

  // Here I make an IF statement to see if the room follows fire regulations
  if (people<=roomCapacity) {
    cout<<"It is legal to hold the meeting, and you can hold an additional "<<roomCapacity-people<<" person(s)"<<endl;
  }
  // This else statement means that the meeting is too large and we must see how many people should be excluded
  else {
    cout<<"The meeting cannot be held as planned due to fire regulations, "<<people-roomCapacity<<
    " person(s) must be excluded in order to meet regulations."<<endl;
  }





  return 0;
}
