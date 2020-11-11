#include <stdio.h>
#include <string.h>

void input() {
    char buffer[50];
    gets(buffer);
}

void other() {
    fprintf(stdout, "Return to function other()");
}

int main() {
    input();
    fprintf(stdout, "Return to function main()");
    return 0;
}
