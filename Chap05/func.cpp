// func.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

/* void func(int  i)
{ i = 73;
    printf("in func() the value is %d\n",i);
}

int main()
{
    int i = 43;
    puts("this is main()");
    func(i);
    return 0;
}
 */
/* 
#include<string>

const string & func(){
    const static string s = "this is func()";
    return s;
}
int main(){
    puts("this is main()");
    const string & s_cut = func();this means 
    we are actually getting the variable
    itself from func()
    // const string s_copy = func(); where as this
    means we are copying whatever is returned
    from func() to s
    printf("func return %s\n",s.c_str());
    return 0;
} 

 */

// FUNCTION POINTERS

void func(){
    puts("this is func()");
}
int main(){
    void (*pfunc)() = func;
    puts("this is main()");
    func();//prints 'this is func()'
    pfunc();//does the same as above(shortcut for
    // deferencing function pointer)
    (*pfunc)();//still does the same as above(c syntax)
}




