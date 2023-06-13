/*
Proyecto Kerbal Space Program
Ramiro Flores Villarreal
A01710879
*/

/*
 *Clase Rocket contiene los métodos requeridos para elegir y sumar todas
  las estadisticas del cohete, asi como composicion a las clases Engines.h,
  FuelTanks.h, y Pods
 */

#ifndef ROCKET_H_
#define ROCKET_H_

#include "E_IonFuel.h"
#include "E_LiquidFuel.h"
#include "E_SolidFuel.h"
#include "FT_Liquid.h"
#include "FT_RCS.h"
#include "FT_Rocket.h"
#include "Pods.h"

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
    LiquidFuel e1;
    IonFuel e2;
    SolidFuel e3;
    LiquidFT ft1;
    RCSFT ft2;
    RocketFT ft3;
    Pods p1;
    //variables booleanas que declaran si es T/F que el cohete tenga el elemento
    bool hasLiquidFuel;
    bool hasIonFuel;
    bool hasSolidFuel;
    bool hasLiquidFT;
    bool hasRCSFT;
    bool hasRocketFT;
    bool hasPods;

    //Metodos publicos
    public:
        //Constructores
        Rocket() {
            pilot = "Piloto";
            cost = 0;
            mass = 0;
            hasLiquidFuel = false;
            hasIonFuel = false;
            hasSolidFuel = false;
            hasLiquidFT = false;
            hasRCSFT = false;
            hasRocketFT = false;
            hasPods = false;
        };
        Rocket(string pil){
            pilot = pil;
            cost = 0;
            mass = 0;
            hasLiquidFuel = false;
            hasIonFuel = false;
            hasSolidFuel = false;
            hasLiquidFT = false;
            hasRCSFT = false;
            hasRocketFT = false;
            hasPods = false;
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
        void addLiquidFuel()
        {
            //Objeto 1 clase Engine
            e1 = LiquidFuel("LV-T45 Swivel", 1.50, 1200, 167.97, 215.0, 11.42, 
            14.62, 13.703, 3.0);
            hasLiquidFuel = true;
        }

        void addIonFuel()
        {
            //Objeto 2 clase Engine
            e2 = IonFuel("IX-6315 Dawn", 0.25, 8000, 0.048, 2.0, 0.019, 0.816,
             0.486, 8.741);
            hasIonFuel = true;
        }

        void addLiquidFT()
        {
            //Objeto 1 clase Fuel Tanks
            ft1 = LiquidFT("Mk1 Fuselage", 2.25, 550, 400);
            hasLiquidFT = true;
        }

        void addSolidFuel(int type)
        {
            //if que declara los dos Objetos (3) de la misma clase a añadir
            if (type == 1)
            {
                e3 = SolidFuel("RT_10 Hammer", 3.56, 400, 197.90, 227.00,
                 5.66, 6.50, 23.7, 375);
            }
            else if (type == 2)
            {
                e3 = SolidFuel("BACC Thumper", 7.65, 850, 250.00, 300.00,
                 3.33, 4.00, 42.2, 820);
            }
            hasSolidFuel = true;
        }

        void addRCSFT()
        {
            //Objeto 2 clase Fuel Tanks
            ft2 = RCSFT("FL-R20", 0.10, 200, 20);

            hasRCSFT = true;
        }

        void addRocketFT()
        {
            //Obejto 3 clase Fuel Tanks
            ft3 = RocketFT("FL-T200", 1.125, 275, 90, 110);

            hasRocketFT = true;
        }

        void addPods(int type)
        {
            //if que declara los dos Objetos (1) de la misma clase a añadir
            if (type == 1)
            {   
                p1 = Pods("Mk1-Command Pod", 0.84, 600, 1);
            }
            else if (type == 2)
            {   
                p1 = Pods("Mk3-Command Pod", 2.72, 3800, 3);
            }
            hasPods = true;
        }
        //Funcion que suma las masas y los costos acumulados
        void addMassCost() {
            int masas = 0;
            int costos = 0;
            if (hasLiquidFuel) {
                masas += e1.GetMasa();
                costos += e1.GetCosto();
            }
            if (hasIonFuel) {
                masas += e2.GetMasa();
                costos += e2.GetCosto();
            }
            if (hasSolidFuel) {
                masas += e3.GetMasa();
                costos += e3.GetCosto();
            }
            if (hasLiquidFT) {
                masas += ft1.GetMasa();
                costos += ft1.GetCosto();
            }
            if (hasRCSFT) {
                masas += ft2.GetMasa();
                costos += ft2.GetCosto();
            }
            if (hasRocketFT) {
                masas += ft3.GetMasa();
                costos += ft3.GetCosto();
            } 
            if (hasPods) {
                masas += p1.GetMasa();
                costos += p1.GetCosto();
            } 
            mass = masas;
            cost = costos;
        }

        /*Funcion que muestra las estadisticas del cohete con los objetos
        seleccionados*/
        void showstats(){

            //Funcion que suma costos y masas de objetos
            addMassCost();

            //Introduccion con nombre al programa
            cout << "Pilot:" << pilot << " Kerman" << endl;
            cout << "Rocket Mass:" << mass << endl;
            cout << "Total cost:" << cost << "Funds" << endl;
        
            /*Condicionales para todos los objetos disponibles, imprime 
            las estadisticas.*/
            if (hasLiquidFuel) {
                e1.showStatsE();
            }
            if (hasIonFuel) {
                e2.showStatsE();
            }
            if (hasSolidFuel) {
                e3.showStatsE();
            }
            if (hasLiquidFT) {
                ft1.showStatsFT();
            }
            if (hasRCSFT) {
                ft2.showStatsFT();
            }
            if (hasRocketFT) {
                ft3.showStatsFT();
            } 
            if (hasPods) {
                p1.showStatsP();
            } 

            pilot = "";
            


        }

        
};

#endif