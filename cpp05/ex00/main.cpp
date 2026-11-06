#include "bureaucrat.hpp"

int main()
{

    std::cout << "--- Test: grade 0 ---" << std::endl;
    try
    {
        Bureaucrat b("Alice", 0);
        std::cout << b << std::endl;

    }
    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    std::cout << "--- Test: grade 151 ---" << std::endl;
    try
    {
        Bureaucrat c("Bob", 151);
        std::cout << c << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    std::cout << "--- Test: grade 42 ---" << std::endl;
    try
    {
        Bureaucrat c("Kim", 42);
        std::cout << c << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    
    return(0);
}