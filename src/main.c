#include <stdio.h>
#include <string.h>

void input() {
    char buffer[5];
    scanf("%s", buffer);
}

void other() {
    printf("Return to function other");
}

int main() {
    input();
    printf("Return to function main");
    return 0;
}
