#include <iostream>

using namespace std;

int main(int argc, char **argv) {
  const float PAY_RATE = 16.0;
  const float SS_TAX =  0.06;
  const float FI_TAX = 0.14;
  const float SI_TAX = 0.05;
  const float MED_INS = 10.0;
  float hoursWorked;
  float grossPay;
  float netPay;

  cout << "Enter the employee's hours worked this week: ";
  cin >> hoursWorked;

  if (hoursWorked > 40) {
    grossPay = ((hoursWorked - 40) * (PAY_RATE * 1.5)) + (40 * PAY_RATE);
  }
  else {
    grossPay = hoursWorked * PAY_RATE;
  }

  netPay = grossPay - (grossPay * SS_TAX) - (grossPay * FI_TAX) - (grossPay * SI_TAX) - MED_INS;

  cout.precision(2);
  cout << fixed << "Gross pay: $" << grossPay << endl;
  cout << "Social Security Tax amount witheld: $" << (grossPay * SS_TAX) << endl;
  cout << "Federal Income Tax amount witheld: $" <<  (grossPay * FI_TAX) << endl;
  cout << "State Income Tax amount witheld: $" << (grossPay * SI_TAX) << endl;
  cout << "Medical Insurance amount witheld: $" << MED_INS << endl;
  cout << endl;
  cout  << "Net take-home pay this week: $" << netPay << endl;

  return 0;
}
