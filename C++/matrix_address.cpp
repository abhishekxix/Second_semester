#include <iostream>

int main()
{
    const int base {1000}, m {4}, n {4};
    int  width {sizeof(int)}, i {}, j {}, result {} , a[4][4] {};
    std::cout << "Enter the elements of the 4x4 matrix separated by a space -> " << std::endl;

    for(i = 0; i < m ; i < n)
        for(j = 0; j < n; j++)
            std::cin >> a[i][j];
    std::cout << "Enter the row number of the element to find address -> ";
    std::cin >> i;
    std::cout << "Enter the column number of the element to find address -> ";
    std::cin >> j;
    result = base + width * ((n * i) + j);
    std::cout << "The address of the entered element is :: " << result << std::endl;
    return 0;
}
