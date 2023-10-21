#include <stdio.h>

void printArray(int arr[], int size){
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
}

int counteven(int arr[], int size) {
    int odd;
    for(int i = 0; i < size; i++) {
        if (arr[i] % 2 !=0) {
            odd += 1;
        } 
    }
    return odd;
}
int main(){
    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = 0;
        scanf("%d", &arr[i]);
    }
    int oddSize = counteven(arr, size);
    int evenSize =  size - oddSize;
    int oddarr[oddSize];
    int evenarr[evenSize];

    for(int i = 0; i < size; i++) {
        if (arr[i] % 2 !=0) {
            oddarr[i] = arr[i];
        } else {
            evenarr[i] = arr[i];
        }
    }
    printArray(oddarr, oddSize);
    printf("\n");
    printArray(evenarr, evenSize);

}
