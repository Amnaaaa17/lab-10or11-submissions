#include <stdio.h>
int count(char str[100], int i) {
    if (str[i] == '\0') { 
        return 0;
    }

    if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
        return 1 + count(str, i + 1); 
    } else {
        return count(str, i + 1); 
    }
}
int main() {
    char str[100];
    int vowels;

    printf("\nEnter a string: ");
    gets(str); 

    vowels = count(str, 0); 

    printf("\nThe number of vowels in string is: %d", vowels);
    if (!vowels) {
        printf("\nNo vowels");
    }

    return 0;
}

