/*
Proyecto Kerbal Space Program 2
Ramiro Flores Villarreal
A01710879
*/

/*
Clase Rocket contiene los métodos requeridos para elegir y sumar todas
las estadisticas del cohete, asi como composicion a la clase Engines.h
*/

#ifndef ROCKET_H_
#define ROCKET_H_

#include "E_IonFuel.h"
#include "E_LiquidFuel.h"
#include "E_SolidFuel.h"

#include <string>
using namespace std;

//Declaracion clase Rocket
class Rocket
{

//Atributos privados
private:
    string pilot;
    double cost;
    double mass;
    Engine *engine;
/*
    //variables booleanas que declaran si es T/F que el cohete tenga el elemento
    bool hasLiquidFuel;
    bool hasIonFuel;
    bool hasSolidFuel;
*/
    //Metodos publicos
    public:
        //Constructores
        Rocket() {
            pilot = "Piloto";
            cost = 0;
            mass = 0;
            // hasLiquidFuel = false;
            // hasIonFuel = false;
            // hasSolidFuel = false;

        };
        Rocket(string pil){
            pilot = pil;
            cost = 0;
            mass = 0;
            // hasLiquidFuel = false;
            // hasIonFuel = false;
            // hasSolidFuel = false;

        };
        //Getters y setters
        string getPilot()
        {
            return pilot;
        }
        double getMasa()
        {            
            return mass;
        }
        double getCosto()
        {
            return cost;
        }
        void setPilot(string p)
        {
            pilot = p;
        }
        //Funciones que añaden los objetos seleccionados
        void addEngine(int option)
        {
            //Objeto 1 clase Engine
            engine = new LiquidFuel("LV-T45 Swivel", 1.50, 1200, 167.97, 215.0, 11.42, 
            14.62, 13.703, 3.0);
            // hasLiquidFuel = true;

            //Objeto 2 clase Engine
            engine = new IonFuel("IX-6315 Dawn", 0.25, 8000, 0.048, 2.0, 0.019, 0.816,
             0.486, 8.741);
            // hasIonFuel = true;

            switch (option)
            {
            case 1:
                addSolidFuel(1);
                break;
            case 2:
                addSolidFuel(2);
                break;
            case 3:
                engine = new LiquidFuel("LV-T45 Swivel", 1.50, 1200, 167.97, 215.0, 11.42, 
                14.62, 13.703, 3.0);
                break;
            case 4:
                engine = new IonFuel("IX-6315 Dawn", 0.25, 8000, 0.048, 2.0, 0.019, 0.816,
                0.486, 8.741);;

                break;
            };
        }

        void addSolidFuel(int type)
        {
            //if que declara los dos Objetos (3) de la misma clase a añadir
            if (type == 1)
            {
                engine = new SolidFuel("RT_10 Hammer", 3.56, 400, 197.90, 227.00,
                 5.66, 6.50, 23.7, 375);
            }
            else if (type == 2)
            {
                engine = new SolidFuel("BACC Thumper", 7.65, 850, 250.00, 300.00,
                 3.33, 4.00, 42.2, 820);
            }
            // hasSolidFuel = true;
        }
        //Funcion futura de sobrecarga
        /*
        void buildRocket(string name) {
            engine = Engine(name)
        }

        void buildRocket(Engine newEngine) {
            engine = newEngine
        }
        */
        //Funcion que suma las masas y los costos acumulados
        void addMassCost() {
            mass = engine->GetMasa();
            cost = engine->GetCosto();
            // int masas = 0;
            // int costos = 0;
            // if (hasLiquidFuel) {
            //     masas += e1.GetMasa();
            //     costos += e1.GetCosto();
            // }
            // if (hasIonFuel) {
            //     masas += e2.GetMasa();
            //     costos += e2.GetCosto();
            // }
            // if (hasSolidFuel) {
            //     masas += e3.GetMasa();
            //     costos += e3.GetCosto();
            // }
             
            // mass = masas;
            // cost = costos;
        }

        /*Funcion que muestra las estadisticas del cohete con los objetos
        seleccionados*/
        void stats(){

            //Funcion que suma costos y masas de objetos
            addMassCost();

            //Introduccion con nombre al programa
            cout << "Pilot:" << pilot << " Kerman" << endl;
            cout << "Rocket Mass:" << mass << endl;
            cout << "Total cost:" << cost << "Funds" << endl;
        
            /*Condicionales para todos los objetos disponibles,
            hace uso de la clase abstracta engines e imprime
            la misma funcion con diferentes objetos, muestra 
            las estadisticas.*/
            
            engine->ShowStats();
            
            // if (hasLiquidFuel) {
            //     e1.ShowStats();
            // }
            // if (hasIonFuel) {
            //     e2.ShowStats();
            // }
            // if (hasSolidFuel) {
            //     e3.ShowStats();
            // }

            pilot = "";
            


        }

        
};

#endif