/*Pedir al usuario tres notas y calcular el promedio.*/
#include<iostream>
using namespace std; 
int main(){
	int nota1,nota2,nota3,promedio; 
	cout<<"Ingrese la primera nota: ";
	cin>>nota1; 
	cout<<"Ingrese la primera nota: ";
	cin>>nota2; 
	cout<<"Ingrese la primera nota: ";
	cin>>nota3; 
	promedio=(nota1+ nota2+nota3)/3;
	cout<<"EL promedio de los 3 numeros es "<< promedio<<endl; 
	return 0;
}
