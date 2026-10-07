#include <stdio.h>

int main() {
    int n;
    const char *words[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    scanf("%d", &n);

    if (n >= 1 && n <= 9)
        printf("%s\n", words[n]);
    else
        printf("Greater than 9\n");

    return 0;
}
