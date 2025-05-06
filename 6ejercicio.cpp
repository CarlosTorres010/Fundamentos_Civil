/*Ingresar un número y mostrar si es positivo o negativo.*/
#include<iostream>
using namespace std; 
int main(){
	float num; 
	cout<<"Ingrese un numero: "; 
	cin>>num; 
	if(num>0){
		cout<<"El numero es positivo. "<<endl; 
	} else if(num<0){
		cout<<"El numero es negativo. "<<endl; 
	} else{
		cout<<"EL numero es neutro. "<<endl; 
	}
	return 0;
}
