#include <iostream>
#include "Points.h"
#include <iomanip>

CPoint<int> read_point();

int main()
{
    /* Введіть з клавіатури точки А, В, С (координати задані цілими числами),
     * що є вершинами деякого трикутника. Обчисліть і надрукуйте
     * периметр і площу цього трикутника */
    CPoint<int> A = read_point();
    CPoint<int> B = read_point();
    CPoint<int> C = read_point();
    std::cout << " A = " << A << '\n' << " B = " << B << '\n' << " C = " << C << '\n';
    double a = A.distance(B);
    double b = B.distance(C);
    double c = C.distance(A);
    double P = a + b + c;
    double p = P * 0.5;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << " P = " << P << "    S = " << S << '\n';
}

CPoint<int> read_point()
{
    std::cout << "Input two integers: ";
    int x, y;
    std::cin >> x >> y;
    return CPoint<int>(x, y);
}
