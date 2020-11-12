#include <stdio.h>
#include <string.h>

void input() {
    char buffer[5];
    scanf("%s", buffer);
}

void other() {
    fprintf(stdout, "Return to function other");
}

int main() {
    input();
    fprintf(stdout, "Return to function main");
    return 0;
}
