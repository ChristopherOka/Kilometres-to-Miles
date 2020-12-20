#include <iostream>
#include <iomanip>

void kilometres_to_miles() {
	double kilometres = 200; //declare double variable kilometres 
	double miles; //declare double variable miles
	miles = kilometres / 1.609; //convert kilometres to miles using the conversion formula
	std::cout.setf(std::ios::fixed); //set decimal precision to 4
	std::cout.setf(std::ios::showpoint);
	std::cout.precision(4);
	std::cout << kilometres << " kilometres in miles is: " << miles; //print the conversion with 4 decimal places
}

int main() {
	kilometres_to_miles();
}
