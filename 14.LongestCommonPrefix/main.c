
#include <stdio.h>
#include <stdlib.h>


char * longestCommonPrefix(char ** strs, int strsSize){
    char *first = *strs;
    char *a,*b;
    for (int i = 1; i < strsSize; i++) {
        for(a = strs[0], b = strs[i]; *a != '\0'; a++, b++) {
            if(*a != *b) {
                *a = '\0';
                break;
            }
        }
        if(*strs[0] == '\0') {
            break;
        }
    }
    return strs[0];
}

int main(void) {
    char *strs[3];
    strs[0] = malloc(200);
    sprintf(strs[0], "%s", "flower");
    strs[1] = malloc(200);
    sprintf(strs[1], "%s", "flow");
    strs[2] = malloc(200);
    sprintf(strs[2], "%s", "flight");
    strs[3] = '\0';
    printf("%s", longestCommonPrefix(strs, 3));
    return 0;
}
