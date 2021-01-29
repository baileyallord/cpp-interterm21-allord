#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  //declare array to store positive integers
  int numberArray[10];
  //variables used to store integers, iterate through array, and check if array is full
  int tempVal;
  int i = 0;
  bool notFull = true;

  //get user input
  cout << "Enter up to ten POSITIVE integers." << endl;
  cin >> tempVal;

  //while the array is not full
  while (notFull) {
    //if user input is positive, add to numberArray and move to next index
    if (tempVal >= 0) {
      numberArray[i] = tempVal;
      i++;
      //if array is full, exit while loop
      if (i == 10) {
        notFull = false;
      }
    }
    //get next user input
    cin >> tempVal;
  }

  //notify user that array is full
  cout << endl << "numberArray is full" << endl << endl;

  //print out contents of array
  for (int j = 0; j < (sizeof(numberArray) / sizeof(numberArray[0])); j++) {
    cout << "Index " << j << ": " << numberArray[j] << endl;
  }

  return 0;
}
