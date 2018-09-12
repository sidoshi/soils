
#include "utils.h"

using namespace std;

int vr(int argc, char *argv[]) 
{
  if (argc != 4) {
    print_ln("Please provide valid arguments");
    print("vr ");
    print("<water_content> ");
    print_ln("<spg_solids> ");
    return 1;
  }

  double water_content = atof(argv[2]) / 100;
  double spg_solids = atof(argv[3]);

  double vr = water_content * spg_solids;
  print_ln(vr);
  return 0;
}
