#include <iostream>
using namespace std;
#include <iomanip>
using std::setprecision;
using std::setw;
using std::setfill;
#include "Cuenta.h"
#include "Cuenta.cpp"
#include "CuentaAhorro.h"
#include "CuentaAhorro.cpp"

int main()
{
    cout<<"\n-----------------------------------------";

    
    CuentaAhorro c1(456,"Janet Valencia", 5500.50, 0.1);

    cout<<setfill('.');
    c1.imprimirAhorro();

    cout<<"\nEl interes aplicado a la cuenta es de "<<setw(24)<<" = "<<c1.calcularInteres();
    c1.abonar(c1.calcularInteres());
    c1.imprimirAhorro();



    cout<<"\n-----------------------------------------";
    return 0;
}
