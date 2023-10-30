#include <iostream>

using namespace std;

int main() {
    // Объявляем переменную
    int a;

    // Вводим число
    cin >> a;

    // Модуль Вариант 1
    if(a >= 0) {
        cout << a << "\n";
    } else {
        cout << -a << "\n";
    }

    // Модуль Вариант 2
    if(a > 0) {
        cout << a << "\n";
    } else {
        cout << a*-1 << "\n";
    }

    // Модуль Вариант 3
    if(a >= 0) {
        cout << a << "\n";
    } else if(a < 0) {
        cout << -a << "\n";
    }

    // Модуль Вариант 4
    if(a < 0) {
        a = -a;
    }
    cout << a << "\n";
    

    return 0;
}
