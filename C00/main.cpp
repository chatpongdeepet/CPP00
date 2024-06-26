#include <stdio.h>
#include <iostream>
#include "function.h"


int main() {
	
	std::cout << "1. ";
	ft_print_alphabet();
	std::cout << std::endl;

	std::cout << "2. ";
	ft_print_reverse_alphabet();
	std::cout << std::endl;

	std::cout << "3. " << std::endl;
	ft_is_negative(10);
	ft_is_negative(-1);
	ft_is_negative(0);
	std::cout << std::endl;

	//std::cout << "4. ";
	//ft_print_comb();
	//std::cout << std::endl;
	//std::cout << std::endl;

	//std::cout << "5. ";
	//ft_print_com2();
	//std::cout << std::endl;

	std::cout << "6. " << std::endl;
	ft_putnbr(-16546216540000);

	return 0;
}