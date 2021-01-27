#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  int maxCapacity;
  int attendance;
  int additionalPeople;

  cout << "Enter the maximum room capacity: ";
  cin >> maxCapacity;

  cout << "Enter the number of people in attendance: ";
  cin >> attendance;

  if (attendance <=  maxCapacity) {
    additionalPeople = maxCapacity - attendance;
    cout << "It is legal to hold the meeting." << endl;
    cout << additionalPeople << " more people may legally attend." << endl;
  }
  else {
    additionalPeople = attendance - maxCapacity;
    cout << "The meeting cannot be held as planned due to fire regulations." << endl;
    cout << additionalPeople << " must be excluded in order to meet the fire regulations." << endl;
  }
  return 0;
}
