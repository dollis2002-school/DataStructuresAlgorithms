/**
 * @file suv.h
 * @Emiliano Cabrera A01025453, Do Hyun Nam A01025276
 * @brief 
 * @version 0.1
 * @date 2021-09-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef Suv_h
#define Suv_h
#include <iostream>
#include "car.h"
using namespace std;

/*
Class that inherits from the Car class and adds as attribute the traction of the vehicle
as it is an Sports Utility Vehicle
*/
class Suv: public Car { 
    private:
        string traction;
    
    public: 
        Suv();
        Suv(int c, string b, int y, float p, float k, string t);

        void setTraction(string t){ traction = t; };

        string getTraction(){ return traction; };

        void print();
};

// Default constructor
Suv::Suv(): Car(){
    traction = "";
};

// Overloaded constructor
Suv::Suv(int c, string b, int y, float p, float k, string t): Car(c, b, y, p, k){
    traction = t;
}

// Overloaded function to show the data over terminal
void Suv::print(){
    std::cout << "--- Vehiculo ---" << std::endl;
    std::cout << "Modelo: " << brand << " " << year << "\tCodigo: " << code << std::endl;
    std::cout << "Traccion: " << traction << "\tKilometraje: " << km << "Precio: $" << price << std::endl;
}

#endif