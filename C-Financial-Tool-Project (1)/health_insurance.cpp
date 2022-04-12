#include "health_insurance.hpp"
#include "insurance.hpp"
#include <iostream>
using namespace std;

HealthInsurance::HealthInsurance(unsigned int n_flat_rate, int n_age, bool n_smoker) : Insurance(n_flat_rate)
{
  setFlatrate(n_flat_rate);
  health_flat_rate = n_flat_rate;
  age = n_age;
  smoker = n_smoker;
}

void HealthInsurance::setAgePrice()
{
  if (age >= 0 && age <= 15)
  {
    age_price = 200;
  }
  else if (age >= 16 && age <= 30)
  {
    age_price = 300;
  }
  else if (age >= 31 && age <= 40)
  {
    age_price = 400;
  }
  else if (age > 40)
  {
    age_price = 500;
  }
}

void HealthInsurance::setSmokerPrice()
{
  if (smoker == false)
  {
    smoker_price = 0;
  }
  else if (smoker == true)
  {
    smoker_price = 100;
  }
}

int HealthInsurance::totalPrice()
{
  int total_price;
  total_price = age_price + smoker_price + health_flat_rate;
  return total_price;
}
