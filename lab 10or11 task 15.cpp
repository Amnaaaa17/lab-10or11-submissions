#include <stdio.h>

void mergeFiles(const char *file1, const char *file2, const char *dest) {
    FILE *f1 = fopen(file1, "r");
    FILE *f2 = fopen(file2, "r");
    FILE *out = fopen(dest, "w");

    if (f1 == NULL || f2 == NULL || out == NULL) {
        printf("Error opening files!\n");
        return;
    }

    char ch;
    while ((ch = fgetc(f1)) != EOF) {
        fputc(ch, out);
    }
    while ((ch = fgetc(f2)) != EOF) {
        fputc(ch, out);
    }

    fclose(f1);
    fclose(f2);
    fclose(out);
    printf("Files merged into %s\n", dest);
}

int main() {
    mergeFiles("file1.txt", "file2.txt", "merged.txt");
    return 0;
}

