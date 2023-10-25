#include<iostream>
#include<cmath>

using namespace std;

class Ponto{ 
    public:
        double x;
        double y;
        Ponto(double x, double y) : x(x), y(y) {}

        double calcularDistancia() {
             return sqrt(x * x + y * y);
    }
};

int main() {
    Ponto p1(3, 4);
    double distancia = p1.calcularDistancia();
    cout << "A distAncia do ponto (" << p1.x << ", " << p1.y << ") ateh a origem eh aproximadamente " << distancia << endl;

    return 0;
}
