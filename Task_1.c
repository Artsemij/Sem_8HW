#include <stdio.h>

void sort_array(int size, int a[]) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j+1]) {
                // Обмен значениями
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort_array(n, arr);
    printf("Отсортированный массив: \n");
    for (int i=0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}