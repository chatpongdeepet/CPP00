#pragma once
void ft_print_alphabet(void) {

	for (int i = 97; i <= 122; ++i) {
		std::cout << (char)i;
	}
	std::cout << std::endl;
}

void ft_print_reverse_alphabet(void) {
	for (int i = 122; i >= 97; --i) {
		std::cout << (char)i;
	}
	std::cout << std::endl;
}

void ft_is_negative(int n) {
	if (n < 0) {
		std::cout << n << " is negative." << std::endl;
	}
	else {
		std::cout << n << " is Positive." << std::endl;
	}
}

void ft_print_comb(void) {

	int H, T, O;
	
	H = 0;
	while (H <= 7) 
	{
		T = H + 1;
		while (T <=8)
		{
			O = T + 1;
			while (O <= 9 )
			{
				std::cout << H;
				std::cout << T;
				std::cout << O;
				if (H == 7 && T == 8 && O == 9) { return; };
				std::cout << " ";
				std::cout << ",";

				O++;
			}

			T++;
		}

		H++;
	}
}


void ft_print(int n)
{
	if (n < 10) {
		std::cout << 0;
		std::cout << n;
	}
	else 
	{
	std::cout << n;
	}
}

void ft_print_com2(void) {
	int i, j;
	i = 0;
	while (i <=99)
	{
		j = i + 1;
		while (j <= 99) 
		{
			ft_print(i);
			std::cout << " ";
			ft_print(j);
			std::cout << ", ";

			++j;
		}
		++i;
	}
}