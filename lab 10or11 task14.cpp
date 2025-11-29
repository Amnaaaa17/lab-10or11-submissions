#include <stdio.h>
#include <time.h>

int main() {
    FILE *fp = fopen("log.txt", "a");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    fprintf(fp, "Program executed on: %d-%02d-%02d %02d:%02d:%02d\n",
            tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday,
            tm.tm_hour, tm.tm_min, tm.tm_sec);

    fclose(fp);
    printf("Timestamp added to log.txt\n");
    return 0;
}

