// auto-type.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <string>//this is the STL string header
#include <typeinfo>//guess you use
// this for using typeid()
using namespace std;

string func() {
    return string("this is a string");
}

int main() {
    auto x = func();
    printf("x is \"%s\"\n", x.c_str());//x.c_str() is provided by the STL <string>
    if(typeid(x) == typeid(string)) puts("x is string");
    return 0;
}
