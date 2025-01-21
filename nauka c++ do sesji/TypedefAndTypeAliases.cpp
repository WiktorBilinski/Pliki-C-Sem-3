#include <iostream>
#include <vector>

// typedef std::vector<std::pair<std::string, int>> pairlist_t;// parlist_t is identifier for datatype <std's after typedef>. _t means type.

// int main(){

//     pairlist_t parlist; // we can use pairlist_t insted of std::vector<std::pair<std::string, int>>

//     return 0;
// }



// typedef std::string text_t;
// typedef int number_t;

using text_t = std::string;
using number_t = int; //using is more popular nowadays, beacsue its more suitable for templates

int main(){
    using std::cout;
    text_t firstName = "Bro";
    number_t age = 21;

    cout << firstName << '\n';
    cout << age << '\n';

}