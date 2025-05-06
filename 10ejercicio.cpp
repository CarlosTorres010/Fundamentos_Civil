/*Comparar una contrasena con una clave predefinida y mostrar si es correcta*/
#include<iostream>
using namespace std; 
int main(){
	int a; 
	int b=123456789;
	cout<<"Escribe la siguiente clave: ";
	cin>>a; 
	if(a==b){
		cout<<"Ingrese la contrasena correcta. ";
	}else{ 
		cout<<"Invalido, no ingreso correctamente la clave.";
	}
	return 0;
}
