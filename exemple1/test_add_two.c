#include <stdio.h>
#include <assert.h>
#include "add_two.c"


int main(void) {
    int number = 0;
    add_two(&number);
    assert(number==2);
    return 0;
}