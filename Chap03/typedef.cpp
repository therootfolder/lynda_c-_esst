// typedef.cpp by Bill Weinman <http://bw.org/>
#include <cstdio>
using namespace std;

typedef unsigned char points_t;
typedef unsigned char rank_t;

struct score {
    points_t p;//less cumbersome that not using typedef
    rank_t r;// since points_t and rank_t are
    // essentially the same you can use
    // points_t r
};

int main()
{
    struct score s = { 5, 1 };
    printf("score s had %d points and a rank of %d\n", s.p, s.r);
    
    return 0;
}
