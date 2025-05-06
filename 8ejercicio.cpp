/*Ingresar un numero y verificar si es par*/
#include<iostream>
using namespace std; 
int main(){
	int a;
	float c; 
	cout<<"Ingrese el numero: ";
	cin>>a;
	c=a%2;
	if(c==1){
		cout<<"El numero es impar.";
	}else{ 
		cout<<"El numero es par.";
	}
	
	return 0;
}
