#include <iostream>
#include <cmath>

using namespace std; // Adicione esta linha para usar o namespace std

class Ponto {
private:
    double x;
    double y;

public:
    Ponto() : x(0.0), y(0.0) {}

    Ponto(double x, double y) : x(x), y(y) {}

    void setCoordenadas(double novoX, double novoY) {
        x = novoX;
        y = novoY;
    }

    double getX() {
        return x;
    }

    double getY() {
        return y;
    }

    double calcularDistancia() {
        return sqrt(x * x + y * y);
    }
};

int main() {
    Ponto p1(3, 4);
    double distancia_p1 = p1.calcularDistancia();
    cout << "A distancia do ponto (3, 4) ate a origem e aproximadamente " << distancia_p1 << endl;

    Ponto p2(-2, 7);
    p2.setCoordenadas(1, 1);
    double distancia_p2 = p2.calcularDistancia();
    cout << "A distancia do ponto (1, 1) ate a origem e aproximadamente " << distancia_p2 << endl;

    Ponto p3(0, 3);
    Ponto p4(4, 0);
    double distancia_p3 = p3.calcularDistancia();
    double distancia_p4 = p4.calcularDistancia();
    cout << "A distancia do ponto (0, 3) ate a origem e " << distancia_p3 << " e do ponto (4, 0) ate a origem e " << distancia_p4 << endl;

    Ponto pontos[3];
    pontos[0].setCoordenadas(2, 2);
    pontos[1].setCoordenadas(-1, 5);
    pontos[2].setCoordenadas(0, 0);
    for (int i = 0; i < 3; ++i) {
        double distancia = pontos[i].calcularDistancia();
        cout << "Distancia do ponto " << i + 1 << " ate a origem: " << distancia << endl;
    }

    Ponto p5;
    cout << "Coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;
    p5.setCoordenadas(8, -3);
    cout << "Novas coordenadas do ponto p5: (" << p5.getX() << ", " << p5.getY() << ")" << endl;

    return 0;
}
