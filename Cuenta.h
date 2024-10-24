#ifndef CUENTA_H
#define CUENTA_H

#pragma once
using namespace std;
#include <iostream>


class Cuenta
{
protected:
    long numeroCuenta;
    string nombrePropietario;
    double saldoCuenta;
public:
    Cuenta(long,string,double);
    Cuenta();
    void getNumeroCuenta(long);
    long setNumeroCuenta();
    void getNombrePropietario(string);
    string setNombrePropietario();
    void getSaldoCuenta(double);
    double setSaldoCuenta();
    void abonar(double);
    void cargar(double);
    bool validar(double);//opcion 1 valida saldo inicial, opcion 2 valida para retiro de dinero
    void imprimir();

};


#endif