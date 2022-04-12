#ifndef INSURANCE_HPP
#define INSURANCE_HPP

using namespace std;

class Insurance
{
  private:
    unsigned int flat_rate;

  public:
    Insurance(unsigned int n_flat_rate);
    void setFlatrate(unsigned int n_flat_rate);
};

#endif