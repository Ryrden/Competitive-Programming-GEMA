#include <bits/stdc++.h>
using namespace std;

double pi = 3.14159;

double triangulo(double b, double h) {
    return b * h / 2;
}

double circulo(double r) {
    return pi * pow(r, 2);
}

double trapezio(double b, double B, double h) {
    return ((b + B) * h) / 2;
}

double quadrado(double l) {
    return pow(l, 2);
}

double retangulo(double b, double h) {
    return b * h;
}

int main() {
    cout << fixed << setprecision(3);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    double a, b, c;
    cin >> a >> b >> c;

    cout << "TRIANGULO: " << triangulo(a, c) << '\n';
    cout << "CIRCULO: " << circulo(c) << '\n';
    cout << "TRAPEZIO: " << trapezio(a, b, c) << '\n';
    cout << "QUADRADO: " << quadrado(b) << '\n';
    cout << "RETANGULO: " << retangulo(a, b) << '\n';

    return 0;
}
