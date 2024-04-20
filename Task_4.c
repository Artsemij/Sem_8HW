#include <stdio.h>

// Функция для определения, есть ли в массиве два одинаковых элемента
int is_two_same(int size, int a[]) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (a[i] == a[j]) {
                return 1; // Найдено два одинаковых элемента
            }
        }
    }
    return 0; // Одинаковых элементов не найдено
}

int main() {
    int arr[] = {1, 3, 5, 7, 2, 6, 4, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = is_two_same(n, arr);
    if (result == 1) {
        printf("В массиве есть два одинаковых элемента\n");
    } else {
        printf("В массиве нет двух одинаковых элементов\n");
    }
    return 0;
}