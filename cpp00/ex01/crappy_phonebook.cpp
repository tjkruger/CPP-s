
#include <iostream>
#include <iomanip>
#include <cstdlib>

class Contact {
    private:
        std::string name;
        std::string surname;
        std::string nickname;
        std::string phonenum;
        std::string Secret;
    public:
        void setSurname(std::string n) {
            surname = n;
        }
        std::string getSurname() {
            return surname;
        }

        void setName(std::string n) {
            name = n;
        }
        std::string getName(){
            return name;
        }

         void setNickname(std::string n) {
            nickname = n;
        }
        std::string getNickname(){
            return nickname;
        }

         void setPhonenum(std::string n) {
            phonenum = n;
        }
        std::string getPhonenum(){
            return phonenum;
        }

         void setSecret(std::string n) {
            Secret = n;
        }
        std::string getSecret(){
            return Secret;
        }

};


class PhoneBook {
    private:
        Contact contacts[8];
        int count;
        int oldest;

    public:
        PhoneBook() {
            count = 0;
            oldest = 0;
        }
        void addContact() {
            int index;
            if(count < 8)
                index = count;
            else
                index = oldest;
            
            std::string input;

            std::cout << "First name: ";
            std::cin >> input;
            contacts[index].setName(input);

            std::cout << "Last name: ";
            std::cin >> input;
            contacts[index].setSurname(input);

            std::cout << "Nickname: ";
            std::cin >> input;
            contacts[index].setNickname(input);

            std::cout << "Phone number: ";
            std::cin.ignore();
            std::getline(std::cin, input);
            contacts[index].setPhonenum(input);

            std::cout << "Secret: ";
            std::getline(std::cin, input);
            contacts[index].setSecret(input);

            if (count < 8)
                count++;
            oldest = (oldest + 1) % 8;
        }
        void searchContact() {
            for (int i = 0; i < count; i++) {
                std::cout << std::setw(10) << std::right << i << "|";
                
                std::string field = contacts[i].getName();
                if (field.length() > 10)
                    field = field.substr(0, 9) + ".";
                std::cout << std::setw(10) << std::right << field << "|";
                
                field = contacts[i].getSurname();
                if (field.length() > 10)
                    field = field.substr(0, 9) + ".";
                std::cout << std::setw(10) << std::right << field << "|";
                
                field = contacts[i].getNickname();
                if (field.length() > 10)
                    field = field.substr(0, 9) + ".";
                std::cout << std::setw(10) << std::right << field << "|";
                
                std::cout << std::endl;
            }
            
            int index;
            std::cout << "Enter index: ";
            std::cin >> index;
            if (index < 0 || index >= count)
                std::cout << "Invalid index" << std::endl;
            else {
                std::cout << contacts[index].getName() << std::endl;
                std::cout << contacts[index].getSurname() << std::endl;
                std::cout << contacts[index].getNickname() << std::endl;
                std::cout << contacts[index].getPhonenum() << std::endl;
                std::cout << contacts[index].getSecret() << std::endl;
            }
        }
        void exitContact(){
            exit(0);
        };
    
};

int main() {
    PhoneBook phonebook;
    std::string input;
    
    while (1) {
        std::cout << "Enter command (ADD, SEARCH, EXIT): ";
        std::cin >> input;
        
        if (input == "ADD")
            phonebook.addContact();
        else if (input == "SEARCH")
            phonebook.searchContact();
        else if (input == "EXIT")
            return 0;
        else
            std::cout << "Invalid command" << std::endl;
    }
    return 0;
}
