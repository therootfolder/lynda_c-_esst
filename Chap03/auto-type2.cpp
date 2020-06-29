// auto-type2.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
#include <vector>
using namespace std;
// got another idea why cant i use typedef
typedef vector<int>::iterator vii_t;
int main() {
    vector<int> vi = { 1, 2, 3, 4, 5 };
    for(vii_t it = vi.begin(); it != vi.end(); ++it) {//wow this works
        // printf("int is %d\n", it);this will print out the
        // address values and not the vector itself
        printf("int is %d\n",*it);//this will 
        // correctly print out the values of
        // vector
    }
// the same loop above CANT be written 
// but i just figured it out
// dont know how it works though
//UPDATE: lol this shit DOESNT WORK 
// SEE THE CHANGES BELOW.
// THE it2 JUST INCREMENTS ITSELF 
// AND CHECK WITH THE vi2[4] WHICH IS
// 55
 
    vector<int> vi2 = { 1, 2, 67, 4, 55 };
    for(auto it2 = vi2[0]; it2 <= vi2[4]; ++it2) {
        printf("int is %d\n", it2);// this just prints
        // out integers till 55 incl.
    }
    
    return 0;
}
