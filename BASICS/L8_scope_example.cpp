#include <iostream>
#include <string>
 
class Welcome{
    public:
        std::string w{"Welcome"};
};
 
namespace to_ns {
    std::string t {"to"};
}
 
std::string the = "the";
 
void test_print(){
    auto cpp = "CPP";
    Welcome ow;
    {
        auto lang = "language";
        std::cout << ow.w << " " << to_ns::t << " " << the << " " << cpp << " " << lang << '\n';
    }
}
int main() {
    test_print();
    return 0;
}

