#include <iostream>

using namespace std;

int C1() {
    setlocale(LC_ALL, "ru");
    // Ввод значений
    double a, b, c;
    cout << "Введите a, b, c: ";
    cin >> a >> b >> c;

    // Проверка неравенств
    bool prov1 = (a < b);
    bool prov2 = (b < c);

    // Вывод результата
    if (prov1 && prov2) {
        cout << "Неравенства выполняются: a < b < c" << endl;
    }
    else {
        cout << "Неравенства не выполняются" << endl;
    }

    return 0;
}
int C2() {
    setlocale(LC_ALL, "ru");
    // Ввод данных
    double a, b, c, d;
    cout << "Введите стороны первого прямоугольника (a, b): ";
    cin >> a >> b;
    cout << "Введите стороны второго прямоугольника (c, d): ";
    cin >> c >> d;

    // Проверка возможности вложения
    bool canBeNested = false;
    if (a <= c && b <= d) {
        canBeNested = true;
    }
    else if (a <= d && b <= c) {
        canBeNested = true;
    }

    // Вывод результата
    if (canBeNested) {
        cout << "Первый прямоугольник можно вложить во второй." << endl;
    }
    else {
        cout << "Первый прямоугольник нельзя вложить во второй." << endl;
    }

    return 0;
}
int C3() {
    setlocale(LC_ALL, "ru");
    // Ввод данных
    float a, b, c, x, y;
    cout << "Введите длины ребер кирпича (a, b, c): ";
    cin >> a >> b >> c;
    cout << "Введите длины сторон отверстия (x, y): ";
    cin >> x >> y;

    // Проверка, пройдет ли кирпич через отверстие
    bool fits = false;
    if (a <= x && b <= y) fits = true;
    if (a <= y && b <= x) fits = true;
    if (a <= x && c <= y) fits = true;
    if (a <= y && c <= x) fits = true;
    if (b <= x && c <= y) fits = true;
    if (b <= y && c <= x) fits = true;

    // Вывод результата
    if (fits) {
        cout << "Кирпич пройдет через отверстие." << std::endl;
    }
    else {
        cout << "Кирпич не пройдет через отверстие." << std::endl;
    }

    return 0;
}