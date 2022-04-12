#ifndef HEATLH_INSURANCE_HPP
#define HEATLH_INSURANCE_HPP

#include "insurance.hpp"
using namespace std;

class HealthInsurance: public Insurance
{
  private:
    int age;
    int age_price;
    int smoker_price;
    bool smoker = false;
    unsigned int health_flat_rate;

  public:
    HealthInsurance();
    HealthInsurance(unsigned int n_flat_rate, int n_age, bool n_smoker);
    void setAgePrice();
    void setSmokerPrice();
    int totalPrice();
};

#endif