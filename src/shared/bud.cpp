
#include "utils.h"

using namespace std;

int bud(int argc, char *argv[]) 
{
  if (argc != 4) {
    print_ln("Please provide valid arguments");
    print("bud ");
    print("<dry_density> ");
    print_ln("<water_content> ");
    return 1;
  }

  double dry_density = atof(argv[2]);
  double water_content = atof(argv[3]) / 100;

  double bud = dry_density * (1 + water_content);
  print(bud);
  print_ln(" g/ml");
  return 0;
}
