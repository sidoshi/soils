
#include "utils.h"

using namespace std;

int drd(int argc, char *argv[]) 
{
  if (argc != 5) {
    print_ln("Please provide valid arguments");
    print("drd ");
    print("<spg_solids> ");
    print("<void_ratio> ");
    print_ln("<saturated_water> ");
    return 1;
  }

  double spg_solids = atof(argv[2]);
  double void_ratio = atof(argv[3]);
  double saturated_water = atof(argv[4]);

  double drd = (spg_solids * saturated_water) / (saturated_water + void_ratio);
  print(drd);
  print_ln(" g/ml");
  return 0;
}
