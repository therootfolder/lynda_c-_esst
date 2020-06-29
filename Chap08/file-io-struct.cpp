// file-io-struct.cpp by Bill Weinman <http://bw.org/>
// updated 2018-10-30
#include <cstdio>
#include <cstring>
#include <cstdint>
using namespace std;

constexpr size_t maxlen = 111;

struct S {
    uint8_t num;
    uint8_t len;
    char str[maxlen + 1];
};// note that this struct totals 114 bytes

int main( int argc, char ** argv ) {
    printf("size of struct S is %zd\n",sizeof (S));// note you cant use sizeof S
    const char * fn = "test.file";            // file name
    const char * cstr = "This is a literal C-string.";
    
    // create/write the file
    printf("writing file\n");
    FILE * fw = fopen(fn, "wb");// b for binary mode
    // binary mode tells the system not to translate
    // line endings.
    
    static struct S buf1;
    for( int i = 0; i < 5; i++ ) {
        buf1.num = i;
        buf1.len = (uint8_t) strlen(cstr);// type conversion from size_t to uint8_t as strlen() returns size_t
        if(buf1.len > maxlen) buf1.len = maxlen;
        strncpy(buf1.str, cstr, maxlen);
        buf1.str[buf1.len] = 0; // make sure it's terminated
        fwrite(&buf1, sizeof(struct S), 1, fw);//&buf1 means the address of the buf1
    }
    
    fclose(fw);
    printf("done.\n");
    
    // read the file
    printf("reading file\n");
    FILE * fr = fopen(fn, "rb");
    struct S buf2;
    size_t rc;
    while(( rc = fread(&buf2, sizeof(struct S), 1, fr) )) {//fr is the input stream. it gets read into buf2.
        printf("a: %d, b: %d, s: %s\n", buf2.num, buf2.len, buf2.str);
    }
    
    fclose(fr);
    remove(fn);
    
    printf("done.\n");
   
    return 0;
}
