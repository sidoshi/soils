#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

void print(string str)
{
  cout << str;
}

void print (double n)
{
  cout << setprecision(4) << n;
}

void print_ln(string str) 
{
  print(str);
  print("\n");
}

void print_ln(double n) 
{
  print(n);
  print("\n");
}