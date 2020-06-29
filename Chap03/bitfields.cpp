// bitfields.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

struct preferences {
    bool likesMusic : 1;//still takes
    // up the minimum in memory for bool
    // which is the standard 8 bits
    bool hasHair : 1;//you cant set aside just 0 bits
    bool hasInternet : 1;
    bool hasDinosaur : 1;
    bool dino : 8;
    unsigned int numberOfChildren : 33;//now this takes up 64 bits
    // and the bools combined will take up 32 bits
};

int main() {
    struct preferences homer;
    homer.likesMusic = true;
    homer.hasHair = false;
    homer.hasInternet = true;
    homer.hasDinosaur = false;
    homer.numberOfChildren =100;
    
    printf("sizeof int: %ld bits\n", sizeof(int) * 8);
    printf("sizeof homer: %ld bits\n", sizeof(homer) * 8);
    
    if(homer.likesMusic) printf("homer likes music\n");
    if(homer.hasHair) printf("homer has hair\n");
    if(homer.hasInternet) printf("homer has net\n");
    if(homer.hasDinosaur) printf("homer has a dino\n");
    printf("homer has %d children\n", homer.numberOfChildren);
    
    return 0;
}
