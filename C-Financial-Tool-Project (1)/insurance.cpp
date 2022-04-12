#include "insurance.hpp"
#include <iostream>
using namespace std;

Insurance::Insurance(unsigned int n_flat_rate)
{
  setFlatrate(n_flat_rate);
}

void Insurance::setFlatrate(unsigned int n_flat_rate)
{
  flat_rate = n_flat_rate;
}
