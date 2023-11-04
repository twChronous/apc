#include <stdio.h>

void toLowerCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32; 
        }
    }
}

int main() {
   char input[1000]; 
    char words[100][100];
    int wordCount = 0;
    int charCount = 0;

    fgets(input, sizeof(input), stdin);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == ' ' || input[i] == '\n') {
            if (charCount > 0) {
                words[wordCount][charCount] = '\0';
                wordCount++;
                charCount = 0;
            }
        } else {
            words[wordCount][charCount] = input[i];
            charCount++;
        }
    }
    toLowerCase(words[0]);
    toLowerCase(words[wordCount - 1]);

    printf("%s.%s@unb.br\n", words[0], words[wordCount - 1]);

    return 0;
}

