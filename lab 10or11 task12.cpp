#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch, prev;
    int charac = 0, words = 0, lines = 0;

    char filename[100];
    printf("\nEnter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    prev = ' ';
    while ((ch = fgetc(fp)) != EOF) {
        charac++;

        if (ch == '\n') {
            lines++;
        }

        if (!isspace(ch) && isspace(prev)) {
            words++;
        }

        prev = ch;
    }
    if (charac > 0 && prev != '\n') {
        lines++;
    }

    fclose(fp);

    printf("Total Characters: %d\n", charac);
    printf("Total Words: %d\n", words);
    printf("Total Lines: %d\n", lines);

    return 0;
}

