#include <iostream>

int main(){

	float howMuchMoneyDoesGabrielleMakeACheck;
	float whatPercentageDoesGabrielleTakeOut;

	const int weeksInYear = 52;

	const int yearlyDeductions = 150;

	std::cout << "How much money does Gabrielle make per paycheck?" << std::endl;

	std::cin >> howMuchMoneyDoesGabrielleMakeACheck;

	std::cout << "What percentage does Gabrielle want to take out per check?" << std::endl;

	std::cin >> whatPercentageDoesGabrielleTakeOut;

	float turnPercentageToADecimal = whatPercentageDoesGabrielleTakeOut / 100;

	std::cout << "Percentage turned to a decimal" << turnPercentageToADecimal<<std::endl;

	float grossIncome = howMuchMoneyDoesGabrielleMakeACheck * weeksInYear;

	std::cout << "Gross income: " << grossIncome << std::endl;

	float deductions = (grossIncome * turnPercentageToADecimal) + yearlyDeductions;

	std::cout <<"Gabrielle took out: $_" << deductions <<"_"<< std::endl;

	
	return 0;

}