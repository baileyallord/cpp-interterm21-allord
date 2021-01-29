#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  //variables to store constant rates that will not change
  const float PAY_RATE = 16.0;
  const float SS_TAX =  0.06;
  const float FI_TAX = 0.14;
  const float SI_TAX = 0.05;
  const float MED_INS = 10.0;
  //variables to store user input
  float hoursWorked;
  float grossPay;
  float netPay;

  //get user input for number of hours worked
  cout << "Enter the employee's hours worked this week: ";
  cin >> hoursWorked;

  //if the user worked overtime
  if (hoursWorked > 40) {
    //user receives normal pay plus overtime pay
    grossPay = ((hoursWorked - 40) * (PAY_RATE * 1.5)) + (40 * PAY_RATE);
  }
  //if the user worked under or at normal weekly hours
  else {
    //user receives normal pay
    grossPay = hoursWorked * PAY_RATE;
  }

  //calculate user income after taxes
  netPay = grossPay - (grossPay * SS_TAX) - (grossPay * FI_TAX) - (grossPay * SI_TAX) - MED_INS;

  //only print two decimal places because of monetary value
  cout.precision(2);

  //inform user of gross pay after taxes and how much is witheld for each tax
  cout << fixed << "Gross pay: $" << grossPay << endl;
  cout << "Social Security Tax amount witheld: $" << (grossPay * SS_TAX) << endl;
  cout << "Federal Income Tax amount witheld: $" <<  (grossPay * FI_TAX) << endl;
  cout << "State Income Tax amount witheld: $" << (grossPay * SI_TAX) << endl;
  cout << "Medical Insurance amount witheld: $" << MED_INS << endl;
  cout << endl;
  //user's final take-home pay for that week
  cout  << "Net take-home pay this week: $" << netPay << endl;

  return 0;
}
