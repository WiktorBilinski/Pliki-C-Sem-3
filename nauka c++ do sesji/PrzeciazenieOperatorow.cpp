#include <iostream>

class Counter{

    friend void set_to_zero(Counter &counter); //friend means this function is going to have permision to protected and private members of this "Counter &counter" counter object here;

    friend Counter operator+(Counter c1, Counter c2); // udzielamy przyjaźni funkcji globalnej

    friend Counter operator*(int m, Counter counter);

    friend Counter operator/(Counter c1, Counter c2);

    private:
    double count;

    public:
    Counter(double count) : count(count){}

    void print(){
        std::cout<< count << std::endl;
    }

    void increment(){
        count++;
    }

    // Counter operator+(Counter const &counter){
    //     Counter new_counter(count + counter.count); // cpounter.count wyciaga zmienna count przypisana do danego obiektu.
    //     return new_counter;
    // }
};

void set_to_zero(Counter &counter){
        counter.count = 0;
    }

Counter operator+(Counter c1, Counter c2){
    int new_count =(c1.count + c2.count);
    return Counter(new_count);
}

Counter operator*(int m, Counter counter){
    int new_count =(counter.count * m);
    return Counter(new_count);

}

Counter operator/(Counter c1, Counter c2){
    double new_count = (c1.count / c2.count);
    return Counter(new_count);
}

int main(){

    Counter counter1(13);
    counter1.increment();
    counter1.print();

    Counter counter2(56);
    counter2.print();

    Counter counter3 = counter1 + counter2; // error: no match for 'operator+' (operand types are 'Counter' and 'Counter')
    
    counter3.print();

    counter3.increment();

    counter3.print();

    Counter counter4 = 4 * counter3;

    counter4.print();

    set_to_zero(counter2);

    Counter counter5 = counter4 / counter1;

    counter5.print();

    counter2.print();

    
    
    return 0;
};