// class.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a very simple class
class C1 {
    int i = 0;// private by default
public:
    void setvalue( int value ) ;
    int getvalue() const;
    int getvalue();
};
void C1::setvalue(int value){
    i = value;
}

int C1::getvalue() {//non-const member function
    puts("mutable getvalue");
    return  ++i;
}

int C1::getvalue() const {// const member function
    puts("const getvalue");
    return  i;
}

int main() {
    int i = 47;
    C1 o1;
    
    o1.setvalue(i);
    printf("value is %d\n", o1.getvalue());

    const C1 o2;    //now if i change this object to const
    // i have just created a const object
    // to do this i need to have a const member function
    printf("value is %d\n", o2.getvalue());
    // C1 o2; this is a mutable getvalue
    // that would have printed 1.
    return 0;
}
