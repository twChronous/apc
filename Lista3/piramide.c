#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%02d ", i);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 1; i <= n; ++i) {
      for (int j = 1; j <= i; ++j) {
         printf("%02d ", j);
        }
      printf("\n");
    }
   return 0;
}
