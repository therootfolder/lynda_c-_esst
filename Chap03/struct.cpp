// struct.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct Employee {
    int id;
    const char * name;//c strings
    const char * role;
};

// int main() {
//     Employee joe = { 42, "Joe", "Boss" };
    
//     printf("%s is the %s and has id %d\n",
//            joe.name, joe.role, joe.id);// this is using the member operator
    
//     return 0;
// }

int main() {
    Employee joe = { 42, "Joe", "Boss" };
    Employee * e  = &joe;// i can create 
    // a pointer to a struct like so 
    printf("%s is the %s and has id %d\n",
           e->name, e->role, e->id);// this is the
    // pointer member operator
    //this too prints the same as normal 
    // member operator

    
    return 0;
}