#include <stdio.h>

// Функция для определения цвета клетки по координатам
char* chessSquareColor(char column, char row) {
    int col = column - 'A';
    int rw = row - '1';
    if ((col + rw) % 2 == 0) {
        return "BLACK";
    } else {
        return "WHITE";
    }
}

int main() {
    char col, rw;
    printf("Введите букву и цифру координаты клетки (например, A1): ");
    scanf(" %c%c", &col, &rw);
    char* color = chessSquareColor(col, rw);
    printf("Цвет клетки: %s\n", color);
    return 0;
}