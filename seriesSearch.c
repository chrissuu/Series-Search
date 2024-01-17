#include <stdlib.h>
#include <stdio.h>
struct RationalNumber {
    int num;
    int den;
};
typedef struct RationalNumber qnn;

struct StateClass {
    qnn initial;
    qnn final;
};

typedef struct StateClass* State;
typedef State transform_fn(State curr);

struct SeriesClass{
    
};



int main() {

}