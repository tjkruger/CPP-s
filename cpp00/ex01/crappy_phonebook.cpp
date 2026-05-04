
#include <iostream>

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
            std::cin >> input;
            contacts[index].setPhonenum(input);

            std::cout << "Secret: ";
            std::cin >> input;
            contacts[index].setSecret(input);

            if (count < 8)
                count++;
            oldest = (oldest + 1) % 8;
        }
        void searchContact() {
            
        };
        void exitContact();
    
};