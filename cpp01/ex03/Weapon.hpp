    #ifndef WEAPON_H
    # define WEAPON_H

    #include <iostream>

    class Weapon{
        private:
            std::string type;
        public:
        Weapon(std::string type);
        void setType(std::string n){
            type = n;
        }
        const std::string& getType(){
            return type;
        }

    };


    #endif