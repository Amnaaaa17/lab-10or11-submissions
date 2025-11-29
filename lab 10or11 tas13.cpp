#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    fclose(fp); 
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    if (fgetc(fp) == EOF) {
        printf("File is empty now.\n");
    } else {
        printf("File is not empty.\n");
    }

    fclose(fp);
    return 0;
}

