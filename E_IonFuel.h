/*
Proyecto Kerbal Space Program 2
Ramiro Flores Villarreal
A01710879
*/

/*
Clases hijas de la clase Engines contiene uno de los
tres tipos de engines disponible (Ion Fuel)
LiquidFuel, SolidFuel y IonFuel
 */

#ifndef IONFUEL_H_
#define IONFUEL_H_

#include <iostream>
using namespace std;

//importacion de archivo de donde se hereda
#include "Engines.h"

//Declaracion de clase IonFuel que hereda de Engine
class IonFuel : public Engine
{

    //atributos
    private:
        double consumoXen;
        double consumoElec;

    //metodos
    public:

        //constructores
        IonFuel() :
            Engine(),
            consumoXen(0.0),
            consumoElec(0.0) {};

        IonFuel(string tip, double mas, int cos, double atm, double vac, 
        double atmT, double vacT, double consumoXen_c, double consumoElec_c) :
            Engine(tip, mas, cos, atm, vacT, atmT, vacT),
            consumoXen(consumoXen_c),
            consumoElec(consumoElec_c) {};

        //Getters
        double GetConsumoXenon()
    {
            return consumoXen;
    }
        double GetTVC()
    {
            return consumoElec;
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
            cout << "Engine Xenon Usage:" << GetConsumoXenon() << endl;
            cout << "Engine TVC:" << GetTVC() << endl;

        }
};


#endif