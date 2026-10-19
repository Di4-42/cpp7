#include "iter.hpp"

void printInt(int& x)
{
    std::cout << x << " ";
}

void printString(std::string& s)
{
    std::cout << s << " ";
}

void increment(int& x) 
{
    x++;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int len = 5;

    std::cout << "Original ints: ";
    iter(arr, len, printInt);
    std::cout << std::endl;

    iter(arr, len, increment);

    std::cout << "After increment: ";
    iter(arr, len, printInt);
    std::cout << std::endl;

    std::string strs[] = {"Hello", "World"};

    std::cout << "Strings: ";
    iter(strs, 2, printString);
    std::cout << std::endl;

    return 0;
}
