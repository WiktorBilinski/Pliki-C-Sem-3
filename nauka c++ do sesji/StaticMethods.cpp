#include <iostream>
#include <string>

class Food {
    public:
        std::string name;
        double cost;

        void print(){
            std::cout << name << " " << cost << std::endl;
        }
        Food(std::string name, double cost) : name(name), cost(cost) {}

        static void printFoods(){
}

};

int main(){

    return 0;
} // jeabc mam z eszycie xpp