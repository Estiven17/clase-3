#include <iostream>

using namespace std;

int main()
{
  int num , v ;
  float total;

  cout << "escriba un numero del 1 al 4 para determinar el caso: " << endl;
  cout << " 1 para exprecion = 100*n" << endl;
  cout<< " 2 para exprecion = 100-n" << endl;
  cout<< " 3 para  exprecion = 100/n" << endl;
    cout << " : ";
    cin >> num;
  cout <<"ingrese el valor para ingresar en la operacion : ";
    cin >> v;
 cout << " " << endl;
    switch (num)  {

    case  1 :
     total == (100*v );
     break ;
    case 2 :
        total == (100-v);
        break;
    case 3 :
        total== ( 100/v);
        break;
    case default ;
      cout << "eres un bruto ese numero no corresponde a ninguna operacion ";
    break;

    }

    cout << "el resultato de la operacion  " << num << "  es : " << total;


    return 0;
}
