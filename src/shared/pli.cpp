#include "utils.h"

using namespace std;

int pli(int argc, char *argv[]) 
{
  if (argc != 4) {
    print_ln("Please provide valid arguments");
    print("pli ");
    print("<liquid_limit> ");
    print_ln("<plastic_limit> ");
    return 1;
  }

  double liquid_limit = atof(argv[2]);
  double plastic_limit = atof(argv[3]);

  double pli = liquid_limit - plastic_limit;
  print(pli);
  print_ln("%");
  return 0;
}
