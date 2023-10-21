#include <stdio.h>
  
void sort(int arr[], int n) {
    int i, j, min_index, temp;
    
    for (i = 0; i < n - 1; i++) {
        min_index = i;

        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}
int main(){
    int size = 0;
    scanf("%d", &size);

    int arr[size];
    for(int i = 0; i < size; i++) {
        arr[i] = 0;
        scanf("%d", &arr[i]);
    }
    sort(arr, size);
    printf("%d\n%d", arr[1], arr[2]);
}