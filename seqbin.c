#include <stdio.h>

void sequentialSearch(int arr[], int n, int item);
void binarySearch(int arr[], int n, int item);
void bubbleSort(int arr[], int n);

int main() {
    int n, choice;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }
  while(1){
    // Ask user for search method
    printf("Choose search method:\n1. Sequential Search\n2. Binary Search\nEnter your choice: ");
    scanf("%d", &choice);
    
    // Input item to search
    int item;
    printf("Enter the element to search: ");
    scanf("%d", &item);
    
    switch (choice) {
        case 1:
            sequentialSearch(arr, n, item);
            break;
        case 2:
            // Sort the array before binary search
            bubbleSort(arr, n);
            binarySearch(arr, n, item);
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
}

    return 0;
}


void sequentialSearch(int arr[], int n, int item) {
    int r = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == item) {
            r = i;
            break; // Stop searching after the first occurrence is found
        }
    }

    if (r != -1) {
        printf("Element first found at index %d\n", r);
    } else {
        printf("Element not found.\n");
    }
}


void binarySearch(int arr[], int n, int item) {
    int beg = 0, end = n - 1, mid;

    while (beg <= end) {
        mid = (beg + end) / 2;
        if (arr[mid] == item) {
            printf("Item found at position %d\n", mid + 1);
            return; 
        } else if (item < arr[mid]) {
            end = mid - 1;
        } else {
            beg = mid + 1;
        }
    }
    printf("Item not found.\n");
}


void bubbleSort(int arr[], int n) {
 for (int i = 0; i < n - 1; i++) {
 for (int j = 0; j < n - i - 1; j++) {
  if (arr[j] > arr[j + 1]) {
                
 int temp = arr[j];
   arr[j] = arr[j + 1];
  arr[j + 1] = temp;
            }
        }
    }
}
    
