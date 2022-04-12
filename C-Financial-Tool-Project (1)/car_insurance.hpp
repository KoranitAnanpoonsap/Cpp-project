#ifndef CAR_INSURANCE_HPP
#define CAR_INSURANCE_HPP

#include "insurance.hpp"
using namespace std;

class CarInsurance: public Insurance
{
  private:
    int ticket;
    int ticket_price;
    int drive_exp_price;
    int drive_exp;
    unsigned int car_flat_rate;

  public:
    CarInsurance();
    CarInsurance(unsigned int n_flat_rate, int n_ticket, int n_drive_exp);
    void setticketPrice();
    void setdrive_expPrice();
    int totalPrice();
};

#endif