#include <iostream>

namespace second{
    int x = 2;
}

namespace first{
    int x = 1;
}


 
int main(){
    using namespace first;
    
    using std::cout;

    using std::string; //safer alternative to using namespace std or else namespaces

    string name ="bro";

    // int x = 0;

    // std::cout << x; //x would be 0 (without using namespace)

    // std::cout << first::x; //x would be 1 (without using namespace)

    cout << name; //wthout prefix second it would be as it is in namespace first
    return 0;
}