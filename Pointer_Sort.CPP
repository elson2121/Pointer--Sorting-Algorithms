/*
 * Pointer Sorting Algorithm Implementation
 * Name: Samuel Diriba
 * Group: 2
 * ID: RNS-9464/23
 */

#include <iostream>
using namespace std;

// Function to print the array using pointers
void printArray(int* arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << *arr[i] << " ";
    }
    cout << endl;
}

// Selection Sort using pointers
void selectionSort(int* arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int* minIndex = arr[i];
        int minPos = i;

        for (int j = i + 1; j < n; j++) {
            if (*arr[j] < *minIndex) {
                minIndex = arr[j];
                minPos = j;
            }
        }
        swap(arr[i], arr[minPos]);
    }
}

// Partition function for Quick Sort
int partition(int* arr[], int low, int high) {
    int* pivot = arr[high]; 
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (*arr[j] < *pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Quick Sort using pointers
void quickSort(int* arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

// Merge function for Merge Sort
void merge(int* arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int* L[n1], * R[n2];

    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (*L[i] <= *R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort using pointers
void mergeSort(int* arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Driver function
int main() {
    int arr[] = {42, 23, 16, 15, 8, 4};  
    int n = sizeof(arr) / sizeof(arr[0]);

    int* ptrArr[n];
    for (int i = 0; i < n; i++)
        ptrArr[i] = &arr[i];

    cout << "Original array: ";
    printArray(ptrArr, n);

    // Perform Selection Sort
    selectionSort(ptrArr, n);
    cout << "After Selection Sort: ";
    printArray(ptrArr, n);

    // Reset pointers
    for (int i = 0; i < n; i++)
        ptrArr[i] = &arr[i];

    // Perform Quick Sort
    quickSort(ptrArr, 0, n - 1);
    cout << "After Quick Sort: ";
    printArray(ptrArr, n);

    // Reset pointers
    for (int i = 0; i < n; i++)
        ptrArr[i] = &arr[i];

    // Perform Merge Sort
    mergeSort(ptrArr, 0, n - 1);
    cout << "After Merge Sort: ";
    printArray(ptrArr, n);

    return 0;
}
