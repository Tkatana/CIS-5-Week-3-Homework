
// Homework 3 — Tyler Quintana
// CIS 5 Week 03 · Types & variables


#include <iostream>
#include <string>
int main() {
 

  const int CURRENT_YEAR = 2026;
  std::string first = "Tyler ";
  std::string last = "Quintana ";
  int age = 28;
  double height = 5.10;
  char initial = 'T';
  bool student = 1; 
  int credits = 10;
  double gpa = 3.9;

std::cout << "=== About me ===\n";
std::cout << "Name: " << first << last << "\n";
std::cout << "Age: " << age << "\n";
std::cout << "Height: " << height << "\n";
std::cout << "Initial: " << initial << "\n";
std::cout << "Student: " << student << "\n";
std::cout << "Year: " << CURRENT_YEAR << "\n"; 
std::cout << "Credits: " << credits << "\n";
std::cout << "GPA: " << gpa << "\n";
std::cout << " \n";
std::cout << first << last << "is " << age << " and taking\n";
std::cout << credits << " credits in the " << CURRENT_YEAR << " school year " <<  "with a ";
std::cout << gpa << " GPA.\n";

// Integer is used because it is a value that can be changed and does not need the same precision as double
// when I change the value of "credits" it is then reflected in what prints
// Double is used because the calculation for GPA needs more precision than just the tenths place 
  // char = "A"; would not compile char needs 'A' single quotes
  // CURRENT_YEAR = 2027; would not compile cannot reassign const

  
 

  return 0;
}
