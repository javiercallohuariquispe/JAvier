#include<iostream>
using namespace std;
int fib(int i){
    if(i<2){
        return i;}
    else{
        return fib(i-1) + fib(i-2);}
}
int main(){
    int n;
    cout<<"Ingrese la cantidad de numeros fibonacci : ";cin>>n;//5
    for (int i=0;i<n;i++){
        cout<<fib(i)<<" ";}
}
