#include "bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Bob"), _grade(42)
{
    std::cout << "Default consrtuctor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name), _grade(grade)
{
    if(grade > 150)
        throw GradeTooLowException();
    if(grade < 1)
        throw GradeTooHighException();
    std::cout << "overloaded consrtuctor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
    return(_name);
}

int Bureaucrat::getGrade() const
{
    return(_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low!";
}


Bureaucrat::Bureaucrat(const Bureaucrat& other): _name(other._name), _grade(other._grade)
{
    std::cout << "copy constructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
    std::cout << "assignment operator called" << std::endl;
    if(this != &other)
    {
        this->_grade = other._grade;
    }

    return (*this);

}


void Bureaucrat::decrementGrade()
{
    if(_grade >= 150)
        throw GradeTooLowException();
    this->_grade += 1;
}

void Bureaucrat::incrementGrade()
{
    if(_grade <= 1)
        throw GradeTooHighException();
    this->_grade -= 1;
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &b)
{
    out << b.getName() << ", bureaucrat with grade " << b.getGrade() << ".";
    return out;
}



Bureaucrat::~Bureaucrat(void)
{
    std::cout << "Deconstructor called" << std::endl;
}