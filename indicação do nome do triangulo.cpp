#include <iostream>

using namespace std;

int main()
//codigo feito sem atenção a acentuação por motivos de incompatibilidade de copilação,//
//quando usar lembrar de alterar a acemtuação de maneira correta.//
{

  float lado1, lado2, lado3;

  cout <<"Medida do primeiro lado: ";

  cin >>lado1;

  cout <<"Medida do segundo lado: ";

  cin >>lado2;

  cout <<"Medida do terceiro lado: ";

  cin >>lado3;

  if (lado1==lado2 && lado2==lado3)

  {

    cout <<" Um triangulo equilatero!";

  }

  else if (lado1==lado2 || lado2==lado3 || lado3==lado1)

  {

    cout <<"Um triangulo escaleno!";

  }

  else

  {

    cout <<"Um triangulo isosceles!";

  }

}
