#include<iostream>

using namespace std;

//PILA
class Pila
{
	//atributos
	int tamanio = 5;
	int elementos[5];
	int indice;
public:
	//constructor
	Pila()
	{
		indice = 0;
	}
	//métodos
	//Pila llena
	bool PilaLlena()
	{
		if (indice == tamanio)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//Pila vacia
	bool PilaVacia()
	{
		if (indice == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//Insertar elemento
	void Insertar(int elemento)//Push
	{
		if (PilaLlena())
		{
			cout << "La pila esta llena." << endl;
		}
		else
		{
			elementos[indice] = elemento;
			indice = indice + 1;
		}
	}
	/// Quitar elemento
	int Quitar() // Pop
	{
		if (PilaVacia())
		{
			cout << "No hay en elementos en la pila" << endl;
			return 0;
		}
		else
		{
			indice = indice - 1;
			return elementos[indice];
		}
	}
	//Imprimir
	void Imprimir()
	{
		for (int i = indice - 1; i >= 0; i--)
		{
			cout << "|\t" << elementos[i] << "|" << endl;
			cout << "-----------" << endl;
		}
	}
	//Invertir
	void Invertir()
	{
		int tam=0,j,aux;
		if((indice)%2==0){
			tam=indice/2;

		}
		else{
			tam=indice/2+1;
		}
		j=tam;
		for (int i = 0; i < tam; i++)
		{
			j--;
			aux=elementos[i];
			elementos[i]=elementos[j];
			elementos[j]=aux;
		}

	}
};

void Menu()
{
	cout << "1) Insertar elemento " << endl;
	cout << "2) Quitar elemento " << endl;
	cout << "3) Imprimir pila " << endl;
	cout << "4) Invertir pila " << endl;
	cout << "0) Salir " << endl;
}

int main()
{
	int opcion = 0;
	int elemento = 0;
	Pila pila = Pila();
	do
	{
		Menu();
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			cout << "Ingrese el elemento" << endl;
			cin >> elemento;
			pila.Insertar(elemento);
			break;
		case 2:
			elemento = pila.Quitar();
			cout << "El elemento quitado es: " << pila.Quitar() << endl;
			break;
		case 3:
			pila.Imprimir();
			break;
		case 4:
			pila.Invertir();
			break;
		default:
			cout << "opción no valida" << endl;
			break;
		}
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	} while (opcion != 0);
}
