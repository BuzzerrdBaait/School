#include <iostream>
// This exercise asks to create a program to calculate the price of railing on a circular rail.
// All I had to do is calculate the circumference and multiply the price per foot.

int main() {

	const float pi = 3.1415;

	float pricePerFoot;
	float diameterInFeet;

	std::cout << "What is the price per foot?"<<std::endl;
	std::cin >> pricePerFoot;
	std::cout << "What is the diameter in feet?"<<std::endl;
	std::cin >> diameterInFeet;

	std::cout << "Price per foot : "<< pricePerFoot<< std::endl<<"Diameter in feet: "<<diameterInFeet<<std::endl;

	float circumference = diameterInFeet * pi;

	std::cout <<"Circumference:" << circumference << std::endl;

	float totalPrice = circumference * pricePerFoot;

	std::cout <<"Your total price is: " << totalPrice << std::endl;

	return 0;
}