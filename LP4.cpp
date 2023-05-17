#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double x, x_n, x_k, dx, eps;
    const long double pi = 3.141592653589793;
    cout << "Введите значение X_нач: ";
    cin >> x_n;
    cout << "Введите значение X_кон: ";
    cin >> x_k;
    cout << "Введите значение dX: ";
    cin >> dx;
    cout << "Введите значение точность рассчёта: ";
    cin >> eps;
    cout << "\n";
    if (-1 <= x_n && x_k <= 1)
    {
        double x = x_n;
        while (x <= x_k)
        {
            double s = 1, sum = 0;
            int n = 0;
            while (abs(s) > eps)
            {
                s = pow(-1, n + 1) * pow(x, 2 * n + 1) / (2 * n + 1);
                cout << s << endl;
                sum += s
                n += 1;
                cout << n << "  " << x << "   " << sum + pi / 2 << endl;

            }
            cout << n << "  " << x << "   " << sum + pi/2 << endl;
            x += dx;
        }
    }
    else cout << "Данные введены некоректно.";
}
