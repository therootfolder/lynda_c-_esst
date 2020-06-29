// integers.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main()
{
    printf("sizeof char is %ld bits\n", sizeof(char) * byte);//8bits
    printf("sizeof short int is %ld bits\n", sizeof(short int ) * byte);//16 bits
    printf("sizeof int is %ld bits\n", sizeof(int) * byte);//32 bits
    printf("sizeof long int is %ld bits\n", sizeof(long int) * byte);//32 bits but on mac its 64 bits. compiler dependent
    printf("sizeof long long int is %ld bits\n", sizeof(long long int) * byte);//64 bits


    long li = 42L;
    // this is also valid
    // but it is generally bad
    // practice to leave out the
    // int keyword 
// short so = 2;

int octal = 0223;
printf("octal is %d",octal);
// the above statement will
// print out the decimal value 
// 147
// so a number that starts with a 0 is octal

int hexa = 0x0093;
printf("hexa is %d\n",hexa);
//the above print will also do the same 
//thing
int bl = 0b1100110;
printf("bl is %d\n",bl);
// the above will print 102

long x = 142U;
// U means unsigned
long long y = 147LL;//suffix for long long
printf("y is %lld",y);




    return 0;
}
