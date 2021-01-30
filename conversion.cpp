#include <iostream>
#include <vector>
#include <string>

using namespace std;

//function to ask for user user input
vector<float> getUserInput() {
  vector<float> userInput;
  float feet;
  float inches;
  cout << "Enter feet: ";
  cin >> feet;
  userInput.push_back(feet);
  cout << "Enter inches: ";
  cin >> inches;
  userInput.push_back(inches);

  return userInput;
}

//function for initial calculation
vector<float> metricConversion(float feet, float inches) {
  //constant variables for calculations - do not change
  const float METERS_PER_FOOT = 0.3048;
  const float INCHES_PER_FOOT = 12.0;
  const float CENT_PER_METER = 100.0;

  //variable to store conversion values;
  vector<float> conversions;

  //add calculation results to return vector
  conversions.push_back((feet + (inches / INCHES_PER_FOOT)) * METERS_PER_FOOT);
  conversions.push_back(((conversions.at(0)) - ((int)conversions.at(0))) * CENT_PER_METER);

  return conversions;
}

//function to output calculations
void output(int meters, float centimeters) {
  cout << meters << "m ";
  cout << centimeters << "cm" << endl;
}

int main(int argc, char **argv) {
  float feet;
  float inches;
  int meters;
  float centimeters;

  string choice;

  cout << "Press 'c' to continue, or enter 'exit' to quit the program." << endl;
  cin >> choice;

  //if the user enters exit to leave the program
  if (choice == "exit") {
    cout << "You have exited the program." << endl;
  }

  //while the user presses enter to continue with program
  while (choice == "c") {

    //vector to store user input - function to retrieve user input
    vector<float> userMeasurements = getUserInput();
    feet = userMeasurements.at(0);
    inches = userMeasurements.at(1);

    //implement functions to calculate conversion
    vector<float> metricMeasurements = metricConversion(feet, inches);
    meters = (int)metricMeasurements.at(0);
    centimeters = metricMeasurements.at(1);

    output(meters, centimeters);

    //implement function to output final conversion calculations
    //cout << conversionOutput(conversion) << endl;
    cout << "Press 'c' to do another conversion, or enter 'exit' to quit." << endl;
    cin >> choice;
  }

  return 0;
}
