#ifndef HOUSE_INSURANCE_HPP
#define HOUSE_INSURANCE_HPP

#include "insurance.hpp"
using namespace std;

class HouseInsurance: public Insurance
{
  private:
    int type;
    int type_price;
    int premium_price;
    int premium;
    unsigned int house_flat_rate;

  public:
    HouseInsurance();
    HouseInsurance(unsigned int n_flat_rate, int n_type, int n_premium);
    void settypePrice();
    void setpremiumPrice();
    int totalPrice();
};

#endif