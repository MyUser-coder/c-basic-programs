#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        printf("Points: 5\n");
    else if (ch >= '0' && ch <= '9')
        printf("Points: 10\n");
    else
        printf("Points: 0\n");
    return 0;
}
