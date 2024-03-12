#include <stdio.h>

int main() {
    int cookie;
    char buff[4];

    printf("buf: %08p cookie: %08p\n", &buff, &cookie);

    gets(buff);

    if (cookie == 0x41424344) {
        printf("\nGanaste!\n");
    }
    else {
        printf("\nPerdiste!\n");
    }
}
