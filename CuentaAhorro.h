#ifndef CUENTAAHORROS_H_INCLUDED
#define CUENTAAHORROS_H_INCLUDED

#include <string>
using std::string;
#include "Cuenta.h"


class CuentaAhorro : public Cuenta
{
private:
    double tasaInteres;
public:
    CuentaAhorro(long,string,double,double);
    double calcularInteres(double);
    void getTasaInteres(double);
    double setTasaInteres();
    void imprimirAhorro();
    double calcularInteres();
};



#endif // CUENTAAHORROS_H_INCLUDED
