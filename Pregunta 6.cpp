#include <iostream>
using namespace std;
class ColaCircular
{
    //atributos
    int tamano = 5;
    int elementos[5];
    int indiceInicio;
    int indiceFinal;
    int cantidadElementos;
public:
    //construtor
    ColaCircular()
    {
        indiceInicio = 0;
        indiceFinal = 0;
        cantidadElementos = 0;
    }

    //metodos

    bool ColaLlena()
    {
        if (cantidadElementos >= tamano)
            return true;
        else
            return false;
    }
    bool ColaVacia()
    {
        if (cantidadElementos <= 0)
            return true;
        else
            return false;
    }
    void Insertar(int elemento)
    {
        if (ColaLlena())
        {
            cout << "La cola esta llena" << endl;
        }
        else
        {
            cantidadElementos++;
            elementos[indiceFinal] = elemento;
            indiceFinal = indiceFinal + 1;
            if (indiceFinal >= tamano)
                indiceFinal = 0;
        }
    }
    int Quitar()
    {
        if (ColaVacia())
        {
            cout << "La cola esta vacia" << endl;
        }
        else
        {
            int valorRetornar = elementos[indiceInicio];
            indiceInicio = indiceInicio + 1;
            if (indiceInicio >= tamano)
                indiceInicio = 0;
            cantidadElementos--;
            return valorRetornar;
        }
    }


    void Imprimir()
    {
        int indice = indiceInicio;
        for (int i = 0; i < cantidadElementos; i++)
        {
            cout << elementos[indice] << "\t";
            indice++;
            if (indice >= tamano)
                indice = 0;
        }
        cout << endl;
    }
     void Vaciar(){
        if(cantidadElementos!=0){
            for (int i = 0; cantidadElementos>i; i){
                Quitar();
            }
            cout<<"se ha vaciado correctamente"<<endl;

        }
        else{
            cout << "La cola esta vacia" << endl;

        }

    }


};


void Menu()
{
    cout << "1) Insertar elemento " << endl;
    cout << "2) Quitar elemento " << endl;
    cout << "3) Imprimir cola " << endl;
    cout << "4) Vaciar cola " << endl;
    cout << "0) Salir " << endl;
}

int main()
{
    int opcion = 0;
    int elemento = 0;
    ColaCircular cola = ColaCircular();
    do
    {
        Menu();
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Ingrese el elemento" << endl;
            cin >> elemento;
            cola.Insertar(elemento);
            break;
        case 2:
            cout << "El elemento quitado es: " << cola.Quitar() << endl;
            break;
        case 3:
            cola.Imprimir();
            break;
         case 4:
            cola.Vaciar();
            break;

        default:
            cout << "opci�n no valida" << endl;
            break;
        }
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    } while (opcion != 0);
}
