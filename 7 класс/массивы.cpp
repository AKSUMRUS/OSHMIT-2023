#include<iostream>

using namespace std;

int main() {
    // int a[n]; -- создать массив из n переменных
    // a[i] -- обратиться к переменной номер i (считаем с нуля)

    int n;
    // Задаем размер массива
    cin >> n;
    
    int a[n];

    // Получаем
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int x;
    // Получаем x
    cin >> x;
    int cnt = 0;

    // Пройдемся по массиву
    for(int i = 0; i < n; i++) {
        // Если i-й элемент равен x
        if(a[i] == x) {
            // +1 к ответу
            cnt = cnt+1;
        }
    }

    cout << cnt << "\n";
    return 0;
}
