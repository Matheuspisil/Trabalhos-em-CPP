#include <iostream>

using namespace std;

int main()
// projeto simples de faculdade //
{

  float num1, num2, resultado;

  int op;

  cout <<"Informe o 1o. n�mero: ";

  cin >>num1;

  cout <<"Informe o 2o. n�mero: ";

  cin >>num2;

  cout <<"------------------------------------\n";

  cout <<"Escolha a opera��o matem�tica: \n";

  cout <<"1 - Adi��o\n";

  cout <<"2 - Subtra��o\n";

  cout <<"3 - Divis�o\n";

  cout <<"4 - Multiplica��o\n";

  cout <<"Op��o: ";

  cin >>op;

  if (op==1)

  {

    resultado=num1+num2;

    cout <<num1 << " + " << num2 << " = " << resultado;

  }

  else if (op==2)

  {

    resultado=num1-num2;

    cout <<num1 << " - " << num2 << " = " << resultado;

  }

  else if (op==3)

  {

    resultado=num1/num2;

    cout <<num1 << " / " << num2 << " = " << resultado;

  }

  else if (op==4)

  {

    resultado=num1*num2;

    cout <<num1 << " * " << num2 << " = " << resultado;

  }

  else

  {

    cout <<"Digite numeros validos!!!";

  }

}
