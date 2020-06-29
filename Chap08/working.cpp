// working.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>//for printf
using namespace std;
#include<cerrno>//for errno
#include<cstring>// because strerror  is defined here.
int main()
{
        for(int i = 0; i<100;++i){
        errno = i;       
        printf(" %d : %s \n",errno,strerror(errno));
        }
        // wow just amazing is what i found out
        // error codes exist from 0 to 42;
        // i just printed all the errors using
        // the above for loop.
        static const char * fn1 = "file1";
        static const char * fn2 = "file2";
        FILE * fh = fopen(fn1,"w");
        
        fclose(fh);
        rename(fn1,fn2);
        // remove(fn2);//since i am removing a nonexistent file. i get errno:13, permission denied
        // remove(fn1);
        printf(" %d : %s \n",errno,strerror(errno));
        
    puts("Hello, World!\n");

    const int bufsize = 20;// buf now can hold only 20 chars
    static char buf[bufsize];
    fputs("prompt: ",stdout);
    fflush(stdout);
    fgets(buf, bufsize, stdin);// read from stdin and put it in buf
    fputs(buf,stdout);//read from buf and put it in stdout


    return 0;
}
