#include<iostream>
#include<cmath>

using namespace std;

class Ponto{
private:
    /* data */
public:
    int x;
    int y;
    //Ponto(){}
    Ponto(){
        x=0;
        y=0;
    }
    Ponto(double _x, double _y){
        x=_x;
        y=_y;
    }
    double getX(){ //exibe valor de x
            return x;
        }

    double getY(){//exibe valor de y
            return y;
    }
    void setX(int _x){
        x=_x;
    }
    void setY(int _y){
        y=_y;
    }
    void obterCoordenadaX(double _x){ 
        setX(_x);
    }
    void obterCoordenadaY(double _y){
        setY(_y);
    }
    void obterCoordenadas(double _x, double _y){
        obterCoordenadaX(_x);
        obterCoordenadaY(_y);
    }
    double distanciarOrigem(const Ponto &a){
        return (sqrt(pow(a.x - x,2.0) + pow(a.y - y,2.0)));
    }
    double distanciarOrigem(){//sobrecarga da anterior
        return (sqrt(pow(x - 0,2.0) + pow(y - 0,2.0)));
    }

};

int main(){

    Ponto p0;
    Ponto p1;
    Ponto p2;
    Ponto p3;
    Ponto p4;
    Ponto p5;
    Ponto pontos[3];

    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;
    p1.setX(3);
    p1.setY(2);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;
    //p1.obterCoordenadaX(3);
    //p1.obterCoordenadaY(4);
    p1.obterCoordenadas(3,4);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;
    cout<<p0.distanciarOrigem(p1)<<endl;
    cout<<p1.distanciarOrigem()<<endl<<endl;


    //p2.obterCoordenadaX(1);
    //p2.obterCoordenadaY(1);
    p2.obterCoordenadas(1,1);

    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;
    cout<<p2.distanciarOrigem()<<endl;
    cout<<p0.distanciarOrigem(p2)<<endl<<endl;

    p3.obterCoordenadas(0,3);
    cout<<p3.distanciarOrigem()<<endl;
    cout<<p0.distanciarOrigem(p3)<<endl<<endl;

    p4.obterCoordenadas(4,0);
    cout<<p4.distanciarOrigem()<<endl;
    cout<<p0.distanciarOrigem(p4)<<endl<<endl;

    pontos[0].obterCoordenadas(2,2);
    pontos[1].obterCoordenadas(-1,5);
    pontos[2].obterCoordenadas(0,0);
    for(int i=0;i<3;i++){
        cout<<pontos[i].distanciarOrigem()<<endl;
        cout<<p0.distanciarOrigem(pontos[i])<<endl<<endl;
    }

    cout<<p5.getX()<<endl;
    cout<<p5.getY()<<endl;

    p5.obterCoordenadas(8,-3);

    cout<<p5.getX()<<endl;
    cout<<p5.getY()<<endl;

    
}