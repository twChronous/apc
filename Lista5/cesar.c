#include <stdio.h>

char rot13(char ch) {
    if (ch >= 'a' && ch <= 'z') {
        return 'a' + ((ch - 'a' + 13) % 26);
    } else if (ch >= 'A' && ch <= 'Z') {
        return 'A' + ((ch - 'A' + 13) % 26);
    } else {
        return ch;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    getchar();
    for (int i = 0; i < n; i++) {
        char message[1001]; 
        fgets(message, sizeof(message), stdin);

        for (int j = 0; message[j] != '\0'; j++) {
            message[j] = rot13(message[j]);
        }

        printf("%s", message);
    }

    return 0;
}
