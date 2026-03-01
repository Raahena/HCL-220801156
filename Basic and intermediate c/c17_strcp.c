
//17. Implement strcpy safely (bounded copy) and discuss buffer overflow risks.
#include <stdio.h>
#include <string.h>

int main() {
    char dest[10];
    char src[] = "Hello";

    if(strlen(src) < sizeof(dest)) {
        strcpy(dest, src);
        printf("Copied safely: %s\n", dest);
    } else {
        printf("Source too large. Copy aborted.\n");
    }

    return 0;}