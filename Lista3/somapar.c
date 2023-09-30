#include <stdio.h>

int main() {
    int sum = 0, input;
    
    while (input != 0){
        scanf("%d", &input);
        if(input % 2 == 0) {
            sum += input;
        }
    }
    
    printf("%d", sum);
    return 0;
}