#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    int d = 0;
    int e = 0;
    int u = 8;
    int n;
    int K1, K2, P1, P2;
    float x1, x2;
    int c = 0;
    cout << "Введите длину и высоту поля=\t\t\t\t";
    cin >> n;
    int k = n * n;
    cout << "Введите значение начального диапазона=\t\t\t";
    cin >> K1;
    cout << "Введите значение конечного диапазона=\t\t\t";
    cin >> K2;
    cout << "Введите начальную погрешность=\t\t\t\t";
    cin >> P1;
    cout << "Введите конечную погрешность=\t\t\t\t";
    cin >> P2;

    int* mas = new int[k];
    for (int i = 1; i < 8; i++) {
        do {
            mas[i] = rand() % (K1 + K2);
            e = e + mas[i];
            d = d + mas[i];

            if (mas[i] == 1 && e < n) {
                x1 = ((P1 * u) / 100);
                e = e + 1;
                d = d + 1;
            }

            else
            {
                if (mas[i] > 1 && e < n)
                {
                    x1 = (((100 - P1) * u) / 100);
                    e = e + mas[i];
                    d = d + mas[i];
                }
            }
        } while (e == n);
    }
    cout << "Количество дней, за которое бактерии заполнят поле=\t" << d << endl;
    for (int i = 8; i < 14; i++)
    {
        if (mas[i] = 1 && e >= n)
        {
            x2 = (P2 * mas[14]) / 100;
            c = c + 1;
        }
        else
        {
            if (d >= 14 && e >= n)
            {
                x2 = ((100 - P2) * mas[14]) / 100;
                c = c + mas[i];
            }
        }

    }
    cout << "Количество погибших бактерий=\t\t\t\t" << c << endl;
    system("pause");
    return 0;
}
