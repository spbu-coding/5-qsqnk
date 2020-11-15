#include <stdio.h>
#include <string.h>

void other() {
    printf("Return to function other");
    exit(0);
}

void input() {
    char buffer[5];
    scanf("%s", buffer);
}

int main() {
    input();
    printf("Return to function main");
    return 0;
}
