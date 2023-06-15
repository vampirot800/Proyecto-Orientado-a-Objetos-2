/*
Proyecto Kerbal Space Program 2
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clases hijas de la clase Engines contiene uno de los
 *tres tipos de engines disponible (Liquid Fuel)
 * LiquidFuel, SolidFuel y IonFuel
 */

#ifndef LIQUIDFUEL_H_
#define LIQUIDFUEL_H_

#include <iostream>
using namespace std;

//importacion de archivo de donde se hereda
#include "Engines.h"

//Declaracion de clase LiquidFuel que hereda de Engine
class LiquidFuel : public Engine
{

    //atributos
    private:
        double consumoMax;
        float TVC;

    //metodos
    public:

        //constructores
        LiquidFuel() :
            Engine(), consumoMax(0.0), TVC(0.0) {};
        LiquidFuel(string tip, double mas, int cos, double atm, double vac, 
        double atmT, double vacT, double consumoMax_c, float TVC_c) :
            Engine(tip, mas, cos, atm, vacT, atmT, vacT),
            consumoMax(consumoMax_c),
            TVC(TVC_c) {};

        //Getters
        double GetConsumoMax()
    {
            return consumoMax;
    }
        float GetTVC()
    {
            return TVC;
    }

    //Funcion abstracta imprime stats para subclase de Engines, se agregan variables 
        void ShowStats(){

            cout << "Engine Type:" << tipo << endl;
            cout << "Engine Mass:" << masa << endl;
            cout << "Engine Cost:" << costo << endl;
            cout << "atm Thrust:" << atmThrust << endl;
            cout << "vac Thrust:" << vacThrust << endl;
            cout << "atm TWR:" << atmTWR << endl;
            cout << "vac TWR:" << vacTWR << endl;
            cout << "Engine Max Consume:"<< GetConsumoMax() << endl;
            cout << "Engine TVC:" << GetTVC() << endl;

        }
};

#endif