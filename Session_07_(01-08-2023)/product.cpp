#include <iostream>

int products[2][100];
int no_of_products = 0;
int number_of_new_products = 3;

void add_products(int code, int price);
void display_products();

int main()
{
	for(int i = 0; i < number_of_new_products; i++)
	{
		int user_code,user_price;
		std::cout << "Input product code: ";
		std::cin >> user_code;
		std::cout << "Input product price: ";
		std::cin >> user_price;
	
		add_products(user_code, user_price);
	}

	
	return 0;
}

void add_products(int code, int price)
 {
 	products[0][no_of_products] = code;
 	products[1][no_of_products] = price;
 	no_of_products++;
 }
 
void display_products()
 {
 	for(int row = 0; row < 2; row++)
 	{
 		for(int col = 0; col < no_of_products; col++)
 		{
 			std::cout << products[row][col] << " ";
		}
		std::cout << std::endl;
	 }
 }