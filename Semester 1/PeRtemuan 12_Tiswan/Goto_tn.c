#include <windows.h>

void tn (int a, int b) {
    COORD coord;
    coord.X = a;
    coord.Y = b;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
