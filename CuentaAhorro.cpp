#include <iostream>
#include <iomanip>
using namespace std;
#include "CuentaAhorro.h"


    CuentaAhorro::CuentaAhorro(long numeroC,string nombreP,double saldoC,double tasaI):Cuenta( numeroC, nombreP, saldoC)
    {
        getTasaInteres(tasaI);
    }
    
    void CuentaAhorro::getTasaInteres(double tasaI)
    {
        tasaInteres = tasaI;
    }

    double CuentaAhorro::setTasaInteres()
    {
        return tasaInteres;
    }

    void CuentaAhorro::imprimirAhorro()
    {
        imprimir();
        cout<<"\nLa tasa de interes es: "<<setw(39)<<" = "<<setTasaInteres();
    }

    double CuentaAhorro::calcularInteres()
    {
        
        return setTasaInteres() * setSaldoCuenta();
    }
