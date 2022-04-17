#include <iostream>
using namespace std;

void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac);

int main ()
{
    int anioAct;  //Año Actual
    int mesAct; //Mes actual
    int fechAct; //Fecha actual

    int anioNac; //Año nacimiento
    int mesNac; //Mes nacimiento
    int fechNac; //Fecha nacimiento

    cout << "\n\tPrograma que calcula la Edad, Mes y Dia\n\n";
    cout << "Ingrese Año Actual: ";   cin >> anioAct;
    cout << "Ingrese Mes Actual: ";   cin >> mesAct;
    cout << "Ingrese Fecha Actual: ";  cin >> fechAct;

    cout << "\nIngrese Año Nacimiento: ";  cin >> anioNac;
    cout << "Ingrese Mes de Nacimiento: ";  cin >> mesNac;
    cout << "Ingrese Fecha de Nacimiento: ";  cin >> fechNac;

    calcularEdad( anioAct , mesAct, fechAct, anioNac, mesNac, fechNac);
    return 0;
}


void calcularEdad( int anioAct , int mesAct, int fechAct, int anioNac, int mesNac, int fechNac)
{
    int respFech , respMes;

    if ( fechAct < fechNac  )
    {
        fechAct = fechAct + 30;
        mesAct = mesAct - 1;
        respFech =  fechAct - fechNac;
    }
    else
        respFech =  fechAct - fechNac;

    if( mesAct < mesNac )
    {
        mesAct = mesAct + 12;
        anioAct = anioAct - 1 ;
        respMes = mesAct - mesNac;
    }
    else
        respMes = mesAct - mesNac;

    cout << "\nUd. tiene:\n";
    cout << " Edad: " <<anioAct - anioNac << endl;
    cout << " Mes: " << respMes << endl;
    cout << " Dia: " << respFech << endl; }
