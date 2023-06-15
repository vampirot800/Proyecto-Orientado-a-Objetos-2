/*
Proyecto Kerbal Space Program 2
Ramiro Flores Villarreal
A01710879
*/

/*
 *Clases hijas de la clase Engines contiene uno de los
 *tres tipos de engines disponible (Solid Fuel)
 * LiquidFuel, SolidFuel y IonFuel
 */

#ifndef E_SOLIDFUEL_H_
#define E_SOLIDFUEL_H_

#include <iostream>
using namespace std;

//importacion de archivo de donde se hereda
#include "Engines.h"

//Declaracion de clase SolidFuel que hereda de Engine
class SolidFuel: public Engine{

    //atributos
    private:
        float burn;
        int comb;

    //metodos
    public:
    
        //constructores
        SolidFuel() :
            Engine(),
            burn(0.0),
            comb(0) {};
        SolidFuel(string tip, double mas, int cos, double atm, 
        double vac,double atmT, double vacT, float burn_c, int comb_c) :
            Engine(tip, mas, cos, atm, vacT, atmT, vacT),
            burn(burn_c),
            comb(comb_c) { };

        float GetBurn() {
            return burn;
        };
        int GetComb() {
            return comb;
        };
         int setComb(string newcomb) {
             return comb;
         };
         int setComb(string newcomb, int number) {
             return comb;
         };
         
        //Ejemplo de sobrecarga
        // int setComb(string newcomb) {
        //     return comb;
        // };
        // int setComb(string newcomb, int number) {
        //     return comb;
        // };

    /*
    Se convierte Engines a clase abstracta, creando un solo metodo
    que devolvera diferrentes estadisticas dependiendo del tipo de 
    engine, se agregan variables 
    */
        void ShowStats(){

            cout << "Engine Type:" << tipo << endl;
            cout << "Engine Mass:" << masa << endl;
            cout << "Engine Cost:" << costo << endl;
            cout << "atm Thrust:" << atmThrust << endl;
            cout << "vac Thrust:" << vacThrust << endl;
            cout << "atm TWR:" << atmTWR << endl;
            cout << "vac TWR:" << vacTWR << endl;
            cout << "Engine Burn:" << GetBurn() << endl;
            cout << "Engine Comb:" << GetComb() << endl;

        }
};

#endif