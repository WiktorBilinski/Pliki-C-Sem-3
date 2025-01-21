#include <iostream>

class Shape{
    public:
    Shape(){

    };

    virtual double area() = 0; // pure virtual function

    virtual ~Shape(){

    };

};

class Square : public Shape{
    public:

    double side;

    Square(double side){
        this->side = side;
    };

    double area(){
        return side * side;
    }
};

class Triangle : public Shape{
    public:
    double base;
    double height;


    Triangle(double base, double height) : base(base), height(height){}

    double area(){
        return height * base * 0.5;
    }


};


int main(){

    Shape *shapes[] = { //we have pointer not instance xpp dlatego mzoemy to wyprintowc bo to są obiekty klasy square i triangle overridującej virtualną funkcję area klasy abstrakcyjną Shape. gdyby klasy triangle i area nie overridowaly pure virtual functon area() z klasy bazowej to tez by sie staly te klasy abstrakcyjne i utworzenie ich instancji w dynamciznie zalokowanej tabeli pointera *shapes nalezocego do klasy bazowej Shape, było by niemożliwe ponieważ w c++ nie można tworzyc instancji klasy abstrakcyjnej. Klasa abstrakcyjna powstaje gdy posiada chociaz jeddną funkcję pure virtual jak w tym przypadku Shapes posiada virtual double area() = 0;
        new Square(5),
        new Triangle(8,10),
        new Square(7),
        new Triangle(3,4)
    };


    for(int i = 0; i < 4; i++){
        std::cout << "Shape of figure: " << shapes[i]->area() << std::endl;
    };

    for(int i = 0; i < 4; i++){
        std::cout << "Destructor of shape figures has just been used" << std::endl;
        delete shapes[i];
    };

    return 0;
}