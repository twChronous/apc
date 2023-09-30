#include <stdio.h>

int main() {
    int sumpar = 0,sumimpar= 0, input = 1;
    
    while (input != 0){
        scanf("%d", &input);
        if(input % 2 == 0) {
            sumpar += input;
        } else sumimpar += input;
    }
    printf("%d %d", sumpar, sumimpar);
    return 0;
}