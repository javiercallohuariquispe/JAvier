#include <iostream>
using namespace std;

class Nodo {
    //Atributos
    int dato; //char, float, string, objeto
    Nodo* enlace;//puntero..
public:
    //Constructor - inicializar los atributos
    Nodo(int dato)
    {
        this->dato = dato;
        enlace = NULL;//por que no apuntamos a ningun nodo
    }
    //getter and setter
    int getDato()
    {
        return dato;
    }
    void setDato(int dato)
    {
        this->dato = dato;
    }
    Nodo* getEnlace()
    {
        return this->enlace;
    }
    void setEnlace(Nodo* enlace)
    {
        this->enlace = enlace;
    }
    void imprimir()
    {
        cout << "/-------------------\\" << endl;
        cout << "|Dato: " << dato << endl;
        cout << "|-------------------" << endl;
        cout << "|Enlace: " << enlace << endl;
        cout << "\\------------------/" << endl;
    }
};

class Lista {
    Nodo* inicio;
public:
    Lista()
    {
        this->inicio = NULL;
    }
    void InsertarAlInicio(int dato)
    {
        Nodo* temp = new Nodo(dato);
        int elemento;
        if (EstaVacia())//lista vacia
        {
            inicio = temp;
        }
        else
        {

            Nodo* recorrido = this->inicio;
            if(inicio>recorrido){
                do{
                        cout<<"INGRESE OTRO DATO MENOR"<<endl;
                        cin >> elemento;

            }while(inicio<recorrido);
            }
            this->inicio = temp;
            this->inicio->setEnlace(recorrido);
        }
    }
    void Imprimir()
    {
        int i = 1;
        Nodo* recorrido = inicio;
        cout << "Lista enlazada****************************" << endl;
        while (recorrido != NULL)
        {
            cout << "---> Nodo " << i++ << endl;
            recorrido->imprimir();
            recorrido = recorrido->getEnlace();
        }
        cout << "****************************" << endl << endl;
    }
    void ImprimirEnLinea()
    {
        Nodo* recorrido = inicio;
        cout << "Lista enlazada****************************" << endl;
        while (recorrido != NULL)
        {
            cout << recorrido->getDato() << "\t";
            recorrido = recorrido->getEnlace();
        }
        cout << "****************************" << endl << endl;
    }
    //Implementar la busqueda de un elemento en la lista enlazada
    //Si la encuentra tiene que imprimir la dirección de memoría
    //donde esta este elemento.

    //------------------------------------
    //Implementar la eliminación de un nodo final

    void Vaciar()
    {
        inicio = NULL;
    }
    bool EstaVacia()
    {
        if (inicio == NULL)
            return true;
        else
            return false;
    }
    //Implementar la eliminación de un nodo inicio
};

void MostrarMenu()
{
    cout << "1.- Ver el contenido de la lista enlazada" << endl;
    cout << "2.- Insertar de forma ordenada descendente" << endl;
    cout << "7.- Vaciar la lista" << endl;
    cout << "0.- Salir" << endl;
}
int main()
{
    Lista edades = Lista();
    int elemento;
    int opcion;
    do
    {
        MostrarMenu();
        cin >> opcion;
        switch (opcion)
        {
        case 0:
            cout << "Ingeniería de Sistemas, hasta luego." << endl;
            break;
        case 1:
            edades.ImprimirEnLinea();
            break;
        case 2:
            cout << "Digite el elemento a insertar: " << endl;
            cin >> elemento;
            edades.InsertarAlInicio(elemento);
            break;
        case 7:
            edades.Vaciar();
            break;

        default:
            cout << "Opción no valida." << endl;
            break;
        }
    } while (opcion != 0);}

