// qualifiers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;
static int x = 600;
class S {
public:
    int static_value() {
        // static int x ;
        return ++x;
    }
};

int func() {
     x ;//static int will make it global
    return ++x;
}

int main() {
    const int i = 42;
    // i = 43; this will give a compiler error
    printf("The integer is %d\n", i);

    int j = func();
    printf("The integer is %d\n", j);
    j = func();
    printf("The integer is %d\n", j);
    // notice here that each time i 
    // call the function func() and print it
    // it still prints the value of 8
    // that means the func() is dealing with a 
    // local variable that gets cleared 
    // after the function is called.

    // but if i make it static int 
    // then each time i call the function it will
    // give a different incremented value




S a;
S b;
S c;
printf("a.static_value is %d\n",a.static_value());
// 8 gets printed 
printf("b.static_value is %d\n",b.static_value());
// 9 gets printed
printf("c.static_value is %d\n",c.static_value());
// 10 gets printed







    return 0;
}
