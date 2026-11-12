
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int pos;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter position to replace (1-based): ");
    scanf("%d", &pos);

    printf("Enter new character: ");
    scanf(" %c", &ch);

    int len = strlen(str);

    if (str[len - 1] == '\n')
        len--;

    if (pos >= 1 && pos <= len) {
        str[pos - 1] = ch;
        printf("Updated string: %s", str);
    } else {
        printf("Invalid position!");
    }

    return 0;
}
