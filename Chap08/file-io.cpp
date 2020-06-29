// file-io.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-30
#include <cstdio>
using namespace std;

constexpr int maxstring = 1024;    // read buffer size
constexpr int repeat = 5;

int main( int argc, char ** argv ) {
    const char * fn = "testfile.txt";   // file name
    const char * str = "This is a literal c-string.\n";
    
    // create/write the file
    printf("writing file\n");
    FILE * fw = fopen(fn, "w");//creating a file handle
    // this is the unix style which goes back to 1970s
    for(int i = 0; i < repeat; i++) {
        fputs(str, fw);
    }
    
    fclose(fw);
    printf("done.\n");
    
    // read the file
    printf("reading file\n");
    char buf[maxstring];
    FILE * fr = fopen(fn, "r");
    while(fgets(buf, maxstring, fr)) {// reads fr
    // upto maxstring in length and puts in the buffer
        fputs(buf, stdout);//stdout is the output file stream for the console 
    }
    
    fclose(fr);
    remove(fn);// removes the file from the system
    // to use remove(fn) you need to close the file
    // first so fclose(fr) is mandatory
    
    printf("done.\n");
    
    return 0;
}
