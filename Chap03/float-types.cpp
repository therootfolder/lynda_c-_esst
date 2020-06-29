// float-types.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

// a byte is 8 bits
constexpr size_t byte = 8;

int main() {
    float f;
    double df;
    long double ldf;
    
    printf("size of float f is %ld bits\n", sizeof(f) * byte);//32 bits
    printf("size of double float df is %ld bits\n", sizeof(df) * byte);//64 bits
    printf("size of long double float ldf is %ld bits\n", sizeof(ldf) * byte);//128 bits
    

    f= 500.0;// note that the precision by default
    //is 6 decimals . this can be set
    printf("value of f is %f\n",f);
    
    float f_n = 5e2;
    printf("f_n is %f\n",f_n);
// the print will also print the same 500.000000
//learn the sceintific notation

 f_n = 5e20;
printf("now if i print this it shows : %f\n",f_n);
// this prints out 500000010020438671360.000000
//not the loss in precision if you use %f for longer floats
double df_n = 5e20;// now i made it a double
printf("now see: %lf\n",df_n);
    //now see: 500000000000000000000.000000
    //this prints it out more significant digit (increased precision)since we are 
    // using the 64 bit double instead
    // of the 32 bit float
df = .1 +.1+.1;
if(df == 0.3){
    puts("True\n");

}else {
    puts("False\n");//notice that \n is
    //  not necessary since puts prints a line and
    //  automatically takes you to the next line
}
printf(" value of df is %1.100lf\n",df);
// 0.3000000000000000444089209850062616169452667236328125000000000000000000000000000000000000000000000000
// notice where it loses the precision
// so the above prints False


ldf = .1L+.1L+.1L;//long double float
if(ldf == 0.3){
    puts("True");
}else {
    puts("False");
}
printf(" value of df is %1.1000Lf\n",ldf);
// even this too prints False


//precision in these types is always limited
// 32 bit float has a precision of about 7 digits
// 64 bit double float has a precision of 
// about 16 digits
// 128 long double floats precision is still not infinite

    return 0;
}
