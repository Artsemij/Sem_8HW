#include <stdio.h>

// Функция для вычисления среднего арифметического элементов на главной диагонали
float average_diagonal(int n, int matrix[][n]) {
    float sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i];
        count++;
    }
    return sum / count;
}

int main() {
    const int n = 5;
    int matrix[n][n];

    // Считываем входные данные
    printf("Введите элементы квадратной матрицы:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Вычисляем среднее арифметическое на главной диагонали
    float avg = average_diagonal(n, matrix);

    // Определяем количество положительных элементов, превышающих среднее арифметическое
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (matrix[i][i] > avg) {
            count++;
        }
    }

    // Выводим результат
    printf("Количество положительных элементов на главной диагонали, превышающих среднее арифметическое: %d\n", count);

    return 0;
}