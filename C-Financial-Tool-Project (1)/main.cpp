#include "car_insurance.hpp"
#include "health_insurance.hpp"
#include "insurance.hpp"
#include <fstream>
#include <iostream>
#include <regex>
#include <sstream>
#include <string>
using namespace std;

// invalid input check method
bool isNumberOrDouble(const string &s) {
  return regex_match(s, regex("([0-9]*\\.[0-9]+|[0-9]+)"));
}

void Health_Insurance_Age(double *age) {
  while (true) {
    string age_;
    cout << "Please enter your age: ";
    cin >> age_;
    if (isNumberOrDouble(age_) == true) { // User invalid input check
      *age = stod(age_);
      break;
    }
    cout << "\e[31mInvalid input.. Try Again\n" << endl;
  }
  cout << "\n\e[0m"
       << "0-15 years old will pay $200\n"
  		 << "16-30 years old will pay $300\n"
  		 << "31-40 years old will pay $400\n"
       << "Over 40 years old will pay $500\n\n" << endl;
}

void Health_Insurance_Smoker(char *temp_smoker, string *n, bool *smoker) {
  while (true) {
    cout << "\e[0mAre you a smoker? (" << "\e[92mY" << "\e[0m/" << "\e[31mN" << "\e[0m): ";
    cin >> *temp_smoker;
    char n_ = toupper(*temp_smoker);
    if (n_ == 'Y') {
      *smoker = true;
      *n = n_;
      break;
		}
    else if (n_ == 'N') {
			*smoker = false;
      *n = n_;
      break;
		}  
    cout << "\e[31mInvalid input.. Try Again\n" << endl;  
  }
}

void Health_Insurance_Price() {
  double age;
  char temp_smoker;
  string n;
  string y;
  bool smoker = false;
  cout << "\e[34mFor health insurance there is a flat rate of $170 per customer.\n\e[0m" << endl;
  Health_Insurance_Age(&age);
  Health_Insurance_Smoker(&temp_smoker, &n, &smoker);
  HealthInsurance Health(170, age, smoker);
  Health.setAgePrice();
  Health.setSmokerPrice();
  cout << "\e[34mYour age: " << age << endl;
  cout << "Smoker: " << n << endl;
  cout << "Total Price: $" << Health.totalPrice() << "\e[0m\n\n" << endl;
}

void Car_Insurance_Year(double *years) {
  while(true){
		string years_;
		cout << "Please enter your driving experience(year): ";
		cin >> years_;
		if (isNumberOrDouble(years_) == true) { // User invalid input check
			*years = stod(years_);
			break;
		}
		cout << "\e[31mInvalid input.. Try Again\n" << endl;
	}
}

void Car_Insurance_Ticket(double *ticket) {
  while(true){
		string ticket_;
		cout << "\e[92mPlease enter the number of your traffic/speeding tickets: ";
		cin >> ticket_;
		if (isNumberOrDouble(ticket_) == true) { // User invalid input check
				*ticket = stod(ticket_);
				break;
			}
			cout << "\e[31mInvalid input.. Try Again\n" << endl;
	}
}

void Car_Insurance_Price() {
  double ticket;
	double years;
	cout << "\e[34mFor car insurance there is a flat rate of $200 per customer.\n\e[0m" 
			 << "0 ticket will pay $50\n" 
		   << "1-2 tickets will pay $100\n" 
		   << "3-4 tickets will pay $250\n" 
		   << "More than 4 tickets will pay $350\n" << endl;
	Car_Insurance_Ticket(&ticket);
	cout << "\n\e[0m0-2 years of driving experience will pay $300\n" 
		   << "3-5 years of driving experience will pay $200\n" 
		   << "over 6 years of driving experience will pay $100\n\n" << endl;
	Car_Insurance_Year(&years);
  CarInsurance Car(200, ticket, years);
  Car.setticketPrice();
  Car.setdrive_expPrice();
  cout << "\n\e[34mYour number of tickets: " << ticket << endl;
  cout << "Driving experience: " << years << " years" << endl;
  cout << "Total Price: $" << Car.totalPrice() << "\e[0m\n\n" << endl;
}

void House_Insurance_Price() {
	return;
}

void options() {
  char option;
  cout << "\e[0mEnter your option to proceed: ";
  cin >> option;
  cout << "\n";
  switch (option) {
  case '1':
    Health_Insurance_Price();
    break;
  case '2':
    Car_Insurance_Price();
    break;
  case '3':
    House_Insurance_Price();
    break;
  default:
    cout << "\e[31mInvalid input.. Please try again\n" << endl;
    options();
    break;
  }
}

//main
int main() {
  cout << "\nFinal Project-Object Oriented Programming\n\nC++ OOP financial tool.";
  cout << "\nPresent date : 27 April. 5 minutes each present, 5 minutes for Q/A.";
  cout << "\n\nGroup Members: \n1. Koranit.A 64011441 \n2. Jirapat.W 64011405 \n3. Chonlaphat.I 64011380\n\n" << endl;
  cout << "\e[46m" << "    Welcome to BMF Insurance Company    " << endl;
	
  while(true){
    cout << "\n\e[3m\e[42m" << "Choose your options" << "\e[0m" << endl;
    cout << "------------------------------------------" << endl;
    cout << "Option 1: Calculate Health insurance premium"
         << "\nOption 2: Calculate Car insurance premium"
         << "\nOption 3: Calculate House insurance premium" << endl;
    cout << "------------------------------------------" << endl;
    options();
  }
}