// c-strings.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main() {
    char cstring[] = "String";
    printf("The string is: %s\n", cstring);
    
    for( unsigned int i = 0; cstring[i]; i++) {// the condition
    // here is tesing for a non zero value

        printf("%02d: %c\n", i, cstring[i]);
    }

    // this  can also be
     const char * cstring = "string";
     //same as above
    // has to be a const

    const char * const cstring = "string";
    // the above is wrong and the 
    // compiler throws an error

    const char * cstring = "string""  good";
    // the above concatenates the strings
    

    return 0;
}
