#include <stdio.h>
#include <string.h>

void other() {
    printf("Return to function other\n");
    exit(0);
}

void input() {
    char buffer[5];
    scanf("%s", buffer);
}

int main() {
    printf("%p\n", &other);
    input();
    printf("Return to function main\n");
    return 0;
}
