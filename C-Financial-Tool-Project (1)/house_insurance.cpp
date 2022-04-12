#include "house_insurance.hpp"
#include "insurance.hpp"
#include <iostream>
using namespace std;

#include "house_insurance.hpp"
#include "insurance.hpp"
#include <iostream>
using namespace std;

HouseInsurance::HouseInsurance(unsigned int n_flat_rate, int n_type, int n_premium): Insurance(n_flat_rate)
{
  setFlatrate(n_flat_rate);
  house_flat_rate = n_flat_rate;
  type = n_type;
  premium = n_premium;
}

void HouseInsurance::settypePrice()
{
  if (type == 1)
  {
    type_price = 500;
  }
  else if (type == 2)
  {
    type_price = 300;
  }
  else if (type == 3)
  {
    type_price = 200;
  }
  else if (type == 4)
  {
    type_price = 100;
  }
}

void HouseInsurance::setpremiumPrice()
{
  if (premium == false)
  {
    premium_price = 0;
  }
  else if (premium == true)
  {
    premium_price = 500;
  }
}

int HouseInsurance::totalPrice()
{
  int total_price;
  total_price = type_price + premium_price + house_flat_rate;
  return total_price;
  }