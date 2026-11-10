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
        std::cout << "Caught: " << e.what() << std::endl << std::endl;
    }
    std::cout << "--- Test: grade 151 ---" << std::endl;
    try
    {
        Bureaucrat c("Bob", 151);
        std::cout << c << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl << std::endl;
    }
    std::cout << "--- Test: grade 42 ---" << std::endl;
    try
    {
        Bureaucrat c("Kim", 42);
        std::cout << c << std::endl << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl;
    }
    try
    {
        Bureaucrat d ("Gandalf", 1);
        std::cout << d << std::endl;//expected output Gandalf 1
        d.decrementGrade();
        std::cout << d << std::endl;//expected output Gandalf 2
        d.incrementGrade();
        std::cout << d << std::endl;//expected output Gandalf 1
        d.incrementGrade();
        std::cout << d << std::endl << std::endl;//expected output Grade too high
    }
    catch(std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl << std::endl;
    }
    try
    {
        Bureaucrat e ("Hui Buh", 150);
        std::cout << e << std::endl;//expected output Gandalf 150
        e.incrementGrade();
        std::cout << e << std::endl;//expected output Gandalf 149
        e.decrementGrade();
        std::cout << e << std::endl;//expected output Gandalf 150
        e.decrementGrade();
        std::cout << e << std::endl << std::endl;//expected output Grade too low
    }
    catch(std::exception &e)
    {
        std::cout << "Caught: " << e.what() << std::endl << std::endl;
    }
    
    return(0);
}