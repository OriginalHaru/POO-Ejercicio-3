#pragma once
#include <iostream>
#include <string>

using namespace std;

class Figura
{
    private:
        int lado;
        int altura;
    public:
        Figura(){}
        Figura(int _lado, int _altura);
        ~Figura(){};

        void MostrarResultados(int _lado, int _altura);
        void CalcularArea(int _lado, int _altura);
        void CalcularPerimetro(int _lado , int _altura);

};

Figura::Figura(int _lado, int _altura)
{
    lado = _lado;
    altura = _altura;
}

void Figura::CalcularArea(int _lado, int _altura)
{
    int area;
     area =_lado * _altura;
      cout << "==========================================================" << endl;
      cout << "El area de este rectangulo es " << area << " centimetros" <<endl;
      cout << "==========================================================" << endl;


}

void Figura::CalcularPerimetro(int _lado , int _altura)
{
    int perimetro;
    perimetro = _lado * _altura;
    cout << "==========================================================" << endl;
    cout << "El perimetro de este triangulo es " << perimetro << " centimetros" << endl;
    cout << "==========================================================" << endl;

}

void Figura::MostrarResultados(int _lado, int _altura)
{
    int perimetro;
    int area;
     perimetro = _lado * 2;
     area = _lado * 4;
     cout << "==========================================================" << endl;
     cout << "El perimetro de este cuadrado es de " << perimetro << " centimetros" << endl;
     cout << "EL area de este cuadradro es de " << area << " centimetros" << endl;
     cout << "==========================================================" << endl;
}
