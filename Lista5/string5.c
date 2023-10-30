#include <stdio.h>

int main() {
    char N[101];
    char S[101];
    int count = 0; 
    for (int i = 0; scanf("%s", N) != EOF; i++) {
        S[i] = N;
        count++;
    }
    for (int i = 0; i < count; i++) {
        printf("%s ", S[i]);
    }
    
    printf("%d\n", count);

    return 0;
}
