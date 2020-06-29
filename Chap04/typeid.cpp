// typeid.cpp by Bill Weinman <http://bw.org/>
// version of 2018-10-28
#include <cstdio>
#include <typeinfo>
#include<string>
using namespace std;

struct A { int x; };
struct B { int x; };
/* even though they are similar they are
different struct hence different user
defined data types. they will have 
different type ids or typeinfo objects
 */

A a1;
B b1;

int main() {
    if(typeid(a1) == typeid(A)) {
        printf("same %s %s %s",typeid(A).name(), typeid(b1).name(),typeid( const int *).name());
        //const char * -has type id-> PKc
        // const double * has PKd
        // char has c
        // const * has PKi which is same for const int * 
        printf(" %s\n",typeid(string).name());//NSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE this gets printed out here
    } else {
        puts("different");
    }
    return 0;
}
