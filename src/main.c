#include <stdio.h>
#include <string.h>

void input() {
	int a = 0;
    char buffer[5];
    memcpy(&a, buffer + 17, 4);
    printf("%x\n", a);
    fflush(stdout);
    scanf("%s", buffer);
    memcpy(&a, buffer + 17, 4);
    printf("%x\n", a);
    puts(buffer);
    fflush(stdout);
}

void other() {
    fprintf(stdout, "Return to function other()");
}

int main() {
    input();
    fprintf(stdout, "Return to function main()");
    return 0;
}
