// Name:
// This program calculates and displays business expenses.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
  int days;
  float hotel, meal, trip;

  //Get business location
  std::cout << "Welcome to the Business Trip Tracker!" << '\n';

  std::string location;
  std::cout << "What is the business trip location? " ;
  std::cin >> location;

  //Get amount of days for Trip
  std::cout << "How many days will the trip take? " ;
  std::cin >> days;

  //Amount of total hotel expenses
  std::cout << "What is the total hotel expense? " ;
  std::cin >> hotel;

  //Amount of total meal expenses
  std::cout << "What is the total meal expense? " ;
  std::cin >> meal;

  //Calculate the total cost of the business Trip
  trip = hotel + meal;

  //Print the header row and trip info
  std::cout << std::setw(0) << "Location"
    << std::setw(8) << "Days"
    << std::setw(12) << "Hotel"
    << std::setw(10) << "Meal"
    << std::setw(10) << "Total" << std::endl;

  std::cout << std::setw(0) << location
    << std::setw(10) << days
    << std::setw(12) << hotel
    << std::setw(10) << meal
    << std::setw(10) << trip << std::endl;

    return 0;
}
