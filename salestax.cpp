#include <iostream>
#include <iomanip>

using namespace std;

//function to calculate final cost of good after implementing sales tax
float addTax(float taxRate, float cost) {
  float total;

  total = (cost * (taxRate / 100)) + cost;

  return total;
}


int main(int argc, char **argv) {
  //variables to store user input for tax rate (as percent value) and cost (in dollars and cents)
  float taxRate;
  float cost;

  //ask user for input
  cout << "Enter the sales tax rate as a percentage: ";
  cin >> taxRate;
  cout << "Enter the cost of the item: ";
  cin >> cost;
  cout << endl;

  //informs user of inputted sales tax rate and cost of good, performs function, and informs user of final cost after tax
  cout << "Sales Tax: " << setprecision(2) << taxRate << "%" << endl;
  cout << fixed;
  cout << "Item Cost: " << "$" << cost << endl;
  cout << endl;
  cout << "The final cost of the item after tax is $" << (addTax(taxRate, cost)) << endl;

  return 0;
}
