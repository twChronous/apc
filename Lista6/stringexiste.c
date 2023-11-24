#include <stdio.h>

int compareStrings(char str1[], char str2[]) {
    int i = 0;

    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }

    return str1[i] - str2[i];
}

int wordExists(char word[], char sequence[][81], int size) {
    for (int i = 0; i < size; i++) {
        if (compareStrings(word, sequence[i]) == 0) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    char S[1000][81]; 
    char P[1000][81]; 

    for (int i = 0; i < N; i++) {
        scanf("%s", S[i]);
    }

    for (int i = 0; i < M; i++) {
        scanf("%s", P[i]);
    }

    int found = 0; 
    for (int i = 0; i < M; i++) {
        if (wordExists(P[i], S, N)) {
            found = 1;
            break;
        }
    }

    printf("%d\n", found);

    return 0;
}
