#include "utils.h"

using namespace std;

int csl(int argc, char *argv[]) 
{
  if (argc != 7) {
    print_ln("Please provide valid arguments");
    print("csl ");
    print("<saturated_soil_volume> ");
    print("<saturated_soil_mass> ");
    print("<dry_soil_volume> ");
    print("<dry_soil_mass> ");
    print_ln("<saturated_water> ");
    return 1;
  }

  double saturated_soil_volume = atof(argv[2]);
  double saturated_soil_mass = atof(argv[3]);
  double dry_soil_volume = atof(argv[4]);
  double dry_soil_mass = atof(argv[5]);
  double saturated_water = atof(argv[6]);

  double csl = (
    (saturated_soil_mass - dry_soil_mass - 
      (saturated_soil_volume - dry_soil_volume)
    ) * saturated_water) / dry_soil_mass;

  print_ln(csl);
  return 0;
}