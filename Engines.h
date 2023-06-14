/*
Proyecto Kerbal Space Program 2
Ramiro Flores Villarreal
A01710879
*/

/*
 *Clase Engines contiene los métodos y atributos de los motores disponibles
 *tiene 3 clases hijas; los diferentes tipos de motores que heredan los
 atributos de la clase madre
 * LiquidFuel, SolidFuel y IonFuel
 */

#ifndef ENGINES_H_
#define ENGINES_H_

#include <string>
using namespace std;

//Declaracion clase Engine
class Engine
{

//atributos protegidos que seran heredados
protected:
    string tipo;
    double masa;
    int costo;
    double atmThrust;
    double vacThrust;
    double atmTWR;
    double vacTWR;
//metodos publicos que seran heredados
public:
    //constructores
    Engine() :
        tipo(""),
        masa(0.0),
        costo(0),
        atmThrust(0.0),
        vacThrust(0.0),
        atmTWR(0.0),
        vacTWR(0.0) {};

    Engine(string tip, double mas, int cos, double atm, double vac, 
    double atmT, double vacT) :
        tipo(tip),
        masa(mas),
        costo(cos),
        atmThrust(atm),
        vacThrust(vac),
        atmTWR(atmT),
        vacTWR(vacT) {};

    //Getters y Setters
    string GetTipo()
    {
        return tipo;
    }
    double GetMasa()
    {
        return masa;
    }
    int GetCosto()
    {
        return costo;
    }
    double GetAtmthrust()
    {
        return atmThrust;
    }
    double GetVacthrust()
    {
        return vacThrust;
    }
    double GetAtmtwr()
    {
        return atmTWR;
    }
    double GetVactwr()
    {
        return vacTWR;
    }
    void setTipo(string t)
    {
        tipo = t;
    }
    void setMasa(double m)
    {
        masa = m;
    }
    void setCosto(int c)
    {
        costo = c;
    }
    void setatmThrust(double a)
    {
        atmThrust = a;
    }
    void setvacThrust(double v)
    {
        vacThrust = v;
    }
    void setatmTWR(double at)
    {
        atmTWR = at;
    }
    void setvacTWR(double vt)
    {
        vacTWR = vt;
    }

    virtual void ShowStats() = 0;

};

#endif