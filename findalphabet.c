// Check Vowel or Consonant
#include <stdio.h>
#include <ctype.h>

int main() {
    char ch, lower_ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Convert to lowercase to simplify condition checking
    lower_ch = tolower(ch);

    if ((lower_ch >= 'a' && lower_ch <= 'z')) {
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
            printf("'%c' is a vowel.\n",  ch);
        } else {
            printf("'%c' is a consonant.\n", ch);
        }
    } else {
        printf("'%c' is not an alphabetic character.\n", ch);
    }
    return 0;
} 