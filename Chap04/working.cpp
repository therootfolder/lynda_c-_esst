// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

void func(int x);// you can have non 
// matching parameter names while 
// declaring vs  defining a function
int main()
{
    puts("Hello, World!");
bool a = true;
bool b = false;

    if((a&&b)){
        puts("true");
    }else puts("false");


func(100);
   
/* int x = 5;
long long int y ;
y = x;
x = (long int) y;
printf(" x is %d \n",x);
printf(" y is %lld \n",y); */

int x= 5;
size_t y = sizeof x;
printf("size of x is %zd\n",y);






    return 0;
}
void func(int y){
    int z = y;
    ++z;
    printf("%d\n",z);
}