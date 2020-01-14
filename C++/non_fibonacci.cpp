#include <iostream>

int main()
{
	int x {}, y {1}, sum {}, n {};
	std::cout << "Enter the limit of fibonacci  series ->";
	std::cin >> n;
    int j {};

    std::cout << "\nThe fibonacci numbers in the series are ::\n";
    for(; ;)
	{
		sum = x + y;
		x = y;
		y = sum;
		if(sum < n)
            std::cout << sum << " " << std::flush;

        else
            break;
	}
    x = 0;
    y = 1;
    sum = 0;
std::cout << "\nThe missing numbers in the series are ::\n";
	for(; sum < n;)
	{
		sum = x + y;
		x = y;
		y = sum;

		for(j = x + 1; j < y && y < n; j++)
		{
			std::cout << j << " " << std::flush;
		}
        for(; (j  < n) && (y > n); j++)
                std::cout << j << " " << std::flush;
	}
	return 0;
}
