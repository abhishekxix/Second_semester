#include <iostream>
#include <cstdlib>
int main()
{
	enum Choice
	{
		add = 1, subtract, multiply, divide, quit
	};
	
	int option {};
	
	for(;option != 5;)
	{
		std::cout << "Select an option::\n"
			  << "1 -> Addition." << std::endl
			  << "2 -> Subtraction." << std::endl
			  << "3 -> Multiplication." << std::endl
			  << "4 -> Division." << std::endl
			  << "5 -> Quit."
			  << "Enter the option -> ";
		std::cin >> option;
		
		system("clear");
		
		switch(option)
		{
			case add :
			{
				int a {}, b {};
				std::cout << "Enter the values of a and b -> ";
				std::cin >> a >> b;
				std::cout << "The sum of the entered numbers = " << a + b << std::endl;
				break;
			}
			
			case subtract :
			{
				int a {}, b {};
				std::cout << "Enter the values of a and b -> ";
				std::cin >> a >> b;
				std::cout << a << " - " << b << " = " << a - b << std::endl;
				break;
			}
			case multiply :
			{
			    int a {}, b {};
				std::cout << "Enter the values of a and b -> ";
				std::cin >> a >> b;
				std::cout << "The product of the entered numbers = " << a * b << std::endl;
				break;
			}
			
			case divide :
			{
				int a {}, b {};
				std::cout << "Enter the values of a and b -> ";
				std::cin >> a >> b;
				std::cout << a << " / " << b << " = " << a / b << std::endl;
				break;
			}
			
			case quit :
			{
				std::cout << "Quitting." << std::endl;
				break;
			}
					
			default : 
				std::cout << "Invalid option !" << std::endl;
		}
	}
	return 0;
}
