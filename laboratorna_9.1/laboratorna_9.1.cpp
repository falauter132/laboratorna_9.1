#include <iostream>
#include <Windows.h>
#include <cmath>

using namespace std;

int main() {
    int a = 19;

    for (int i = 19; i < 35; i++) {
        if (i % 2 == 0) {
            cout << i << endl;
        }
    }

    return 0;
}

//1.2///////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, n;

    cout << "Введіть a: ";
    cin >> a;
    cout << "Введіть b: ";
    cin >> b;
    cout << "Введіть n: ";
    cin >> n;

    for (int i = a; i <= b; i++) {
        if (i % n != 0) {
            cout << i << endl;
        }
    }

    return 0;
}

//22////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x;
    cout << "Введіть значення x: ";
    cin >> x;

    double f = (x + x) / 5;
    cout << "Значення функції f(x) = (x + x) / 5 дорівнює: " << f << endl;

    return 0;
}

//3.1///////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double result = 0.0;

    for (int i = 1; i <= 20; ++i) {
        for (int j = i; j <= 30; ++j) {
            result += (i * 1.0) / j;
        }
    }

    cout << "Результат: " << result << endl;
    return 0;
}

//3.2///////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int totalSum = 0;
    for (int i = 1; i <= 10; ++i) {
        int product = 1;
        for (int j = 1; j <= i; ++j) {
            product *= (i + j);
        }
        totalSum += product;
    }

    cout << "Результат: " << totalSum << endl;
    return 0;
}

//44////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    double x;

    cout << "Введіть n (натуральне число): ";
    cin >> n;
    cout << "Введіть x (дійсне число): ";
    cin >> x;

    double totalSum = 0.0;

    for (int i = 1; i <= n; ++i) {
        for (int j = 2; j <= n; ++j) {
            totalSum += (x + i + j);
        }
    }

    cout << "Результат: " << totalSum << endl;
    return 0;
}

//55////////////////////////////////////////////////////////////////

int main() {
    double p = 2.4; // Ціна за одиницю

    cout << "Кількість  Вартість" << endl;
    cout << "-------------------" << endl;

    for (int i = 2; i <= 10; ++i) {
        double cost = i * p;
        cout << i << "         " << cost << " грн" << endl;
    }

    return 0;
}

//66////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double ost, step, poch = -5.5, sum = 0;

    cin >> ost >> step;

    for (poch; poch < ost;) {
        poch += step;
        sum += poch;
    }
    cout << sum;

    return 0;
}

//77////////////////////////////////////////////////////////////////

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть n (рекомендується n <= 12): ";
    cin >> n;

    int sum = 0;
    int fact = 1;

    for (int i = 1; i <= n && fact > 0; ++i) {
        fact *= i;
        sum += fact;
    }

    cout << sum;
    return 0;
}