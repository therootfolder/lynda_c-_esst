// for.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

int main()
{
    // basic for loop
    for( int i = 0; i < 5; ++i ) {
        printf("i is %d\n", i);
    }

    char string[] = "abcdefg";
    // we can write a for loop using the string condition
    for(int i = 0; string[i];++i){
        printf("i is %c",string[i]);
    }//notice that the string[i] in c
    //is ended by a zero so when the 
    //condition comes to the end of the
    //string it sees  a zero and the loop
    // is terminated

    //the character string in c++
    //is simply and array of characters
    //terminated by a zero. and 
    //we know that the integer value 
    //zero is false

    for(char * cp = string; *cp; ++cp){//*cp means it is dereferencing 
    //the string and when it catches a 0 it is false
        printf("*cp is %c",*cp);
    }


    // c for loop
    for(int i = 0 ;i <5;++i)
        printf("i is %d\n",i);
        // the first i is the initializer, then the condition and then the iterator
    

    int array[]= {1,2,3,4,5};
    for (int i :array){
        // this is a compile time fearure
    }

    // now the most important exception
    char s[] = "string";
    for (char c : s){
        printf("c is %c",c);
        // now this even prints out the 
        // null character \0
        // thats why you need a if statement
        // to check for that \0
        // if( c == 0) break; this
        // statement has to be put into 
        // it
    }

    return 0;
}
