#include <stdio.h>
#include "add_one.c"
#include "add_two.c"

int main(void) {
    int number = 0;
    for (int i = 0; i < 10; i++) {
        add_two(&number);
    }
    add_one(&number);
    printf("Hello, World!\n What's 9+10?\n...\n%d", number);
    return 0;
}
