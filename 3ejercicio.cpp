/*Pedir los grados Celsius y convertir a Fahrenheit*/
#include<iostream>
using namespace std; 
int main(){
	int C,F;
	cout<<"Ingrese la cantidad en grados Celsius: ";
	cin>>C; 
	F=(9*C/5)+32; 
	cout<<"Se muestra de " << C <<" grados Celsius "<< "a "<< F  <<" Fahrenheit"<<endl;
	return 0;
}
