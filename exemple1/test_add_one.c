#include <stdio.h>
#include <assert.h>
#include "add_one.c"


int main(void) {
    int number = 0;
    add_one(&number);
    assert(number==1);
    return 0;
}