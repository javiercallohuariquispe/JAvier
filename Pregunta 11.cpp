#include <iostream>
using namespace std;

class Nodo {
    //Atributos
    int dato;
    int dato2;
     //char, float, string, objeto
    Nodo* enlace;
    Nodo* enlace2;
    //puntero..
public:
   //Constructor - inicializar los atributos
   Nodo(int dato)
    {
        this->dato = dato;
        this->dato2 = dato2;
        enlace = NULL;
        enlace2 = NULL;//por que no apuntamos a ningun nodo
    }
    //getter and setter
     int getDato()
    {
        return dato;
        return dato2;
    }
    void setDato(int dato,int dato2)
    {
        this->dato = dato;
        this->dato2 = dato2;
    }
    Nodo* getEnlace()
    {
        return this->enlace;
    }
    Nodo* getEnlace2()
    {
        return this->enlace2;
    }
    void setEnlace(Nodo* enlace)
    {
        this->enlace = enlace;
    }
    void setEnlace2(Nodo* enlace2)
    {
        this->enlace2 = enlace2;
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
    Nodo* inicio2;
public:
    Lista()
    {
        this->inicio = NULL;
        this->inicio2 = NULL;
    }
    void InsertarDosListas(int dato,int dato1){
        Nodo* temp = new Nodo(dato);
        Nodo* temp2 = new Nodo(dato);
        if(EstaVacia()|| EstaVacia2()){
            inicio = temp;
            inicio2 = temp2;
        }
        else{
            Nodo* recorrido = this->inicio;
            this->inicio = temp;
            this->inicio->setEnlace(recorrido);

             Nodo* recorrido2 = this->inicio2;
            this->inicio2= temp2;
            this->inicio2->setEnlace2(recorrido2);
        }
        Nodo* recorrido = inicio;
        cout << "Lista enlazada A**" << endl;
        while (recorrido != NULL)
        {
            cout << recorrido->getDato() << "\t";
            recorrido = recorrido->getEnlace();
        }
        cout << "****************************" << endl << endl;


        Nodo* recorrido2 = inicio2;
        cout << "Lista enlazada B**" << endl;
        while (recorrido2 != NULL)
        {
            cout << recorrido2->getDato() << "\t";
            recorrido2 = recorrido2->getEnlace2();
        }
        cout << "****************************" << endl << endl;

        for(int i = 0;inicio>i;i++){
            if(recorrido2==recorrido){
                    cout<<"elemento com?n : "<<getEnlace2<<"="<<getEnlace<<endl;

            }
        }

    }
    void InsertarAlFinal(int dato)
    {
        Nodo* temp = new Nodo(dato);
        if (EstaVacia())//lista vacia
        {
            inicio = temp;
        }
        else
        {
            Nodo* recorrido = this->inicio;
            while (recorrido->getEnlace() != NULL)
            {
                recorrido = recorrido->getEnlace();
            }
            recorrido->setEnlace(temp);
        }
    }
    void InsertarAlInicio(int dato)
    {
        Nodo* temp = new Nodo(dato);
        if (EstaVacia())//lista vacia
        {
            inicio = temp;
        }
        else
        {
            Nodo* recorrido = this->inicio;
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
    //Si la encuentra tiene que imprimir la direcci?n de memor?a
    //donde esta este elemento.
    void Buscar(int datoBuscado)
    {
        bool encontrado = false;
        Nodo* recorrido = inicio;
        while (recorrido != NULL)
        {
            if (recorrido->getDato() == datoBuscado)
            {
                cout << "Elemento encontrado en la direcci?n de memor?a: " << recorrido << endl;
                encontrado = true;
                break;
            }
            else
            {
                recorrido = recorrido->getEnlace();
            }
        }
        if (encontrado == false)
        {
            cout << "El elemento buscado no fue encontrado." << endl;
        }
    }
    //------------------------------------
    //Implementar la eliminaci?n de un nodo final
    void EliminarElementoFinal()
    {
        if (EstaVacia())
        {
            cout << "No hay elemento a eliminar" << endl;
        }
        else
        {
            if (inicio->getEnlace() == NULL)
            {
                inicio = NULL;
            }
            else
            {
                Nodo* recorrido = inicio;
                while (recorrido->getEnlace() != NULL)
                {
                    //cout<<recorrido->getDato()<<"\t";
                    if (recorrido->getEnlace()->getEnlace() != NULL)
                        recorrido = recorrido->getEnlace();
                    else
                        break;
                }
                cout << endl;
                //recorrido->imprimir();
                recorrido->setEnlace(NULL);
                //recorrido->imprimir();
            }

        }

    }
    void EliminarElementoEnPosicion(int posicion)
    {
        int contador = 0;
        if (EstaVacia())
        {
            cout << "No hay elemento a eliminar" << endl;
        }
        else
        {
            if (posicion == 0)
            {
                EliminarElementoInicio();
            }
            else
            {
                Nodo* recorrido = inicio;

                while (recorrido->getEnlace() != NULL)
                {
                    if (contador == posicion - 1)
                    {
                        recorrido->setEnlace(recorrido->getEnlace()->getEnlace());
                        break;
                    }
                    else
                    {
                        contador++;
                        recorrido = recorrido->getEnlace();
                    }

                }
            }


        }
    }

    void EliminarElementoInicio()
    {
        if (EstaVacia())
        {
            cout << "No hay elemento a eliminar" << endl;
        }
        else
        {
            inicio = inicio->getEnlace();
        }
    }
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
     bool EstaVacia2()
    {
        if (inicio2 == NULL)
            return true;
        else
            return false;
    }
    //Implementar la eliminaci?n de un nodo inicio
};

void MostrarMenu()
{
    cout << "1.- Ver el contenido de la lista enlazada" << endl;
    cout << "2.- Insertar un elemento al inicio" << endl;
    cout << "3.- Insertar un elemento al final" << endl;
    cout << "4.- Buscar un elemento" << endl;
    cout << "5.- Eliminar un elemento inicial" << endl;
    cout << "6.- Eliminar un elemento final" << endl;
    cout << "7.- Vaciar la lista" << endl;
    cout << "8.- Eliminar un elemento en la posici?n" << endl;
    cout << "9.- insertar dos listas" << endl;
    cout << "0.- Salir" << endl;
}
int main()
{
    Lista edades = Lista();
    edades.InsertarAlFinal(20);
    edades.InsertarAlFinal(30);
    edades.InsertarAlFinal(21);
    edades.InsertarAlFinal(211);
    edades.InsertarAlFinal(24);
    edades.InsertarAlFinal(22);
    edades.InsertarAlFinal(33);
    int elemento;
    int elemento2;
    int opcion;
    do
    {
        MostrarMenu();
        cin >> opcion;
        switch (opcion)
        {
        case 0:
            cout << "Ingenier?a de Sistemas, hasta luego." << endl;
            break;
        case 1:
            edades.ImprimirEnLinea();
            break;
        case 2:
            cout << "Digite el elemento a insertar: " << endl;
            cin >> elemento;
            edades.InsertarAlInicio(elemento);
            break;
        case 3:
            cout << "Digite el elemento a insertar: " << endl;
            cin >> elemento;
            edades.InsertarAlFinal(elemento);
            break;
        case 4:
            cout << "Digite el elemento a buscar: " << endl;
            cin >> elemento;
            edades.Buscar(elemento);
            break;
        case 5:
            edades.EliminarElementoInicio();
            break;
        case 6:
            edades.EliminarElementoFinal();
            break;
        case 7:
            edades.Vaciar();
            break;
        case 8:
            cout << "Digite posici?n: " << endl;
            cin >> elemento;
            edades.EliminarElementoEnPosicion(elemento);
            break;
        case 9:
            cout << "insetar dos listas" << endl;
            cout << "Digite el elemento a insertar en lista A: " << endl;
            cin >> elemento;
            cout << "Digite el elemento a insertar en la lista B: " << endl;
            cin >> elemento2;
            edades.InsertarDosListas(elemento,elemento2);
            break;
        default:
            cout << "Opci?n no valida." << endl;
            break;
        }
    } while (opcion != 0);}
