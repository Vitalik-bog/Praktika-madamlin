#include <iostream>

using namespace std;

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;
    }
}

int main() {
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int arr[n];

    cout << "Введите элементы массива:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}