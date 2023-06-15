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
    virtual string GetTipo()
    {
        return tipo;
    }
    virtual double GetMasa()
    {
        return masa;
    }
    virtual int GetCosto()
    {
        return costo;
    }
    virtual double GetAtmthrust()
    {
        return atmThrust;
    }
    virtual double GetVacthrust()
    {
        return vacThrust;
    }
    virtual double GetAtmtwr()
    {
        return atmTWR;
    }
    virtual double GetVactwr()
    {
        return vacTWR;
    }
    virtual void setTipo(string t)
    {
        tipo = t;
    }
    virtual void setMasa(double m)
    {
        masa = m;
    }
    virtual void setCosto(int c)
    {
        costo = c;
    }
    virtual void setatmThrust(double a)
    {
        atmThrust = a;
    }
    virtual void setvacThrust(double v)
    {
        vacThrust = v;
    }
    virtual void setatmTWR(double at)
    {
        atmTWR = at;
    }
    virtual void setvacTWR(double vt)
    {
        vacTWR = vt;
    }

    //Clase Abstracta
    virtual void ShowStats() = 0;

};

#endif