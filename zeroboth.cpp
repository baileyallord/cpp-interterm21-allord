#include <iostream>
#include <string>

using namespace std;

//function that uses pointers to change both integer variable values to zero
void zeroBoth(int* num1Pointer, int* num2Pointer) {
  *num1Pointer = 0;
  *num2Pointer = 0;
}

int main(int argc, char **argv) {
  //get user input for both numbers and store in integer variable
    //assign reference variable to store pointer to memory location of user input variable
  int num1;
  cout << "Enter Number 1: ";
  cin >> num1;
  int* num1Pointer = &num1;

  int num2;
  cout << "Enter Number 2: ";
  cin >> num2;
  int* num2Pointer = &num2;

  //informs user of original integer input, when the function is being performed, and the new integer values after function execution
  cout << "Number 1 is originally: " << num1 << endl;
  cout << "Number 2 is originally: " << num2 << endl;
  cout << endl << "Executing 'zeroBoth' function." << endl;
  zeroBoth(num1Pointer, num2Pointer);
  cout << endl << "Number 1 is now: " << num1 << endl;
  cout << "Number 2 is now: " << num2 << endl;

  return 0;
}
