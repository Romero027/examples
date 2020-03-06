#include <stdio.h>

struct sdshdr {
    int len;
    int free;
    char buf[];
}; // sizeof(struct sdshdr) = 8 not 16

int main() {
    printf("%zu\n", sizeof(struct sdshdr) ); // zu for size_t
    return 0;
}
