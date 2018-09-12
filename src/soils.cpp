#include <string>
#include "shared/utils.h"
#include "soils.h"

using namespace std;

int main(int argc, char *argv[])
{
  if (argc < 2) {
    print_ln("Please provide a valid command");
    print_ln("soils [csl spgs pli vr drd bud] <...args>");
    return 1;
  }

  string command = argv[1];
  if (command == "csl") {
    // Shrinkage Limit
    return csl(argc, argv);
  } else if (command == "spgs") {
    // Specific Gravity of Solid
    return spgs(argc, argv);
  } else if (command == "pli") {
    // Plasticity Index
    return pli(argc, argv);
  } else if (command == "vr") {
    // Void Ratio
    return vr(argc, argv);
  } else if (command == "drd") {
    // Dry Density
    return drd(argc, argv);
  } else if (command == "bud") {
    // Bulk Density
    return bud(argc, argv);
  }

  print_ln("Command not found");
  return 1;
}