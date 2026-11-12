#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    int arr[n];
    double sum = 0, mean, sumSqDiff = 0, stdDeviation;
    
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    
    mean = sum / n;
    
    for(i = 0; i < n; i++) {
        sumSqDiff += pow(arr[i] - mean, 2);
    }
    
    stdDeviation = sqrt(sumSqDiff / n);
    
    printf("Mean = %.2lf\n", mean);
    printf("Standard Deviation = %.2lf\n", stdDeviation);
    
    return 0;
}
