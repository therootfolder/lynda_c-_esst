// new-delete.cpp by Bill Weinman <http://bw.org/>
//   updated 2018-10-27
#include <cstdio>
#include <new>
using namespace std;

constexpr size_t count = 1787934827934857;

int main() {
    printf("allocate space for %lu long int at *ip with new\n", count);
    
    // allocate array
    long int * ip;
    
   /*  try {
        ip = new long int [count];
    } catch (std::bad_alloc & ba) {
        fprintf(stderr, "Cannot allocate memory (%s)\n", ba.what());
        return 1;
    } */
/* 
    there is another way of catching exceptions
    if you dont want to use the try-catch block you 
    can use this instead:
    the complete try and catch block can be replaced
    like follows:
 */
    ip = new(nothrow) long int [count];
    if(ip == nullptr){
        fprintf(stderr,"Cannot allocate memory \n");
        return 1;
    }
    
    
    
    // initialize array
    for( long int i = 0; i < count; ++i ) {
        ip[i] = i;
    }
    
    // print array
    for( long int i = 0; i < count; ++i ) {
        printf("%ld ", ip[i]);
    }
    puts("");
    
    // deallocate array
    delete [] ip;
    puts("space at *ip deleted");
    
    return 0;
}
