/*Ingresar la edad de una persona y mostrar si es mayor de edad */
#include<iostream>
using namespace std; 
int main(){
	float edad; 
	cout<<"Ingrese la edad de la persona: ";
	cin>>edad; 
	if(edad>=18){
		cout<<"La siguiente persona es mayor e edad";
	}else{ 
		cout<<"La siguiente pesona es menor de edad";
	}
	return 0;
}
