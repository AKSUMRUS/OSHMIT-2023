#include <iostream>

using namespace std;

int main() {
    // Объявляем переменные a и b
    int a, b;

    // Получаем их
    cin >> a >> b;

    // Сравниваем их
    if(a > b) {
        // Если a > b, выводим знак
        cout << ">";
    } else if(a < b) {
        // Иначе, если a < b, выводим знак
        cout << "<";
    } else {
        // Иначе, остается только один вариант: a = b. Выводим знак
        cout << "=";
    }

    return 0;
}
