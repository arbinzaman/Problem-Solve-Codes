#include <bits/stdc++.h>
using namespace std;
int main()
{
    float A, B, C, triangle, radius, trapezium, square, rectangle;
    cin >> A >> B >> C;
    triangle = 0.5 * A * C;
    radius = 3.14159 * C * C;
    trapezium = 0.5 * (A + B) * C;
    square = B * B;
    rectangle = A * B;

    cout << "TRIANGULO: " << fixed << setprecision(3) << triangle << endl;
    cout << "CIRCULO: " << fixed << setprecision(3) << radius << endl;
    cout << "TRAPEZIO: " << fixed << setprecision(3) << trapezium << endl;
    cout << "QUADRADO: " << fixed << setprecision(3) << square << endl;
    cout << "RETANGULO: " << fixed << setprecision(3) << rectangle << endl;
    return 0;
}
