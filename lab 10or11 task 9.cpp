#include <stdio.h>

int linearsearch(int arr[], int size, int target, int index) {
    if(index == size) {
        return -1;
    }
    if(arr[index] == target) {
        return index;
    }
    return linearsearch(arr, size, target, index + 1);
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 30;

    int result = linearsearch(arr, size, target, 0);

    if(result == -1) {
        printf("Element %d not found in the array\n", target);
    } else {
        printf("Element %d found at index %d\n", target, result);
    }

    return 0;
}

