#include <iostream>

using namespace std;

int main(int argc, char **argv) {

  //constant variables that will not change
  const float METRIC_TON = 35273.92;
  //variables to store user input and calculations
  float weightOz;
  float weightTon;

  //converts console input argument to float
  weightOz = atof(argv[1]);

  //calculates weight in tons
  weightTon = weightOz / METRIC_TON;

  //informs user of weight in tons
  cout << "The package of breakfast cereal weighs " << weightTon  << " metrics tons." << endl;

  return 0;
}
