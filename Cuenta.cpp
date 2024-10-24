#include "Cuenta.h"
#include <iomanip>

    Cuenta::Cuenta(long numeroC,string nombreP,double saldoC)
    {
        getNumeroCuenta(numeroC);
        getNombrePropietario(nombreP);
        if (saldoC>0){getSaldoCuenta(saldoC);}
        else{ cout<<"\nValor de saldo inicial invalido, se establece en $0"; getSaldoCuenta(0);}
        
    }
    Cuenta::Cuenta(){}
    void Cuenta::getNumeroCuenta(long numeroC)
    {
        numeroCuenta = numeroC;
    }
    long Cuenta::setNumeroCuenta()
    {
        return numeroCuenta;
    }
    void Cuenta::getNombrePropietario(string nombreP)
    {
        nombrePropietario = nombreP;
    }
    string Cuenta::setNombrePropietario()
    {
        return nombrePropietario;
    }
    void Cuenta::getSaldoCuenta(double saldoC)
    {
        saldoCuenta = saldoC;
    }
    double Cuenta::setSaldoCuenta()
    {
        return saldoCuenta;
    }
    void Cuenta::abonar(double abono)
    {
        cout <<"\nA continuacion Abonaremos la cantidad de "<<abono; 
        saldoCuenta =  saldoCuenta + abono;
    }

    void Cuenta::cargar(double retiro)
    {
        cout <<"\nA continuacion intentaremos hacer un retiro de "<< retiro;
        if (retiro<=saldoCuenta){saldoCuenta = saldoCuenta - retiro;}
        else {cout<<"\nEl monto de carga exedio el saldo de la cuenta";}
    }
    
    void Cuenta::imprimir()
    {
        cout
        <<"\nEl numero de Cuenta es: " <<setw(38)<<" = "<< setNumeroCuenta()
        <<"\nEl propietario de la cuenta es: "<<setw(30)<<" = "<< setNombrePropietario()
        <<"\nEL saldo de la cuenta es: $"<<setw(35)<<" = "<< setSaldoCuenta();
    }
