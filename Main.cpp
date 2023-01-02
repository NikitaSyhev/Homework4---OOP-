
#include <iostream>
#include "Car.h"
#include <string>

int main() {
	setlocale(LC_ALL, "Russian");


	Car car1("Sedan", 220);

	brand bmw("Sedan", 250, "black");

	model E39("Sedan", "Black", 200000);
	
	std::cout << "Car max speed = " << car1.getMaxSpeed() << std::endl;
	std::cout << "Bmw max speed = " << bmw.getMaxSpeed() << std::endl;
	std::cout << "BMW E 39 price is " << E39.getPrice() << " rubles." << std::endl;












	return 0;
}