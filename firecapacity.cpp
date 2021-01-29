#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  //variables to store user input and resulting calculations
  int maxCapacity;
  int attendance;
  int additionalPeople;

  //get user input for maximum room capacity and number of people attending
  cout << "Enter the maximum room capacity: ";
  cin >> maxCapacity;

  cout << "Enter the number of people in attendance: ";
  cin >> attendance;

  //if the people attending is less than the room capacity
  if (attendance <=  maxCapacity) {
    additionalPeople = maxCapacity - attendance;
    //notify user that meeting is legal and tell how many more people can attend
    cout << "It is legal to hold the meeting." << endl;
    cout << additionalPeople << " more people may legally attend." << endl;
  }
  //if the people attending is greater than the room capacity
  else {
    additionalPeople = attendance - maxCapacity;
    //notify user that meeting is illegal and tell how many people have to leave in order to hold it
    cout << "The meeting cannot be held as planned due to fire regulations." << endl;
    cout << additionalPeople << " must be excluded in order to meet the fire regulations." << endl;
  }
  return 0;
}
