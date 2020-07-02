// exception.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-31
#include <iostream>
#include <exception>
using namespace std;

class E : public exception {
    const char * msg;
    E();
public:
    E(const char * s) throw() : msg(s) {}
    const char * what() const throw() { return msg; }
};



const E e_ouch("ouch!");
const E e_bad("bad code");
const E e_worse("don't do that!");



void broken() {//all this function does is it
// throws an exception using the default exception
//class
    cout << "this is a broken function" << endl;
    throw e_worse;
}

int main() {
    cout << "let's have an emergency!" << endl;
    try{
    broken();

    } catch (E & e){// even exception works here instead of E
        cout<< e.what()<< endl;
    }
    return 0;
}
