// template-function.cpp by Bill Weinman <http://bw.org/>
// updated 2018-08-18
#include <cstdio>
using namespace std;

template <typename T>
T maxof ( T a, T b ) {
    return ( a > b ? a : b );
}

/* int main( int argc, char ** argv ) {
    int m = maxof<int>( 7, 9);
    printf("max is: %d\n", m);
    return 0;
}
 */

// int main( int argc, char ** argv ) {
//     const  char * m = maxof<const char *>( "nine","seven");// using just
//     //  char * will throw a warning. 
//     // because string is a const char *
//     // you have to use that only.
//     printf("max is: %s\n", m);
//     // also note that this will always 
//     // print the second string because 
//     // here it is esseentially comparing
//     // pointers(basically the address) and not strings
//     return 0;
// }


//  now if you want to compare string types
// you can use the <string> header

#include<string>

int main( int argc, char ** argv ) {
    string  m = maxof<string>( "seven", "nine");
    printf("max is: %s\n", m.c_str());//this will print
    // out seven since the ascii value 
    //of the first letter is compared
    
    return 0;
}
