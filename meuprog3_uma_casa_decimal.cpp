#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main ()
{
    
    float numero_1, numero_2;
    cout << setprecision (1) << fixed;

    cout << "primeiro_numero: ";
    cin >> numero_1;

    cout << "segundo_numero:  ";
    cin >> numero_2;

    cout << "numero1: " << numero_1 << endl << "numero2: " << numero_2 << endl;
    
    cout << "Soma               =: "   << (numero_1 + numero_2) << endl;
    cout << "Subitração         =: "   << (numero_1 - numero_2) << endl;
    cout << "Multiplicação      =: "   << (numero_1 * numero_2) << endl;
    cout << "Divisão            =: "   << (numero_1 / numero_2) << endl;
    
    return 0;
}