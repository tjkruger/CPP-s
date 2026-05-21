#include "harl.hpp"

void Harl::debug(void){
    std::cout << "i love having extra bacon ... " << std::endl;
}

void Harl::info(void){
    std::cout << "extra bacon costs extra money ???" << std::endl;
}

void Harl::warning(void){
    std::cout << "I worked here longer so i believe i deserve more bacon then you" << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable ! I want to speak to the manager" << std::endl;
}

void Harl::complain(std::string level){
    void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++){
        if(levels[i] == level)
            (this->*functions[i])();
    }
}