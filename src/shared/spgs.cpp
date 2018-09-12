#include "utils.h"

using namespace std;

int spgs(int argc, char *argv[]) 
{
  if (argc != 6) {
    print_ln("Please provide valid arguments");
    print("spgs ");
    print("<saturated_soil_volume> ");
    print("<saturated_soil_mass> ");
    print("<dry_soil_mass> ");
    print_ln("<saturated_water> ");
    return 1;
  }

  double saturated_soil_volume = atof(argv[2]);
  double saturated_soil_mass = atof(argv[3]);
  double dry_soil_mass = atof(argv[4]);
  double saturated_water = atof(argv[5]);

  double spgs = (dry_soil_mass / ( saturated_soil_volume * saturated_water -
    (saturated_soil_mass - dry_soil_mass)
  ));
  
  print_ln(spgs);
  return 0;
}