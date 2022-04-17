#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
void suma(float x,float y);
void resta(float x,float y);
void multiplicacion(float x, float y);
void division (float x,float y);
int simplificacion(int x,int y);
float num1,num2;
void pedirDatos(){
    cout<<"Ingresa ler numero:";
    cin>>num1;
    cout<<"Ingresa 2do numero:";
    cin>>num2;

}



main(){
    int opcion;

    do{
        cout<<"\TMENU DE OPCIONES"<<endl;
        cout<<"1. Suma"<<endl;
        cout<<"2. Resta"<<endl;
        cout<<"3. Multiplicacion"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5.simplificacion"<<endl;
        cout<<"Ingresa una opcion: ";
        cin>>opcion;

        switch(opcion){
        case 1: pedirDatos();
        suma(num1,num2);
        system("pause");
        break;
        case 2: pedirDatos();
        resta(num1,num2);
        system("pause");
        break;
        case 3: pedirDatos();
        multiplicacion(num1,num2);
        system("pause");float num1,num2;
        break;
        case 4: pedirDatos();
        division(num1,num2);
        system("pause");
        break;
        case 5: pedirDatos();
        simplificacion(num1,num2);
        system("pause");
        break;
        default:cout<<"opcion invalida";
        system("pause");
        break;
            }
            system("cls");
    }while(opcion<=5);
}


void suma(float x, float y){
    float suma = x + y;

    cout<<"Resultado= "<<suma<<endl;
}
void resta(float x, float y){
    float resta = x - y;

    cout<<"Resultado= "<<resta<<endl;
}
void multiplicacion(float x, float y){
    float multiplicacion = x * y;

    cout<<"Resultado= "<<multiplicacion<<endl;
}
void division(float x, float y){
    float division = x / y;

    cout<<"Resultado= "<<division<<endl;
}
void simplificacion(float x, float y){
    float simplificacion = x + y;

    cout<<"Resultado= "<<division<<endl;
}
int simplificacion(int x,int y){
	if(y==1){
		cout << x<<"/"<<y;
	}else{
	int b=2;
	while(b<= x){
		if(y%b==0 && x%b==0){
			y=y/b;
			 x= x/b;
		}else{
		b++;
		}
	}
	cout <<  x << "/"<<y;

	}

}


