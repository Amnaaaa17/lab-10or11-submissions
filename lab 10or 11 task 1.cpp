#include <stdio.h>

// Recursive function to calculate sum of digits of a single number
int sumDigits(int n) {
    if (n == 0)
        return 0;
    return (n % 10) + sumDigits(n / 10);
}

// Recursive function to calculate sum of digits of all numbers in an array
int sumArrayDigits(int arr[], int n) {
    if (n == 0)  // Base case: no numbers left
        return 0;
    return sumDigits(arr[n-1]) + sumArrayDigits(arr, n-1);
}

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d numbers: ", n);
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);

    int totalSum = sumArrayDigits(arr, n);
    printf("Sum of digits of all numbers = %d\n", totalSum);

    return 0;
}

