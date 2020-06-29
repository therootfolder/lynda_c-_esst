// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

typedef unsigned char points_t;
const int & f(const int & i) {
    int _i = i;
    return ++_i;
}







int main()
{
    puts("Hello, World! \" \' \\");
    puts("\x40");//this will print the 
    // hexadecimal @ sign  
    puts("\x10 \x20 \x30 \x40 \x50 \x60 \077");
    puts(" \t \n \u03bc \a");//my god 
    // it even supports the unicode
    // by using the \u which takes you to the codepoint
    // this is just amazing
    // octal excape sequence are in
    // form \nnn
    // \077 is ?
    // \a is a audible bell dont think it works tho 


    int i = 3;
    int & ir = i;
    ir = 4;
    int & irr = ir ;
    //int &  irr ; cannot be left uninitilized
    irr = 5;
    printf("i is %d\n",i);

    printf("f() is %d \n",f(i));
    printf("i is %d\n",i);

// a lot of side effects because of using 
// references are not obvious
// we can mitigate the side effects by
// using the const int & i






















    return 0;
}
