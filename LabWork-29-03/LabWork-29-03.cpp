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
    /* Чи є серед заданих точок «особливі» – такі,
     * що лежить в ε-околі початку координат? */
    std::cout << "Input the eps: ";
    double eps; std::cin >> eps;
    if (A.distance(CPoint<int>()) <= eps) std::cout << A << " is special\n";
    if (B.distance(CPoint<int>()) <= eps) std::cout << B << " is special\n";
    if (C.distance(CPoint<int>()) <= eps) std::cout << C << " is special\n";
}

CPoint<int> read_point()
{
    std::cout << "Input two integers: ";
    int x, y;
    std::cin >> x >> y;
    return CPoint<int>(x, y);
}
