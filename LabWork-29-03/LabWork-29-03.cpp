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
    int a = A.distance(B);
    int b = B.distance(C);
    int c = C.distance(A);
    int P = a + b + c;
    double p = P * 0.5;
    double S = sqrt(p * (p - a) * (p - b) * (p - c));
    std::cout << " P = " << P << "    S = " << S << '\n';
}
