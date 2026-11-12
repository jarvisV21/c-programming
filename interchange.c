#include <stdio.h>

int main() {
    int n, i;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int minIdx = 0, maxIdx = 0;
    
    for(i = 1; i < n; i++) {
        if(arr[i] < arr[minIdx]) {
            minIdx = i;
        }
        if(arr[i] > arr[maxIdx]) {
            maxIdx = i;
        }
    }
    
    // Interchanging (swapping) min and max elements
    int temp = arr[minIdx];
    arr[minIdx] = arr[maxIdx];
    arr[maxIdx] = temp;
    
    printf("Array after interchanging largest and smallest:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
