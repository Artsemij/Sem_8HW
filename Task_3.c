#include <stdio.h>

// Функция для нахождения максимального элемента в массиве
int find_max_array(int size, int a[]) {
    int max = a[0]; // Предполагаем, что первый элемент - максимальный

    for (int i = 1; i < size; i++) {
        if (a[i] > max) { // Если находим элемент больше текущего максимума
            max = a[i];   // Обновляем максимум
        }
    }
    return max; // Возвращаем максимальный элемент
}

int main() {
    int arr[] = {23, 56, 12, 67, 4, 78, 45, 87};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = find_max_array(n, arr);
    printf("Максимальный элемент в массиве: %d\n", max);
    return 0;
}