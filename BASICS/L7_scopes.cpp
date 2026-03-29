#include<iostream>
using namespace std;

class class_hello{
    public:int class_scope = 2;
};

namespace namespace_ns{
    int ns_scope=3;
};

int global_scope = 4;
void main(){

    /* scopes:-
    1.Local scope
    2.class scope
    3.Namespace scope
    4.Global scope */

    auto function_scope = 1;
    class_hello obj_hello;{
        auto local_scope=1;
        auto total = local_scope + function_scope
        + obj_hello.class_scope + namespace_ns::ns_scope
        +global_scope;
    }
}
