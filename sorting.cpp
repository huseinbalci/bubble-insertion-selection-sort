#include <iostream>

using namespace std;

void bubbleSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (array[j + 1] < array[j]) {
                swap(array[j + 1], array[j]);
            }
        }
    }
}

void selectionSort(int array[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = i + 1; j < size; ++j) {
            if (array[j] < array[i]) {
                swap(array[j], array[i]);
            }
        }
    }
}

void insertionSort(int array[], int size) {
    int i, j, key;
    for (i = 1; i < size; ++i) {
        key = array[i];
        j = i - 1;
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

int main() {
    int array[] = {3, 6, 12, 55, 0,
                   9, 13, 11, 7, 8,
                   32, 43, 54, 65, 1};
    int array2[] = {98, 4, 7, 11, 0,
                    66, 789, 121, 2};
    int array3[] = {11, 23, 4, 6, 8,
                    34, 655, 87, 1, 9};

    int size = sizeof(array) / sizeof(int);
    int size2 = sizeof(array2) / sizeof(int);
    int size3 = sizeof(array3) / sizeof(int);
    bubbleSort(array, size);
    selectionSort(array2, size2);
    insertionSort(array3, size3);

    cout << "Bubble Sorted Array = {";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << "}" << endl;

    cout << "Selection Sorted Array = {";
    for (int i = 0; i < size2; ++i) {
        cout << array2[i] << " ";
    }
    cout << "}" << endl;

    cout << "Insertion Sorted Array = {";
    for (int i = 0; i < size3; ++i) {
        cout << array3[i] << " ";
    }
    cout << "}" << endl;
}