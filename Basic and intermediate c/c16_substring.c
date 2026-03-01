//16.Write a function that returns the index of the first occurrence of a substring (naïve).
#include <stdio.h>
#include <string.h>

int findSubstring(char str[], char sub[]) {
    int n = strlen(str);
    int m = strlen(sub);

    for(int i = 0; i <= n - m; i++) {
        int j;
        for(j = 0; j < m; j++) {
            if(str[i + j] != sub[j])
                break;
        }
        if(j == m)    
            return i;
    }
    return -1;         
}

int main() {
    char str[100], sub[50];

    fgets(str, sizeof(str), stdin);
    fgets(sub, sizeof(sub), stdin);
    str[strcspn(str, "\n")] = '\0';
    sub[strcspn(sub, "\n")] = '\0';
    int index = findSubstring(str, sub);
    if(index != -1)
        printf("Found at index %d", index);
    else
        printf("Not found");

    return 0;}



//