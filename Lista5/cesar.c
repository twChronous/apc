#include <stdio.h>

char applyRot13(char c) {
    if ((c >= 'A' && c <= 'Z')) {
        char offset = (c >= 'a' && c <= 'z') ? 'a' : 'A';
        return (((c - offset + 13) % 26) + offset);
    } else {
        return c;
    }
}

int main() {
    int n;
    scanf("%d", &n);
    getchar();
    while (n--) {
        char mensagem[1001];
        fgets(mensagem, 1001, stdin);
        for (int i = 0; mensagem[i] != '\0'; i++) {
            if (mensagem[i] != '\n') { 
                mensagem[i] = applyRot13(mensagem[i]);
            }
        }

        printf("%s", mensagem);
    }

    return 0;
}
