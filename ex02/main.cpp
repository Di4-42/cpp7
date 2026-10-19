#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    // 1. Constructeur par defaut + size()
    Array<int> empty;
    std::cout << empty.size() << " (attendu 0)" << std::endl;

    // 2. Constructeur avec taille : int initialises a zero
    Array<int> numbers(2);
    // numbers[0] = 42;
    std::cout << numbers[0] << " " << numbers[1] << " (attendu 0 0)" << std::endl;

    // 3. operator[] : ecriture et lecture avec double
    Array<double> decimals(1);
    decimals[0] = 3.14;
    std::cout << decimals[0] << " (attendu 3.14)" << std::endl;

    // 4. Constructeur de copie : copie independante avec string
    Array<std::string> words(1);
    words[0] = "Salut";
    Array<std::string> copy(words);
    copy[0] = "Bonjour";
    std::cout << words[0] << " " << copy[0] << " (attendu Salut Bonjour)" << std::endl;

    // 5. operator= : copie independante avec float
    Array<float> source(1);
    source[0] = 1.5f;
    Array<float> assigned;
    assigned = source;
    assigned[0] = 2.5f;
    std::cout << source[0] << " " << assigned[0]
              << " (attendu 1.5 2.5)" << std::endl;

    // 6. operator[] const : lecture seule
    const Array<double> constant(decimals);
    std::cout << constant[0] << " (attendu 3.14)" << std::endl;

    // 7. Indice hors limites
    try
    {
        numbers[2] = 42;
        std::cout << "ERREUR : aucune exception" << std::endl;
    }
    catch (const std::exception&)
    {
        std::cout << "Exception attrapee (attendu)" << std::endl;
    }

    // 8. Destructeurs : appeles automatiquement en quittant main
    return 0;
}