#include <stdio.h>

int findMinIndex(int arr[], int n) {
    int min = arr[0];
    int minIndex = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
            minIndex = i;
        }
    }

    return minIndex;
}

int main(){
    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = 0;
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findMinIndex(arr, size));
}
