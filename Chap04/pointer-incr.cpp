// pointer-incr.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// void printp(char *p) {
//     printf("pointer is %p, value is %d\n", p, *p);
// }

// int main()
// {
//     char arr[5] = { 1, 2, 3, 4, 5 };
//     char *p = arr;
//     printp(p++);
//     printp(p++);
//     printp(p++);

//     return 0;
// }



void printp(int *p) {
    printf("pointer is %p, value is %d\n", p, *p);
}

int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int *p = arr;
    printp(p++);// this will increment
    // the address by 4 bytes
    // as it know it is dealing with 
    // integers and they occupy
    // 4 bytes of memory
    printp(p++);
    printp(p++);

    return 0;
}

