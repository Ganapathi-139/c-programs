#include <stdio.h>
#include <string.h>

int main() {
    char str[50], rev[50];
    int i, len;

    printf("Enter a string: ");
    scanf("%s", str);

    strcpy(rev, str);    
    strrev(rev);         

    if(strcmp(str, rev) == 0)
        printf("Palindrome string");
    else
        printf("Not a palindrome string");

    return 0;
}
