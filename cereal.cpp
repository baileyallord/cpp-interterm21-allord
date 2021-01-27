#include <iostream>

using namespace std;

int main(int argc, char **argv) {

  const float METRIC_TON = 35273.92;
  float weightOz;
  float weightTon;

  weightOz = atof(argv[1]);

  weightTon = weightOz / METRIC_TON;

  cout << "The package of breakfast cereal weighs " << weightTon  << " metrics tons." << endl;

  return 0;
}
