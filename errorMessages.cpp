#include "errorMessages.h"

void printHelp()
{
    /* Tymek ogarnij short help */
    std::cerr << "\033[1;31m";
    std::cout << "Proper usage of the program: \n"
              << "-i input data file \n"
              << "-t input tree definition file \n"
              << "-o output file"
              << "\033[0m";
    exit(EXIT_FAILURE);
}

void tooMuchData(int r, int c, std::string value)
{
    std::cerr << "\033[1;31m"
              << "Input contains too much data at row " << r << " column " << c
              << "\033[0m";
    exit(EXIT_FAILURE);
}

void notEnoughData(int r, int c)
{
    std::cerr << "\033[1;31m"
              << "Input contains not enough data at row " << r << " column " << c
              << "\033[0m";
    exit(EXIT_FAILURE);
}

void wrongDataType(int r, int c, std::string value)
{
    std::cerr << "\033[1;31m"
              << "Input contains wrong Data Type at row " << r << " column " << c
              << "\033[0m";
    exit(EXIT_FAILURE);
}

void NotNumber(std::string index, int count)
{
        std::cerr << "\033[1;31m"
              << "Data is not a number at row " << index << " column " << count
              << "\033[0m";
    exit(EXIT_FAILURE);
}

void wrongop(std::string index, int count)
{
    std::cerr << "\033[1;31m"
              << "Wrong operator at row " << index << " column " << count
              << "\033[0m";
    exit(EXIT_FAILURE);
}

void tooLittleData(std::string index, int count)
{
        std::cerr << "\033[1;31m"
              << "Too little data at row " << index << " column " << count
              << "\033[0m";
    exit(EXIT_FAILURE);
}