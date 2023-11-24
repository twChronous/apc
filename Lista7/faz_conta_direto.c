#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
    int result = 0;
    for(int i = 0; i < parcelas; i++) {
        int input = 0;
        scanf("%d", &input);
        if(op == '+'){
            result += input;
        } else if(op == '-') {
            if (result == 0) result = input;
            else result -= input;
        }
    }
    return result;
}

int main() {
    int n = faz_conta_direito(4, '-');
    printf("%d\n", n);
}