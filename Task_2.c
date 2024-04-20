#include <stdio.h>

// Функция для обмена значений
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Функция, которая ставит в начало массива все чётные элементы, а в конец – все нечётные
void sort_even_odd(int n, int a[]) {
    int left = 0, right = n - 1;
    while (left < right) {
        while (a[left] % 2 == 0 && left < right) {
            left++;
        }
        while (a[right] % 2 != 0 && left < right) {
            right--;
        }
        if (left < right) {
            swap(&a[left], &a[right]);
            left++;
            right--;
        }
    }
}

int main() {
    int arr[] = {1, 3, 2, 5, 4, 6, 8, 7, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort_even_odd(n, arr);
    printf("Отсортированный массив: \n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}