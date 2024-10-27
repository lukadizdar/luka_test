#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv) {
    int a = atoi(argv[1]);
    printf("Tvoj broj je %d\n", a);
    printf("%s\n", argv[0]);
    return 0;
}