#include <iostream>
#include <string>
#include "Figura.hpp"

using namespace std;

int main()
{

Figura cuadrado(2,2);
Figura triangulo(4,8);
Figura rectangulo(3,2);


cuadrado.MostrarResultados(2,2);
triangulo.CalcularPerimetro(4,8);
rectangulo.CalcularArea(3,2);

return 0;
}