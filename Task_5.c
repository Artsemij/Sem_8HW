#include <stdio.h>

// Функция для поиска индекса минимального элемента в массиве
int find_min_index(int size, int a[]) {
    int min_index = 0;
    for (int i = 1; i < size; i++) {
        if (a[i] < a[min_index]) {
            min_index = i;
        }
    }
    return min_index;
}

// Функция для поиска индекса максимального элемента в массиве
int find_max_index(int size, int a[]) {
    int max_index = 0;
    for (int i = 1; i < size; i++) {
        if (a[i] > a[max_index]) {
            max_index = i;
        }
    }
    return max_index;
}

// Функция для обмена значений
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Функция для замены минимального и максимального элементов местами
void change_max_min(int size, int a[]) {
    int min_index = find_min_index(size, a);
    int max_index = find_max_index(size, a);
    swap(&a[min_index], &a[max_index]);
}

int main() {
    int arr[] = {3, 8, 6, 2, 10, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    change_max_min(n, arr);
    printf("Измененный массив: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}