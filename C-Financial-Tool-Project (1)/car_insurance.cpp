#include "car_insurance.hpp"
#include "insurance.hpp"
#include <iostream>
using namespace std;

CarInsurance::CarInsurance(unsigned int n_flat_rate, int n_ticket, int n_drive_exp) : Insurance(n_flat_rate)
{
  setFlatrate(n_flat_rate);
  car_flat_rate = n_flat_rate;
  ticket = n_ticket;
  drive_exp = n_drive_exp;
}

void CarInsurance::setticketPrice()
{
  if (ticket == 0)
  {
    ticket_price = 50;
  }
  else if (ticket == 1 || ticket == 2)
  {
    ticket_price = 100;
  }
  else if (ticket == 3 || ticket == 4)
  {
    ticket_price = 250;
  }
  else if (ticket > 4)
  {
    ticket_price = 350;
  }
}

void CarInsurance::setdrive_expPrice()
{
  if (drive_exp >= 0 && drive_exp <= 2)
  {
    drive_exp_price = 300;
  }
  else if (drive_exp >= 3 && drive_exp <= 5)
  {
    drive_exp_price = 200;
  }
  else if (drive_exp >= 6)
  {
    drive_exp_price = 100;
  }
}

int CarInsurance::totalPrice()
{
  int total_price;
  total_price = ticket_price + drive_exp_price + car_flat_rate;
  return total_price;
}