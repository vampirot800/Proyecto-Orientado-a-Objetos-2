/*
Proyecto Kerbal Space Program 2
Ramiro Flores Villarreal
A01710879
kspmain.cpp
*/

// Bibliotecas
#include <iostream>
#include <string>
using namespace std;

// Importacion de archivos
// Clases que heredan de "Engines.h"
#include "E_IonFuel.h"
#include "E_LiquidFuel.h"
#include "E_SolidFuel.h"


/*Clase con composicion donde se crean los objetos
que tendra el cohete, contiene todos los atributos
metodos de geters y setters, metodos para añadir
y guardar objetos al cohete, y metodos para imprimir
stats haciendo uso de polimorfismo y abstraccion
*/
#include "Rocket.h"


// Procedimiento menu
void menu()
{
    // Imprime las opciones que tendra el programa
    cout << "\nMenu:\n";
    cout << "1. Engines\n";
    cout << "2. Show Rocket stats\n";
    cout << "3. Quit\n\n";
}

// Sub-menu de la opcion 1 (Engines)
void menu_engine()
{
    // imprime las opciones de engines
    cout << "Choose your Engine:\n";
    cout << "1. Solid Fuel: "
            "RT_10 Hammer"
            "\n";
    cout << "2. Solid Fuel: "
            "BACC Thumper"
            "\n";
    cout << "3. Liquid Fuel: "
            "LV-T45 Swivel"
            "\n";
    cout << "4. Ion Fuel: "
            "IX-6315 Dawn"
            "\n\n";
}

int main(int argc, char *argv[])
{
    int opcion = 0;

    Rocket pi("");    

    // Impresion de introduccion al programa
    cout << "\n Wecome to the Kerbal Space program Vehicle Assembly Building!\n";
    cout << "\nWernher von Kerman: Welcome to today's lecture on vessel";
    cout << " construction. \nIm Wernher von Kerman. ";
    cout << "\nWhether you want to put, a satellite into orbit, make a";
    cout << " transcontinental flight, or step onto the very surface of the moon";
    cout << ",youre going to need to build yourself a ship.\n";
    cout << "It should be pretty easy even if youre not a famous rocket";
    cout << " scientist like myself.\n\n\n";

    // Funcion que pide nombre y regresa nombre +"kerman"
    string pilot;
    cout << "Please enter your name:";
    cin >> pilot;
    pi.setPilot(pilot);
    cout << "\nWelcome " << pi.getPilot() << " Kerman!\n"
         << endl;


    // Ciclo para que el propgrama siga corriendo mientras no elija salir
    while (opcion < 3 && opcion > -1)
    {
        // impresion de menu
        menu();
        // lee indice que selecciona opcion del menu
        cin >> opcion;
        // switch para cambiar de procedimiento acorde a la opcion
        switch (opcion)
        {
        // Caso 1 imprime el menu engines y agrega el engine seleccionado
        case 1:
            menu_engine();
            int engine;
            cin >> engine;

            pi.addEngine(engine);

            //COMENTADO PARA OPTIMIZACION DE CODIGO
            // switch (engine)
            // {
            // case 1:
            //     pi.addSolidFuel(1);
            //     break;
            // case 2:
            //     pi.addSolidFuel(2);
            //     break;
            // case 3:
            //     pi.addLiquidFuel();
            //     break;
            // case 4:
            //     pi.addIonFuel();
            //     break;
            // };

            break;

        // Caso 4 muestra las estadisticas del cohete 
        // con metodo de clase abstracta

        case 2:
            pi.stats();
            break;
        }
    }
}